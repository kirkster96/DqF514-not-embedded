
//*****************************************************************************
//
// Globally defined constants
//
//*****************************************************************************
#define APP_SYSTICKS_PER_SEC            32
#define APP_BUTTON_POLL_DIVIDER          8
#define APP_NUM_MANUAL_COLORS            7
#define APP_PI                           3.1415926535897932384626433832795f
#define APP_AUTO_COLOR_STEP              (APP_PI/ 48.0f)
#define APP_INTENSITY_DEFAULT            0.3f
#define APP_AUTO_MODE_TIMEOUT            (APP_SYSTICKS_PER_SEC * 3)
#define APP_HIB_BUTTON_DEBOUNCE          (APP_SYSTICKS_PER_SEC * 3)
#define APP_HIB_FLASH_DURATION           2

#define APP_MODE_NORMAL                  0
#define APP_MODE_HIB                     1
#define APP_MODE_HIB_FLASH               2
#define APP_MODE_AUTO                    3
#define APP_MODE_REMOTE                  4

#define APP_INPUT_BUF_SIZE               128

//*****************************************************************************
//
// Structure typedef to make storing application state data to and from the 
// hibernate battery backed memory simpler.
//      ui32Colors:       [R, G, B] range is 0 to 0xFFFF per color.
//      ui32Mode:         The current application mode, system state variable.
//      ui32Buttons:      bit map representation of buttons being pressed
//      ui32ManualIndex:  Control variable for manual color increment/decrement
//      fColorWheelPos: Control variable to govern color mixing 
//      fIntensity:     Control variable to govern overall brightness of LED
//
//*****************************************************************************
typedef struct
{
    uint32_t ui32Colors[3];
    uint32_t ui32Mode;
    uint32_t ui32Buttons;
    uint32_t ui32ManualIndex;
    uint32_t ui32ModeTimer;
    float fColorWheelPos;
    float fIntensity;

}tAppState;

//*****************************************************************************
//
// Global variables originally defined in qs-rgb.c that are made available to 
// functions in other files.
//
//*****************************************************************************
extern volatile tAppState g_sAppState;

//*****************************************************************************
// 
// Functions defined in qs-rgb.c that are made available to other files.
//
//*****************************************************************************
//extern void AppButtonHandler(void);
//extern void AppRainbow(uint32_t ui32ForceUpdate);
//extern void AppHibernateEnter(void);
extern int EnableRed(void);
extern int DisableRed(void);
extern int EnablGreen(void);
extern int DisableGreen(void);
extern int EnableBlue(void);
extern int DisableBlue(void);
extern int printCel(void);
extern int PrintStatus(void);



