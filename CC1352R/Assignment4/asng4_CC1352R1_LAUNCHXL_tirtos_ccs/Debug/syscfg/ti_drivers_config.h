/*
 *  ======== ti_drivers_config.h ========
 *  Configured TI-Drivers module declarations
 *
 *  The macros defines herein are intended for use by applications which
 *  directly include this header. These macros should NOT be hard coded or
 *  copied into library source code.
 *
 *  Symbols declared as const are intended for use with libraries.
 *  Library source code must extern the correct symbol--which is resolved
 *  when the application is linked.
 *
 *  DO NOT EDIT - This file is generated for the CC1352R1_LAUNCHXL
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_config_h
#define ti_drivers_config_h

#define CONFIG_SYSCONFIG_PREVIEW

#define CONFIG_CC1352R1_LAUNCHXL
#ifndef DeviceFamily_CC13X2
#define DeviceFamily_CC13X2
#endif

#include <ti/devices/DeviceFamily.h>

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== CCFG ========
 */


/*
 *  ======== ADC ========
 */

/* DIO23 */
extern const uint_least8_t              CONFIG_ADC_0_CONST;
#define CONFIG_ADC_0                    0
#define CONFIG_TI_DRIVERS_ADC_COUNT     1


/*
 *  ======== GPIO ========
 */

/* DIO6, LaunchPad LED Red */
extern const uint_least8_t              CONFIG_GPIO_LED_0_CONST;
#define CONFIG_GPIO_LED_0               0
/* DIO20, MX25R8035F SPI Flash Slave Select */
extern const uint_least8_t              CONFIG_GPIO_LED_1_CONST;
#define CONFIG_GPIO_LED_1               1
#define CONFIG_TI_DRIVERS_GPIO_COUNT    2

/* LEDs are active high */
#define CONFIG_GPIO_LED_ON  (1)
#define CONFIG_GPIO_LED_OFF (0)

#define CONFIG_LED_ON  (CONFIG_GPIO_LED_ON)
#define CONFIG_LED_OFF (CONFIG_GPIO_LED_OFF)


/*
 *  ======== PIN ========
 */
#include <ti/drivers/PIN.h>

extern const PIN_Config BoardGpioInitTable[];

/* Parent Signal: CONFIG_ADC_0 ADC Pin, (DIO23) */
#define CONFIG_PIN_4                   0x00000017
/* LaunchPad LED Red, Parent Signal: CONFIG_GPIO_LED_0 GPIO Pin, (DIO6) */
#define CONFIG_PIN_0                   0x00000006
/* MX25R8035F SPI Flash Slave Select, Parent Signal: CONFIG_GPIO_LED_1 GPIO Pin, (DIO20) */
#define CONFIG_PIN_1                   0x00000014
/* LaunchPad LED Green, Parent Signal: CONFIG_GPTIMER_1 PWM Pin, (DIO7) */
#define CONFIG_PIN_5                   0x00000007
/* XDS110 UART, Parent Signal: CONFIG_UART_0 TX, (DIO13) */
#define CONFIG_PIN_2                   0x0000000d
/* XDS110 UART, Parent Signal: CONFIG_UART_0 RX, (DIO12) */
#define CONFIG_PIN_3                   0x0000000c
#define CONFIG_TI_DRIVERS_PIN_COUNT    6


/*
 *  ======== PWM ========
 */

/* DIO7, LaunchPad LED Green */
extern const uint_least8_t              CONFIG_PWM_0_CONST;
#define CONFIG_PWM_0                    0
#define CONFIG_TI_DRIVERS_PWM_COUNT     1


/*
 *  ======== Timer ========
 */

extern const uint_least8_t                  CONFIG_TIMER_0_CONST;
#define CONFIG_TIMER_0                      0
#define CONFIG_TI_DRIVERS_TIMER_COUNT       1


/*
 *  ======== UART ========
 */

/*
 *  TX: DIO13
 *  RX: DIO12
 *  XDS110 UART
 */
extern const uint_least8_t              CONFIG_UART_0_CONST;
#define CONFIG_UART_0                   0
#define CONFIG_TI_DRIVERS_UART_COUNT    1


/*
 *  ======== GPTimer ========
 */

extern const uint_least8_t                  CONFIG_GPTIMER_1_CONST;
#define CONFIG_GPTIMER_1                    0
extern const uint_least8_t                  CONFIG_GPTIMER_0_CONST;
#define CONFIG_GPTIMER_0                    1
#define CONFIG_TI_DRIVERS_GPTIMER_COUNT     2


/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
