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

/* DIO23, DRV5055 Analog Output */
extern const uint_least8_t              CONFIG_ADC_0_CONST;
#define CONFIG_ADC_0                    0
#define CONFIG_TI_DRIVERS_ADC_COUNT     1


/*
 *  ======== AESCCM ========
 */

extern const uint_least8_t                  CONFIG_AESCCM_0_CONST;
#define CONFIG_AESCCM_0                     0
#define CONFIG_TI_DRIVERS_AESCCM_COUNT      1


/*
 *  ======== GPIO ========
 */

/* DIO21, Blue LED */
extern const uint_least8_t              CONFIG_GPIO_BLED_CONST;
#define CONFIG_GPIO_BLED                0
/* DIO27, OPT3001 Interrupt */
extern const uint_least8_t              CONFIG_GPIO_OPT_INT_CONST;
#define CONFIG_GPIO_OPT_INT             1
/* DIO25, HDC2080 Interrupt */
extern const uint_least8_t              CONFIG_GPIO_HDC_INT_CONST;
#define CONFIG_GPIO_HDC_INT             2
/* DIO15, LaunchPad Button BTN-1 (Left) */
extern const uint_least8_t              CONFIG_GPIO_BTN1_CONST;
#define CONFIG_GPIO_BTN1                3
/* DIO14, LaunchPad Button BTN-2 (Right) */
extern const uint_least8_t              CONFIG_GPIO_BTN2_CONST;
#define CONFIG_GPIO_BTN2                4
/* DIO6, LaunchPad LED Red */
extern const uint_least8_t              CONFIG_GPIO_RLED_CONST;
#define CONFIG_GPIO_RLED                5
/* DIO7, LaunchPad LED Green */
extern const uint_least8_t              CONFIG_GPIO_GLED_CONST;
#define CONFIG_GPIO_GLED                6
#define CONFIG_TI_DRIVERS_GPIO_COUNT    7

/* LEDs are active high */
#define CONFIG_GPIO_LED_ON  (1)
#define CONFIG_GPIO_LED_OFF (0)

#define CONFIG_LED_ON  (CONFIG_GPIO_LED_ON)
#define CONFIG_LED_OFF (CONFIG_GPIO_LED_OFF)


/*
 *  ======== I2C ========
 */

/*
 *  SCL: DIO4
 *  SDA: DIO5
 *  LaunchPad SensorTag I2C bus
 */
extern const uint_least8_t              CONFIG_I2C_0_CONST;
#define CONFIG_I2C_0                    0
#define CONFIG_TI_DRIVERS_I2C_COUNT     1

/* ======== I2C Addresses and Speeds ======== */
#include <ti/drivers/I2C.h>

/* ---- CONFIG_I2C_0 I2C bus components ---- */

/* LPSTK-CC1352R SENSORS/OPT3001 address and max speed */
#define CONFIG_I2C_0_LPSTK_CC1352R_SENSORS_OPT3001_ADDR     (0x44)
#define CONFIG_I2C_0_LPSTK_CC1352R_SENSORS_OPT3001_MAXSPEED (2600U) /* Kbps */

/* LPSTK-CC1352R SENSORS/HDC2080 address and max speed */
#define CONFIG_I2C_0_LPSTK_CC1352R_SENSORS_HDC2080_ADDR     (0x41)
#define CONFIG_I2C_0_LPSTK_CC1352R_SENSORS_HDC2080_MAXSPEED (400U) /* Kbps */

/* CONFIG_I2C_0 max speed (supported by all components) */
#define CONFIG_I2C_0_MAXSPEED   (400U) /* Kbps */
#define CONFIG_I2C_0_MAXBITRATE ((I2C_BitRate)I2C_400kHz)


/*
 *  ======== NVS ========
 */

extern const uint_least8_t              CONFIG_NVSINTERNAL_CONST;
#define CONFIG_NVSINTERNAL              0
#define CONFIG_TI_DRIVERS_NVS_COUNT     1


/*
 *  ======== PIN ========
 */
#include <ti/drivers/PIN.h>

extern const PIN_Config BoardGpioInitTable[];

/* DRV5055 Analog Output, Parent Signal: CONFIG_ADC_0 ADC Pin, (DIO23) */
#define CONFIG_PIN_5                   0x00000017
/* Blue LED, Parent Signal: CONFIG_GPIO_BLED GPIO Pin, (DIO21) */
#define CONFIG_PIN_0                   0x00000015
/* OPT3001 Interrupt, Parent Signal: CONFIG_GPIO_OPT_INT GPIO Pin, (DIO27) */
#define CONFIG_PIN_1                   0x0000001b
/* HDC2080 Interrupt, Parent Signal: CONFIG_GPIO_HDC_INT GPIO Pin, (DIO25) */
#define CONFIG_PIN_2                   0x00000019
/* LaunchPad SensorTag I2C bus, Parent Signal: CONFIG_I2C_0 SDA, (DIO5) */
#define CONFIG_PIN_3                   0x00000005
/* LaunchPad SensorTag I2C bus, Parent Signal: CONFIG_I2C_0 SCL, (DIO4) */
#define CONFIG_PIN_4                   0x00000004
/* XDS110 UART, Parent Signal: CONFIG_DISPLAY_UART TX, (DIO13) */
#define CONFIG_PIN_UART_TX                   0x0000000d
/* XDS110 UART, Parent Signal: CONFIG_DISPLAY_UART RX, (DIO12) */
#define CONFIG_PIN_UART_RX                   0x0000000c
/* LaunchPad Button BTN-1 (Left), Parent Signal: CONFIG_GPIO_BTN1 GPIO Pin, (DIO15) */
#define CONFIG_PIN_BTN1                   0x0000000f
/* LaunchPad Button BTN-2 (Right), Parent Signal: CONFIG_GPIO_BTN2 GPIO Pin, (DIO14) */
#define CONFIG_PIN_BTN2                   0x0000000e
/* LaunchPad LED Red, Parent Signal: CONFIG_GPIO_RLED GPIO Pin, (DIO6) */
#define CONFIG_PIN_RLED                   0x00000006
/* LaunchPad LED Green, Parent Signal: CONFIG_GPIO_GLED GPIO Pin, (DIO7) */
#define CONFIG_PIN_GLED                   0x00000007
#define CONFIG_TI_DRIVERS_PIN_COUNT    12




/*
 *  ======== UART ========
 */

/*
 *  TX: DIO13
 *  RX: DIO12
 *  XDS110 UART
 */
extern const uint_least8_t              CONFIG_DISPLAY_UART_CONST;
#define CONFIG_DISPLAY_UART             0
#define CONFIG_TI_DRIVERS_UART_COUNT    1


/*
 *  ======== Button ========
 */

/* DIO15, LaunchPad Button BTN-1 (Left) */
extern const uint_least8_t                  CONFIG_BTN_LEFT_CONST;
#define CONFIG_BTN_LEFT                     0
/* DIO14, LaunchPad Button BTN-2 (Right) */
extern const uint_least8_t                  CONFIG_BTN_RIGHT_CONST;
#define CONFIG_BTN_RIGHT                    1
#define CONFIG_TI_DRIVERS_BUTTON_COUNT      2


/*
 *  ======== LED ========
 */

/* DIO6, LaunchPad LED Red */
extern const uint_least8_t              CONFIG_LED_RED_CONST;
#define CONFIG_LED_RED                  0
/* DIO7, LaunchPad LED Green */
extern const uint_least8_t              CONFIG_LED_GREEN_CONST;
#define CONFIG_LED_GREEN                1
#define CONFIG_TI_DRIVERS_LED_COUNT     2


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
