//*****************************************************************************
//
// qs-rgb.c - Quickstart for the EK-TM4C123GXL.
//
// Copyright (c) 2012-2017 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.4.178 of the EK-TM4C123GXL Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_hibernate.h"
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"
#include "driverlib/hibernate.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/sysctl.h"
#include "driverlib/systick.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"
#include "utils/cmdline.h"
#include "drivers/rgb.h"
#include "drivers/buttons.h"
#include "rgb_commands.h"
#include "asng1_t02_TIVAC123g.h"
#include "driverlib/adc.h"


//*****************************************************************************
//
// Input buffer for the command line interpreter.
//
//*****************************************************************************
static char g_cInput[APP_INPUT_BUF_SIZE];


//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************
#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif
uint8_t ui8RedData=0;
uint8_t ui8GreenData=0;
uint8_t ui8BlueData=0;

uint32_t ui32ADC0Value[4];
volatile uint32_t ui32TempAvg;
volatile uint32_t ui32TempC;
volatile uint32_t ui32TempF;


int EnableRed(void){
    ui8RedData=1;
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 2);
    return 1;
}

int DisableRed(void){
    ui8RedData=0;
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x00);
    return 1;
}
int EnableGreen(void){
    ui8GreenData=1;
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 8);
    return 1;
}

int DisableGreen(void){
    ui8GreenData=0;
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x00);
    return 1;
}

int EnableBlue(void){
    ui8BlueData=1;
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 4);
    return 1;
}

int DisableBlue(void){
    ui8BlueData=0;
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x00);
    return 1;
}

int printCel(void){
    ADCIntClear(ADC0_BASE, 1);
    ADCProcessorTrigger(ADC0_BASE, 1);

    while(!ADCIntStatus(ADC0_BASE,1,false))
        {

        }

    ADCSequenceDataGet(ADC0_BASE, 1, ui32ADC0Value);

    ui32TempAvg = (ui32ADC0Value[0]+ui32ADC0Value[1]+ui32ADC0Value[2]+ui32ADC0Value[3]+2)/4;
    ui32TempC = (1475 - ((2475 * ui32TempAvg)) / 4096)/10;
    UARTprintf("C %3d\t",ui32TempC);
    UARTprintf("\n");

    return 1;
}

int printFar(void){
    ADCIntClear(ADC0_BASE, 1);
    ADCProcessorTrigger(ADC0_BASE, 1);

    while(!ADCIntStatus(ADC0_BASE,1,false))
        {

        }

    ADCSequenceDataGet(ADC0_BASE, 1, ui32ADC0Value);

    ui32TempAvg = (ui32ADC0Value[0]+ui32ADC0Value[1]+ui32ADC0Value[2]+ui32ADC0Value[3]+2)/4;
    ui32TempC = (1475 - ((2475 * ui32TempAvg)) / 4096)/10;
    ui32TempF = ((ui32TempC*9) + 160)/5;
    UARTprintf("F %3d\t",ui32TempF);
    UARTprintf("\n");

    return 1;
}

int PrintStatus(void){

    UARTprintf("Red is ");
    if(ui8RedData != 0)
        UARTprintf(" on. ");
    else
        UARTprintf(" off. ");

    UARTprintf("Green is ");
    if(ui8GreenData != 0)
        UARTprintf(" on. ");
    else
        UARTprintf(" off. ");

    UARTprintf("Blue is ");
    if(ui8BlueData != 0)
        UARTprintf(" on. ");
    else
        UARTprintf(" off. ");
    UARTprintf("\n");

    return 1;
}

//*****************************************************************************
//
// Configure the UART and its pins.  This must be called before UARTprintf().
//
//*****************************************************************************
void
ConfigureUART(void)
{
    //
    // Enable the GPIO Peripheral used by the UART.
    //
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

    //
    // Enable UART0
    //
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);

    //
    // Configure GPIO Pins for UART mode.
    //
    ROM_GPIOPinConfigure(GPIO_PA0_U0RX);
    ROM_GPIOPinConfigure(GPIO_PA1_U0TX);
    ROM_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    //
    // Use the internal 16MHz oscillator as the UART clock source.
    //
    UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);

    //
    // Initialize the UART for console I/O.
    //
    UARTStdioConfig(0, 115200, 16000000);
}

//*****************************************************************************
//
// Main function performs init and manages system.
//
// Called automatically after the system and compiler pre-init sequences.
// Performs system init calls, restores state from hibernate if needed and
// then manages the application context duties of the system.
//
//*****************************************************************************
int
main(void)
{
    int32_t i32CommandStatus;


    //
    // Set the system clock to run at 40Mhz off PLL with external crystal as
    // reference.
    //
    ROM_SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ |
                       SYSCTL_OSC_MAIN);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
       while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
              {
              }
       // Configure IO
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);

    // Configure ADC
        SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
        ADCHardwareOversampleConfigure(ADC0_BASE, 64);

        ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0); // Changed to sequencer #2
        ADCSequenceStepConfigure(ADC0_BASE,1,0,ADC_CTL_TS);
        ADCSequenceStepConfigure(ADC0_BASE,1,1,ADC_CTL_TS);
        ADCSequenceStepConfigure(ADC0_BASE,1,2,ADC_CTL_TS);

        ADCSequenceStepConfigure(ADC0_BASE,1,3,ADC_CTL_TS|ADC_CTL_IE|ADC_CTL_END);
        ADCSequenceEnable(ADC0_BASE,1);

    //
    // Enable and Initialize the UART.
    //
    ConfigureUART();
    ADCSequenceEnable(ADC0_BASE, 2);


    UARTprintf("Welcome to the Tiva C Series TM4C123G LaunchPad!\n");
    UARTprintf("Type 'help' for a list of commands\n");
    UARTprintf("> ");

    //
    // spin forever and wait for carriage returns or state changes.
    //
    while(1)
    {

        UARTprintf("\n>");


        //
        // Peek to see if a full command is ready for processing
        //
        while(UARTPeek('\r') == -1)
        {
            //
            // millisecond delay.  A SysCtlSleep() here would also be OK.
            //
            SysCtlDelay(SysCtlClockGet() / (1000 / 3));

        }

        //
        // a '\r' was detected get the line of text from the user.
        //
        UARTgets(g_cInput,sizeof(g_cInput));

        //
        // Pass the line from the user to the command processor.
        // It will be parsed and valid commands executed.
        //
        i32CommandStatus = CmdLineProcess(g_cInput);

        //
        // Handle the case of bad command.
        //
        if(i32CommandStatus == CMDLINE_BAD_CMD)
        {
            UARTprintf("Bad command!\n");
        }

        //
        // Handle the case of too many arguments.
        //
        else if(i32CommandStatus == CMDLINE_TOO_MANY_ARGS)
        {
            UARTprintf("Too many arguments for command processor!\n");
        }
    }
}
