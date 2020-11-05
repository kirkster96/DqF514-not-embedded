/*
 *  ======== empty_min.c ========
 */

#include <file.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/hal/Hwi.h>


/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
// #include <ti/drivers/I2C.h>
// #include <ti/drivers/SDSPI.h>
// #include <ti/drivers/SPI.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/uart/UARTTivaDMA.h>
// #include <ti/drivers/Watchdog.h>
// #include <ti/drivers/WiFi.h>


/* Board Header file */
#include "Board.h"


//------------------------------------------
// TivaWare Header Files
//------------------------------------------
#include "driverlib/adc.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/timer.h"

#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_ints.h"


#define TASKSTACKSIZE   512

Task_Struct task0Struct;
Char task0Stack[TASKSTACKSIZE];
uint32_t g_pui32ADCData;
volatile int16_t timerCount = 0;
//Semaphore_Handle ADCSem, UARTSem;

/*
 *  ======== heartBeatFxn ========
 *  Toggle the Board_LED0. The Task_sleep is determined by arg0 which
 *  is configured for the heartBeat Task instance.
 */

Void heartBeatFxn(UArg arg0, UArg arg1)
{
    while (1) {
        Task_sleep(1000);
        GPIO_toggle(Board_LED1);
    }
}



Void consoleFxn(void)
{
    UART_Handle uart;
    UART_Params uartParams;
    const char echoPrompt[] = "\fAssignment 3\r\n";
    const char adcPrompt[] = "\fADC Value:";
    const char newLine[] = "\r\n";
    char input = 48;

    uint32_t tempVal = 0;
    uint32_t cnt = 10;

    /* Create a UART with data processing off. */
    UART_Params_init(&uartParams);
    uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_OFF;
    uartParams.baudRate = 9600;
    uart = UART_open(Board_UART0, &uartParams);

    if (uart == NULL) {
        System_abort("Error opening the UART");
    }

    UART_write(uart, echoPrompt, sizeof(echoPrompt));
    //UARTprintf("Temperature Value %3d", g_pui32ADCData);
    //System_printf("Hello, universe!\r\n");

    /* Loop forever echoing */

    while (1) {
        Semaphore_pend(UARTSem, BIOS_WAIT_FOREVER);

        UART_write(uart, adcPrompt, sizeof(adcPrompt));
        {
        tempVal = g_pui32ADCData;
        //tempVal = timerCount;
        char tmp[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ','0'};
        cnt = 9;
        while (tempVal != 0){
            input = 48 + (tempVal % 10);
            tempVal = tempVal/10;
            if(cnt >= 0){
                tmp[cnt] = input;
                cnt--;
            }
        }
        UART_write(uart, tmp, 10);
        }
        UART_write(uart, newLine, sizeof(newLine));
        //Task_sleep(2000);
    }
}

Void adcTaskFxn(void)
{
    //Task_sleep(5000);
    //TimerIntClear(TIMER2_BASE, TIMER_TIMA_TIMEOUT);         // must clear timer flag FROM timer
    ADCProcessorTrigger(ADC0_BASE,0);
    while(1)
    {
        Semaphore_pend(adcSem, BIOS_WAIT_FOREVER);
        ADCIntClear(ADC0_BASE,0);


//        while(!ADCIntStatus(ADC0_BASE,0,false))
//        {
//
//        }
        //
        // Read the data and trigger a new sample request.
        //
        ADCSequenceDataGet(ADC0_BASE, 0, &g_pui32ADCData);
        ADCProcessorTrigger(ADC0_BASE,0);
        //Task_sleep(1000);
    }


}

void ADCInit(void)
{
//       Add ADC on PD3


    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlGPIOAHBEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    SysCtlPeripheralReset(SYSCTL_PERIPH_ADC0);
    ADCHardwareOversampleConfigure(ADC0_BASE,64);

    ADCReferenceSet(ADC0_BASE, ADC_REF_EXT_3V);

    //
    // Configure the pins to be used as analog inputs.
    //
    GPIOPinTypeADC(GPIO_PORTD_AHB_BASE, GPIO_PIN_3);

    //
    // Configure the sequence step
    //
    ADCSequenceConfigure(ADC0_BASE,0,ADC_TRIGGER_PROCESSOR,0);
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH4);

    ADCSequenceEnable(ADC0_BASE, 0);

}

void timerTask(void){
    TimerIntClear(TIMER2_BASE, TIMER_TIMA_TIMEOUT);         // must clear timer flag FROM timer

    timerCount++;
    if(timerCount == 5)
    {
        //post ADC
        Semaphore_post(adcSem);

    }
    if(timerCount == 10)
    {
        //post UART UARTSem
        Semaphore_post(UARTSem);
    }

    if(timerCount == 15)
    {
        //post Switch
        timerCount = 0;
    }
}



/*
 *  ======== main ========
 */
int main(void)
{

    /* Call board init functions */
    Board_initGeneral();
    Board_initGPIO();
    // Board_initI2C();
    // Board_initSDSPI();
    // Board_initSPI();
     Board_initUART();
     //Board_initUSB(Board_USBDEVICE);
    // Board_initWatchdog();
    // Board_initWiFi();

     // Timer 2 setup code
     uint32_t ui32Period;
     SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER2);           // enable Timer 2 periph clks
    TimerConfigure(TIMER2_BASE, TIMER_CFG_PERIODIC);        // cfg Timer 2 mode - periodic

    ui32Period = 10000;                     // period = CPU clk div 2 (500ms)
    TimerLoadSet(TIMER2_BASE, TIMER_A, ui32Period);         // set Timer 2 period

    TimerIntEnable(TIMER2_BASE, TIMER_TIMA_TIMEOUT);        // enables Timer 2 to interrupt CPU

    TimerEnable(TIMER2_BASE, TIMER_A);                      // enable Timer 2



    ADCInit();
    g_pui32ADCData = 1337;

    /* Turn on user LED  */
    GPIO_write(Board_LED1, Board_LED_ON);

    /* Start BIOS */
    BIOS_start();

    return (0);
}
