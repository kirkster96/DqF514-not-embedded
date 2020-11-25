/*
 * Copyright (c) 2015-2019, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== hello.c ========
 */

/* XDC Module Headers */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Module Headers */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Clock.h>

#include <ti/drivers/Board.h>
#include <ti/drivers/GPIO.h>
#include <ti/drivers/ADC.h>
#include <ti/display/Display.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/Timer.h>
#include <ti/drivers/PWM.h>

/* Driver Configuration */
#include "ti_drivers_config.h"

/* ADC conversion result variables */
uint16_t adcValue0;
volatile int16_t timerCount = 0;

/* Period and duty in microseconds */
uint16_t   pwmPeriod = 3000;
uint16_t   duty = 0;
uint16_t   dutyInc = 100;

/* Sleep time in microseconds */
uint32_t   time = 50000;
PWM_Handle pwm1 = NULL;
PWM_Handle pwm2 = NULL;
PWM_Params params;


/* Make sure we have nice 8-byte alignment on the stack to avoid wasting memory */
#define STACKSIZE 1024


void doUrgentWork(void)
{
    PWM_Params_init(&params);
    params.dutyUnits = PWM_DUTY_US;
    params.dutyValue = 0;
    params.periodUnits = PWM_PERIOD_US;
    params.periodValue = pwmPeriod;
    pwm1 = PWM_open(CONFIG_PWM_0, &params);
    if (pwm1 == NULL) {
        /* CONFIG_PWM_0 did not open */
        while (1);
    }

    PWM_start(pwm1);


    /* Loop forever incrementing the PWM duty */
    while (1) {
        PWM_setDuty(pwm1, duty);

        Task_sleep(50*(1000/Clock_tickPeriod));
    }
}


void HeartBeatfunc(UArg arg0, UArg arg1)
{
    while(1)
    {
        GPIO_toggle(CONFIG_GPIO_LED_0);
        Task_sleep(500*(1000/Clock_tickPeriod));
    }
}

void urgentWorkTaskFunc(UArg arg0, UArg arg1)
{
    while(1)
    {
        /* Do work */
        doUrgentWork();


        //Task_sleep(1000*(1000/Clock_tickPeriod));
    }
}

void uartTaskFunc(UArg arg0, UArg arg1)
{
        char        input;
        const char  echoPrompt[] = "CpE 403 Assignment 4\r\n";
        const char adcPrompt[] = "\fADC Value:";
        const char newLine[] = "\r\n";
        UART_Handle uart;
        UART_Params uartParams;

        uint32_t tempVal = 0;
        uint32_t cnt = 10;

        /* Create a UART with data processing off. */
        UART_Params_init(&uartParams);
        uartParams.writeDataMode = UART_DATA_BINARY;
        uartParams.readDataMode = UART_DATA_BINARY;
        uartParams.readReturnMode = UART_RETURN_FULL;
        uartParams.baudRate = 115200;

        uart = UART_open(CONFIG_UART_0, &uartParams);

        if (uart == NULL) {
            /* UART_open() failed */
            while (1);
        }

        UART_write(uart, echoPrompt, sizeof(echoPrompt));

        /* Loop forever echoing */
        while (1) {
            Semaphore_pend(UARTSem, BIOS_WAIT_FOREVER);

            UART_write(uart, adcPrompt, sizeof(adcPrompt));
                {
                tempVal = adcValue0;
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
                //Task_sleep(500*(1000/Clock_tickPeriod));
        }
}

void adcTaskFunc(UArg arg0, UArg arg1)
{


    ADC_Handle   adc;
    ADC_Params   params;
    //int_fast16_t res;

    ADC_Params_init(&params);
    adc = ADC_open(CONFIG_ADC_0, &params);

    if (adc == NULL) {
        //Display_printf(display, 0, 0, "Error initializing CONFIG_ADC_0\n");
        while (1);
    }



    while(1)
    {
        Semaphore_pend(adcSem, BIOS_WAIT_FOREVER);
        /* Blocking mode conversion */
        ADC_convert(adc, &adcValue0);


        //Task_sleep(500*(1000/Clock_tickPeriod));
    }
}

void timerTask(Timer_Handle myHandle, int_fast16_t status)
{
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
            duty = adcValue0;

            timerCount = 0;
        }
}

/*
 *  ======== main ========
 */
int main()
{

    Timer_Handle timer0;
    Timer_Params params;
    /* Call driver init functions */
    Board_init();
    GPIO_init();
    ADC_init();
    UART_init();
    Timer_init();
    PWM_init();

    /*
     * Setting up the timer in continuous callback mode that calls the callback
     * function every 1,000 microseconds, or 1 second.
     */
    Timer_Params_init(&params);
    params.period = 1000;
    params.periodUnits = Timer_PERIOD_US;
    params.timerMode = Timer_CONTINUOUS_CALLBACK;
    params.timerCallback = timerTask;

    timer0 = Timer_open(CONFIG_TIMER_0, &params);

    if (timer0 == NULL) {
        /* Failed to initialized timer */
        while (1) {}
    }

    if (Timer_start(timer0) == Timer_STATUS_ERROR) {
        /* Failed to start timer */
        while (1) {}
    }


    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_LED_ON);

    /* Start kernel. */
    BIOS_start();


    return(0);
}

/*
 * ===== myDelay =====
 * assembly function to delay. decrements the count until it is zero
 * the exact duration depends on the processor speed
 */
__asm("     .sect \".text:myDelay\"\n"
      "     .clink\n"
      "     .thumbfunc myDelay\n"
      "     .thumb\n"
      "     .global myDelay\n"
      "myDelay:\n"
      "     subs r0, #1\n"
      "     bne.n myDelay\n"
      "     bx lr\n");
