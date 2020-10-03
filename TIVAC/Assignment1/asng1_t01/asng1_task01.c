
#include <stdint.h>
#include <stdbool.h>
#include "inc/tm4c123gh6pm.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "inc/hw_ints.h"
#include "driverlib/interrupt.h"
#include "driverlib/timer.h"
#include "driverlib/debug.h"
#include "driverlib/adc.h"
#include "utils/uartstdio.h"
#include <string.h>


#ifdef DEBUG
void__error__(char *pcFilename, uint32_t ui32Line)
{

}
#endif

//Globals
uint32_t ui32Period;
uint8_t ui8PinData=1;
char buffer[4];

uint32_t ui32ADC0Value[4];
volatile uint32_t ui32TempAvg;
volatile uint32_t ui32TempC;
volatile uint32_t ui32TempF;

void GPIOF4IntHandler(void)
{
    GPIOIntClear(GPIO_PORTF_BASE, GPIO_PIN_4);


    if(ui8PinData==1){
        ui8PinData=0;
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0xF);
        SysCtlDelay(200000);
    } else {
        ui8PinData=1;
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x0);
        SysCtlDelay(200000);
    }

}

//Timer 1 ISR
void Timer1IntHandler(void)
{
    // Clear the timer ineterrupt
    TimerIntClear(TIMER1_BASE, TIMER_TIMA_TIMEOUT);

    ADCIntClear(ADC0_BASE, 1);
    ADCProcessorTrigger(ADC0_BASE, 1);

    while(!ADCIntStatus(ADC0_BASE,1,false))
    {

    }

    ADCSequenceDataGet(ADC0_BASE, 1, ui32ADC0Value);

    ui32TempAvg = (ui32ADC0Value[0]+ui32ADC0Value[1]+ui32ADC0Value[2]+ui32ADC0Value[3]+2)/4;
    ui32TempC = (1475 - ((2475 * ui32TempAvg)) / 4096)/10;
    ui32TempF = ((ui32TempC*9) + 160)/5;
    UARTprintf("C %3d\t",ui32TempC);
    UARTprintf("F %3d\t",ui32TempF);
    UARTprintf("\n");
}

int main(void)
{
    //Configure Clock
    SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);
    // Configure peripherals
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER1);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
           {
           }
    // Configure IO
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_4);
    GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);

    //register the interrupt handler for PF4
    GPIOIntRegister(GPIO_PORTF_BASE, GPIOF4IntHandler);
    //sw2 goes low when pressed
    GPIOIntTypeSet(GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_FALLING_EDGE);
    //enable interrupts on PF4
    GPIOIntEnable(GPIO_PORTF_BASE, GPIO_PIN_4);

    // Configure ADC
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    ADCHardwareOversampleConfigure(ADC0_BASE, 64);

    ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0); // Changed to sequencer #2
    ADCSequenceStepConfigure(ADC0_BASE,1,0,ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE,1,1,ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE,1,2,ADC_CTL_TS);

    ADCSequenceStepConfigure(ADC0_BASE,1,3,ADC_CTL_TS|ADC_CTL_IE|ADC_CTL_END);
    ADCSequenceEnable(ADC0_BASE,1);

    //Configure Timer 1 module
    TimerConfigure(TIMER1_BASE, TIMER_CFG_PERIODIC);
    ui32Period = SysCtlClockGet()/2;    //Period of 0.5s or 2Hz
    TimerLoadSet(TIMER1_BASE, TIMER_A, ui32Period - 1);
    IntEnable(INT_TIMER1A);
    TimerIntEnable(TIMER1_BASE, TIMER_TIMA_TIMEOUT);

    //Configure pins for UART
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
    UARTStdioConfig(0, 115200, 16000000);
    //Enable interrupts
    IntMasterEnable();
    TimerEnable(TIMER1_BASE, TIMER_A);
    ADCSequenceEnable(ADC0_BASE, 2);
    //Initial message to terminal display
    UARTprintf("Temperature:\n");
    while(1) //wait forever
    {

    }

}
