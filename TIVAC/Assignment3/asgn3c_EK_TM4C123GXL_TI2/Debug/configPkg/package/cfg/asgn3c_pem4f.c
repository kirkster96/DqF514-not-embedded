/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIABenchmark.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__ *__fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_runtime_Types_CordAddr __name;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_loggers_LoggerStopMode___VERS
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8031, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8032, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x803a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIABenchmark VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__FXNS__C, ".const:ti_uia_events_UIABenchmark_Module__FXNS__C");
const ti_uia_events_UIABenchmark_Fxns__ ti_uia_events_UIABenchmark_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIABenchmark_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8025, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x803f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* --> timerTask */
extern xdc_Void timerTask(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[3];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> heartBeatFxn */
extern xdc_Void heartBeatFxn(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[2];

/* --> ti_sysbios_knl_Event_post__E */
extern xdc_Void ti_sysbios_knl_Event_post__E(ti_sysbios_knl_Event_Handle,xdc_UInt);

/* --> ti_sysbios_knl_Event_sync__E */
extern xdc_Void ti_sysbios_knl_Event_sync__E(ti_sysbios_knl_Event_Handle,xdc_UInt,xdc_UInt);


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* --> consoleFxn */
extern xdc_Void consoleFxn(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* --> adcTaskFxn */
extern xdc_Void adcTaskFxn(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_2_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_2_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_2_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[3];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[3];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif
/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[128];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8304];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[66];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/kirk/workspace_v10/asgn3c_EK_TM4C123GXL_TI2/Debug/configPkg/package/cfg/asgn3c_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32797, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32801, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
xdc_Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((xdc_ULong)
        (-1056963264));
}


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_utils_Load_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[2],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4898) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4934) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4973) << 16 | 0);

/* E_noaltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)5115) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* supportsAltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x803c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[3] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)timerTask)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x27,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#2 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x1000,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)7522) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)7592) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)3085) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4412) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4460) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4508) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4713) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4741) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4751) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4767) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4797) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4827) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4844) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4865) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4880) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2886) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4333) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3625) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3661) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3706) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5079) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3597) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)0);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)0);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5333) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5355) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5373) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)712) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)793) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5405) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5459) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)863) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)910) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)949) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)992) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1055) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)heartBeatFxn)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [2] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
    (xdc_UInt)0x0,  /* [2] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {3, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {3, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[2] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#1 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5540) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5570) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1203) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1258) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)992) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1323) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1377) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 1;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)((xdc_Fxn)ti_sysbios_knl_Event_post__E));

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)((xdc_Fxn)ti_sysbios_knl_Event_sync__E));


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5613) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5660) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5678) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1471) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1528) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_2_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_2_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[3] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x2,  /* priority */
        (xdc_UInt)0x4,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)consoleFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8204) /* __name */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)adcTaskFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8209) /* __name */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8216) /* __name */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[2],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x3,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))((xdc_Fxn)ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5718) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5786) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5831) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5872) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5904) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5952) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)6008) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)6039) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6122) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6208) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4208) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4251) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4302) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1577) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1646) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1700) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1754) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1817) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1867) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1902) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1935) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)2019) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[3] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [2] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskEnv__A),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x3,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8041;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)7630) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)7647) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)7665) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)7683) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIABenchmark INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsEnabled__C, ".const:ti_uia_events_UIABenchmark_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsEnabled ti_uia_events_UIABenchmark_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsIncluded__C, ".const:ti_uia_events_UIABenchmark_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsIncluded ti_uia_events_UIABenchmark_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsMask__C, ".const:ti_uia_events_UIABenchmark_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsMask ti_uia_events_UIABenchmark_Module__diagsMask__C = ((CT__ti_uia_events_UIABenchmark_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gateObj__C, ".const:ti_uia_events_UIABenchmark_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gateObj ti_uia_events_UIABenchmark_Module__gateObj__C = ((CT__ti_uia_events_UIABenchmark_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gatePrms__C, ".const:ti_uia_events_UIABenchmark_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gatePrms ti_uia_events_UIABenchmark_Module__gatePrms__C = ((CT__ti_uia_events_UIABenchmark_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__id__C, ".const:ti_uia_events_UIABenchmark_Module__id__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__id ti_uia_events_UIABenchmark_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerDefined__C, ".const:ti_uia_events_UIABenchmark_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerDefined ti_uia_events_UIABenchmark_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerObj__C, ".const:ti_uia_events_UIABenchmark_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerObj ti_uia_events_UIABenchmark_Module__loggerObj__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn0__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn0 ti_uia_events_UIABenchmark_Module__loggerFxn0__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn1__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn1 ti_uia_events_UIABenchmark_Module__loggerFxn1__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn2__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn2 ti_uia_events_UIABenchmark_Module__loggerFxn2__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn4__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn4 ti_uia_events_UIABenchmark_Module__loggerFxn4__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn8__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn8 ti_uia_events_UIABenchmark_Module__loggerFxn8__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__startupDoneFxn__C, ".const:ti_uia_events_UIABenchmark_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn ti_uia_events_UIABenchmark_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__count__C, ".const:ti_uia_events_UIABenchmark_Object__count__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__count ti_uia_events_UIABenchmark_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__heap__C, ".const:ti_uia_events_UIABenchmark_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__heap ti_uia_events_UIABenchmark_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__sizeof__C, ".const:ti_uia_events_UIABenchmark_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__sizeof ti_uia_events_UIABenchmark_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__table__C, ".const:ti_uia_events_UIABenchmark_Object__table__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__table ti_uia_events_UIABenchmark_Object__table__C = 0;

/* start__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_start__C, ".const:ti_uia_events_UIABenchmark_start__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_start ti_uia_events_UIABenchmark_start__C = (((xdc_runtime_Log_Event)6278) << 16 | 32768);

/* stop__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stop__C, ".const:ti_uia_events_UIABenchmark_stop__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stop ti_uia_events_UIABenchmark_stop__C = (((xdc_runtime_Log_Event)6290) << 16 | 32768);

/* startInstance__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstance__C, ".const:ti_uia_events_UIABenchmark_startInstance__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstance ti_uia_events_UIABenchmark_startInstance__C = (((xdc_runtime_Log_Event)6301) << 16 | 32768);

/* stopInstance__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstance__C, ".const:ti_uia_events_UIABenchmark_stopInstance__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstance ti_uia_events_UIABenchmark_stopInstance__C = (((xdc_runtime_Log_Event)6321) << 16 | 32768);

/* startInstanceWithAdrs__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithAdrs__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithAdrs ti_uia_events_UIABenchmark_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)6340) << 16 | 32768);

/* stopInstanceWithAdrs__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithAdrs ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)6367) << 16 | 32768);

/* startInstanceWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithStr__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithStr ti_uia_events_UIABenchmark_startInstanceWithStr__C = (((xdc_runtime_Log_Event)6393) << 16 | 32768);

/* stopInstanceWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithStr__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithStr ti_uia_events_UIABenchmark_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)6419) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)6444) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)6466) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)6493) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)6518) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6548) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6576) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6609) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6640) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6676) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6701) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6735) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6773) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6809) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6855) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6889) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6921) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6955) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)7001) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)7066) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)7105) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)7149) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)7186) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)7235) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)7271) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)7334) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)7358) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)7387) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)7409) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)7436) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)7459) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)7488) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x200,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_loggers_LoggerStopMode_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7610) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)4036) << 16 | 0);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_runtime_QueueDescriptor_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3968) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3990) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3994) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4028) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5157) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5181) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5202) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5221) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5238) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5252) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5268) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5275) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5286) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5296) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5315) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    1,  /* [10] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[128];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x80;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8304] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x6e,  /* [561] */
    (xdc_Char)0x75,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x6c,  /* [564] */
    (xdc_Char)0x50,  /* [565] */
    (xdc_Char)0x6f,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x72,  /* [571] */
    (xdc_Char)0x3a,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x50,  /* [574] */
    (xdc_Char)0x6f,  /* [575] */
    (xdc_Char)0x69,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x74,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x72,  /* [580] */
    (xdc_Char)0x20,  /* [581] */
    (xdc_Char)0x69,  /* [582] */
    (xdc_Char)0x73,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x75,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x0,  /* [589] */
    (xdc_Char)0x41,  /* [590] */
    (xdc_Char)0x5f,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x76,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x6c,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x64,  /* [598] */
    (xdc_Char)0x52,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x67,  /* [601] */
    (xdc_Char)0x69,  /* [602] */
    (xdc_Char)0x6f,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x49,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x3a,  /* [607] */
    (xdc_Char)0x20,  /* [608] */
    (xdc_Char)0x4d,  /* [609] */
    (xdc_Char)0x50,  /* [610] */
    (xdc_Char)0x55,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x52,  /* [613] */
    (xdc_Char)0x65,  /* [614] */
    (xdc_Char)0x67,  /* [615] */
    (xdc_Char)0x69,  /* [616] */
    (xdc_Char)0x6f,  /* [617] */
    (xdc_Char)0x6e,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x6e,  /* [620] */
    (xdc_Char)0x75,  /* [621] */
    (xdc_Char)0x6d,  /* [622] */
    (xdc_Char)0x62,  /* [623] */
    (xdc_Char)0x65,  /* [624] */
    (xdc_Char)0x72,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x70,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x64,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x69,  /* [634] */
    (xdc_Char)0x73,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6e,  /* [638] */
    (xdc_Char)0x76,  /* [639] */
    (xdc_Char)0x61,  /* [640] */
    (xdc_Char)0x6c,  /* [641] */
    (xdc_Char)0x69,  /* [642] */
    (xdc_Char)0x64,  /* [643] */
    (xdc_Char)0x2e,  /* [644] */
    (xdc_Char)0x0,  /* [645] */
    (xdc_Char)0x41,  /* [646] */
    (xdc_Char)0x5f,  /* [647] */
    (xdc_Char)0x75,  /* [648] */
    (xdc_Char)0x6e,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x6c,  /* [651] */
    (xdc_Char)0x69,  /* [652] */
    (xdc_Char)0x67,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x65,  /* [655] */
    (xdc_Char)0x64,  /* [656] */
    (xdc_Char)0x42,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x73,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x41,  /* [661] */
    (xdc_Char)0x64,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x72,  /* [664] */
    (xdc_Char)0x3a,  /* [665] */
    (xdc_Char)0x20,  /* [666] */
    (xdc_Char)0x4d,  /* [667] */
    (xdc_Char)0x50,  /* [668] */
    (xdc_Char)0x55,  /* [669] */
    (xdc_Char)0x20,  /* [670] */
    (xdc_Char)0x72,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x67,  /* [673] */
    (xdc_Char)0x69,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x62,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x73,  /* [680] */
    (xdc_Char)0x65,  /* [681] */
    (xdc_Char)0x20,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x64,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x65,  /* [687] */
    (xdc_Char)0x73,  /* [688] */
    (xdc_Char)0x73,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x6e,  /* [691] */
    (xdc_Char)0x6f,  /* [692] */
    (xdc_Char)0x74,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x6c,  /* [696] */
    (xdc_Char)0x69,  /* [697] */
    (xdc_Char)0x67,  /* [698] */
    (xdc_Char)0x6e,  /* [699] */
    (xdc_Char)0x65,  /* [700] */
    (xdc_Char)0x64,  /* [701] */
    (xdc_Char)0x20,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x6f,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x73,  /* [706] */
    (xdc_Char)0x69,  /* [707] */
    (xdc_Char)0x7a,  /* [708] */
    (xdc_Char)0x65,  /* [709] */
    (xdc_Char)0x2e,  /* [710] */
    (xdc_Char)0x0,  /* [711] */
    (xdc_Char)0x41,  /* [712] */
    (xdc_Char)0x5f,  /* [713] */
    (xdc_Char)0x63,  /* [714] */
    (xdc_Char)0x6c,  /* [715] */
    (xdc_Char)0x6f,  /* [716] */
    (xdc_Char)0x63,  /* [717] */
    (xdc_Char)0x6b,  /* [718] */
    (xdc_Char)0x44,  /* [719] */
    (xdc_Char)0x69,  /* [720] */
    (xdc_Char)0x73,  /* [721] */
    (xdc_Char)0x61,  /* [722] */
    (xdc_Char)0x62,  /* [723] */
    (xdc_Char)0x6c,  /* [724] */
    (xdc_Char)0x65,  /* [725] */
    (xdc_Char)0x64,  /* [726] */
    (xdc_Char)0x3a,  /* [727] */
    (xdc_Char)0x20,  /* [728] */
    (xdc_Char)0x43,  /* [729] */
    (xdc_Char)0x61,  /* [730] */
    (xdc_Char)0x6e,  /* [731] */
    (xdc_Char)0x6e,  /* [732] */
    (xdc_Char)0x6f,  /* [733] */
    (xdc_Char)0x74,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x63,  /* [736] */
    (xdc_Char)0x72,  /* [737] */
    (xdc_Char)0x65,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x74,  /* [740] */
    (xdc_Char)0x65,  /* [741] */
    (xdc_Char)0x20,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x20,  /* [744] */
    (xdc_Char)0x63,  /* [745] */
    (xdc_Char)0x6c,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x63,  /* [748] */
    (xdc_Char)0x6b,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x69,  /* [751] */
    (xdc_Char)0x6e,  /* [752] */
    (xdc_Char)0x73,  /* [753] */
    (xdc_Char)0x74,  /* [754] */
    (xdc_Char)0x61,  /* [755] */
    (xdc_Char)0x6e,  /* [756] */
    (xdc_Char)0x63,  /* [757] */
    (xdc_Char)0x65,  /* [758] */
    (xdc_Char)0x20,  /* [759] */
    (xdc_Char)0x77,  /* [760] */
    (xdc_Char)0x68,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x20,  /* [764] */
    (xdc_Char)0x42,  /* [765] */
    (xdc_Char)0x49,  /* [766] */
    (xdc_Char)0x4f,  /* [767] */
    (xdc_Char)0x53,  /* [768] */
    (xdc_Char)0x2e,  /* [769] */
    (xdc_Char)0x63,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x6f,  /* [772] */
    (xdc_Char)0x63,  /* [773] */
    (xdc_Char)0x6b,  /* [774] */
    (xdc_Char)0x45,  /* [775] */
    (xdc_Char)0x6e,  /* [776] */
    (xdc_Char)0x61,  /* [777] */
    (xdc_Char)0x62,  /* [778] */
    (xdc_Char)0x6c,  /* [779] */
    (xdc_Char)0x65,  /* [780] */
    (xdc_Char)0x64,  /* [781] */
    (xdc_Char)0x20,  /* [782] */
    (xdc_Char)0x69,  /* [783] */
    (xdc_Char)0x73,  /* [784] */
    (xdc_Char)0x20,  /* [785] */
    (xdc_Char)0x66,  /* [786] */
    (xdc_Char)0x61,  /* [787] */
    (xdc_Char)0x6c,  /* [788] */
    (xdc_Char)0x73,  /* [789] */
    (xdc_Char)0x65,  /* [790] */
    (xdc_Char)0x2e,  /* [791] */
    (xdc_Char)0x0,  /* [792] */
    (xdc_Char)0x41,  /* [793] */
    (xdc_Char)0x5f,  /* [794] */
    (xdc_Char)0x62,  /* [795] */
    (xdc_Char)0x61,  /* [796] */
    (xdc_Char)0x64,  /* [797] */
    (xdc_Char)0x54,  /* [798] */
    (xdc_Char)0x68,  /* [799] */
    (xdc_Char)0x72,  /* [800] */
    (xdc_Char)0x65,  /* [801] */
    (xdc_Char)0x61,  /* [802] */
    (xdc_Char)0x64,  /* [803] */
    (xdc_Char)0x54,  /* [804] */
    (xdc_Char)0x79,  /* [805] */
    (xdc_Char)0x70,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x3a,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x43,  /* [810] */
    (xdc_Char)0x61,  /* [811] */
    (xdc_Char)0x6e,  /* [812] */
    (xdc_Char)0x6e,  /* [813] */
    (xdc_Char)0x6f,  /* [814] */
    (xdc_Char)0x74,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x63,  /* [817] */
    (xdc_Char)0x72,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x61,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x65,  /* [822] */
    (xdc_Char)0x2f,  /* [823] */
    (xdc_Char)0x64,  /* [824] */
    (xdc_Char)0x65,  /* [825] */
    (xdc_Char)0x6c,  /* [826] */
    (xdc_Char)0x65,  /* [827] */
    (xdc_Char)0x74,  /* [828] */
    (xdc_Char)0x65,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x61,  /* [831] */
    (xdc_Char)0x20,  /* [832] */
    (xdc_Char)0x43,  /* [833] */
    (xdc_Char)0x6c,  /* [834] */
    (xdc_Char)0x6f,  /* [835] */
    (xdc_Char)0x63,  /* [836] */
    (xdc_Char)0x6b,  /* [837] */
    (xdc_Char)0x20,  /* [838] */
    (xdc_Char)0x66,  /* [839] */
    (xdc_Char)0x72,  /* [840] */
    (xdc_Char)0x6f,  /* [841] */
    (xdc_Char)0x6d,  /* [842] */
    (xdc_Char)0x20,  /* [843] */
    (xdc_Char)0x48,  /* [844] */
    (xdc_Char)0x77,  /* [845] */
    (xdc_Char)0x69,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x6f,  /* [848] */
    (xdc_Char)0x72,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x53,  /* [851] */
    (xdc_Char)0x77,  /* [852] */
    (xdc_Char)0x69,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x74,  /* [855] */
    (xdc_Char)0x68,  /* [856] */
    (xdc_Char)0x72,  /* [857] */
    (xdc_Char)0x65,  /* [858] */
    (xdc_Char)0x61,  /* [859] */
    (xdc_Char)0x64,  /* [860] */
    (xdc_Char)0x2e,  /* [861] */
    (xdc_Char)0x0,  /* [862] */
    (xdc_Char)0x41,  /* [863] */
    (xdc_Char)0x5f,  /* [864] */
    (xdc_Char)0x6e,  /* [865] */
    (xdc_Char)0x75,  /* [866] */
    (xdc_Char)0x6c,  /* [867] */
    (xdc_Char)0x6c,  /* [868] */
    (xdc_Char)0x45,  /* [869] */
    (xdc_Char)0x76,  /* [870] */
    (xdc_Char)0x65,  /* [871] */
    (xdc_Char)0x6e,  /* [872] */
    (xdc_Char)0x74,  /* [873] */
    (xdc_Char)0x4d,  /* [874] */
    (xdc_Char)0x61,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x6b,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x3a,  /* [879] */
    (xdc_Char)0x20,  /* [880] */
    (xdc_Char)0x6f,  /* [881] */
    (xdc_Char)0x72,  /* [882] */
    (xdc_Char)0x4d,  /* [883] */
    (xdc_Char)0x61,  /* [884] */
    (xdc_Char)0x73,  /* [885] */
    (xdc_Char)0x6b,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x61,  /* [888] */
    (xdc_Char)0x6e,  /* [889] */
    (xdc_Char)0x64,  /* [890] */
    (xdc_Char)0x20,  /* [891] */
    (xdc_Char)0x61,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x64,  /* [894] */
    (xdc_Char)0x4d,  /* [895] */
    (xdc_Char)0x61,  /* [896] */
    (xdc_Char)0x73,  /* [897] */
    (xdc_Char)0x6b,  /* [898] */
    (xdc_Char)0x20,  /* [899] */
    (xdc_Char)0x61,  /* [900] */
    (xdc_Char)0x72,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x20,  /* [903] */
    (xdc_Char)0x6e,  /* [904] */
    (xdc_Char)0x75,  /* [905] */
    (xdc_Char)0x6c,  /* [906] */
    (xdc_Char)0x6c,  /* [907] */
    (xdc_Char)0x2e,  /* [908] */
    (xdc_Char)0x0,  /* [909] */
    (xdc_Char)0x41,  /* [910] */
    (xdc_Char)0x5f,  /* [911] */
    (xdc_Char)0x6e,  /* [912] */
    (xdc_Char)0x75,  /* [913] */
    (xdc_Char)0x6c,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x45,  /* [916] */
    (xdc_Char)0x76,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x6e,  /* [919] */
    (xdc_Char)0x74,  /* [920] */
    (xdc_Char)0x49,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x3a,  /* [923] */
    (xdc_Char)0x20,  /* [924] */
    (xdc_Char)0x70,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x73,  /* [927] */
    (xdc_Char)0x74,  /* [928] */
    (xdc_Char)0x65,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x20,  /* [931] */
    (xdc_Char)0x65,  /* [932] */
    (xdc_Char)0x76,  /* [933] */
    (xdc_Char)0x65,  /* [934] */
    (xdc_Char)0x6e,  /* [935] */
    (xdc_Char)0x74,  /* [936] */
    (xdc_Char)0x49,  /* [937] */
    (xdc_Char)0x64,  /* [938] */
    (xdc_Char)0x20,  /* [939] */
    (xdc_Char)0x69,  /* [940] */
    (xdc_Char)0x73,  /* [941] */
    (xdc_Char)0x20,  /* [942] */
    (xdc_Char)0x6e,  /* [943] */
    (xdc_Char)0x75,  /* [944] */
    (xdc_Char)0x6c,  /* [945] */
    (xdc_Char)0x6c,  /* [946] */
    (xdc_Char)0x2e,  /* [947] */
    (xdc_Char)0x0,  /* [948] */
    (xdc_Char)0x41,  /* [949] */
    (xdc_Char)0x5f,  /* [950] */
    (xdc_Char)0x65,  /* [951] */
    (xdc_Char)0x76,  /* [952] */
    (xdc_Char)0x65,  /* [953] */
    (xdc_Char)0x6e,  /* [954] */
    (xdc_Char)0x74,  /* [955] */
    (xdc_Char)0x49,  /* [956] */
    (xdc_Char)0x6e,  /* [957] */
    (xdc_Char)0x55,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x65,  /* [960] */
    (xdc_Char)0x3a,  /* [961] */
    (xdc_Char)0x20,  /* [962] */
    (xdc_Char)0x45,  /* [963] */
    (xdc_Char)0x76,  /* [964] */
    (xdc_Char)0x65,  /* [965] */
    (xdc_Char)0x6e,  /* [966] */
    (xdc_Char)0x74,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x6f,  /* [969] */
    (xdc_Char)0x62,  /* [970] */
    (xdc_Char)0x6a,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x63,  /* [973] */
    (xdc_Char)0x74,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x61,  /* [976] */
    (xdc_Char)0x6c,  /* [977] */
    (xdc_Char)0x72,  /* [978] */
    (xdc_Char)0x65,  /* [979] */
    (xdc_Char)0x61,  /* [980] */
    (xdc_Char)0x64,  /* [981] */
    (xdc_Char)0x79,  /* [982] */
    (xdc_Char)0x20,  /* [983] */
    (xdc_Char)0x69,  /* [984] */
    (xdc_Char)0x6e,  /* [985] */
    (xdc_Char)0x20,  /* [986] */
    (xdc_Char)0x75,  /* [987] */
    (xdc_Char)0x73,  /* [988] */
    (xdc_Char)0x65,  /* [989] */
    (xdc_Char)0x2e,  /* [990] */
    (xdc_Char)0x0,  /* [991] */
    (xdc_Char)0x41,  /* [992] */
    (xdc_Char)0x5f,  /* [993] */
    (xdc_Char)0x62,  /* [994] */
    (xdc_Char)0x61,  /* [995] */
    (xdc_Char)0x64,  /* [996] */
    (xdc_Char)0x43,  /* [997] */
    (xdc_Char)0x6f,  /* [998] */
    (xdc_Char)0x6e,  /* [999] */
    (xdc_Char)0x74,  /* [1000] */
    (xdc_Char)0x65,  /* [1001] */
    (xdc_Char)0x78,  /* [1002] */
    (xdc_Char)0x74,  /* [1003] */
    (xdc_Char)0x3a,  /* [1004] */
    (xdc_Char)0x20,  /* [1005] */
    (xdc_Char)0x62,  /* [1006] */
    (xdc_Char)0x61,  /* [1007] */
    (xdc_Char)0x64,  /* [1008] */
    (xdc_Char)0x20,  /* [1009] */
    (xdc_Char)0x63,  /* [1010] */
    (xdc_Char)0x61,  /* [1011] */
    (xdc_Char)0x6c,  /* [1012] */
    (xdc_Char)0x6c,  /* [1013] */
    (xdc_Char)0x69,  /* [1014] */
    (xdc_Char)0x6e,  /* [1015] */
    (xdc_Char)0x67,  /* [1016] */
    (xdc_Char)0x20,  /* [1017] */
    (xdc_Char)0x63,  /* [1018] */
    (xdc_Char)0x6f,  /* [1019] */
    (xdc_Char)0x6e,  /* [1020] */
    (xdc_Char)0x74,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x78,  /* [1023] */
    (xdc_Char)0x74,  /* [1024] */
    (xdc_Char)0x2e,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x4d,  /* [1027] */
    (xdc_Char)0x75,  /* [1028] */
    (xdc_Char)0x73,  /* [1029] */
    (xdc_Char)0x74,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x62,  /* [1032] */
    (xdc_Char)0x65,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x61,  /* [1036] */
    (xdc_Char)0x6c,  /* [1037] */
    (xdc_Char)0x6c,  /* [1038] */
    (xdc_Char)0x65,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x20,  /* [1041] */
    (xdc_Char)0x66,  /* [1042] */
    (xdc_Char)0x72,  /* [1043] */
    (xdc_Char)0x6f,  /* [1044] */
    (xdc_Char)0x6d,  /* [1045] */
    (xdc_Char)0x20,  /* [1046] */
    (xdc_Char)0x61,  /* [1047] */
    (xdc_Char)0x20,  /* [1048] */
    (xdc_Char)0x54,  /* [1049] */
    (xdc_Char)0x61,  /* [1050] */
    (xdc_Char)0x73,  /* [1051] */
    (xdc_Char)0x6b,  /* [1052] */
    (xdc_Char)0x2e,  /* [1053] */
    (xdc_Char)0x0,  /* [1054] */
    (xdc_Char)0x41,  /* [1055] */
    (xdc_Char)0x5f,  /* [1056] */
    (xdc_Char)0x70,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x6e,  /* [1059] */
    (xdc_Char)0x64,  /* [1060] */
    (xdc_Char)0x54,  /* [1061] */
    (xdc_Char)0x61,  /* [1062] */
    (xdc_Char)0x73,  /* [1063] */
    (xdc_Char)0x6b,  /* [1064] */
    (xdc_Char)0x44,  /* [1065] */
    (xdc_Char)0x69,  /* [1066] */
    (xdc_Char)0x73,  /* [1067] */
    (xdc_Char)0x61,  /* [1068] */
    (xdc_Char)0x62,  /* [1069] */
    (xdc_Char)0x6c,  /* [1070] */
    (xdc_Char)0x65,  /* [1071] */
    (xdc_Char)0x64,  /* [1072] */
    (xdc_Char)0x3a,  /* [1073] */
    (xdc_Char)0x20,  /* [1074] */
    (xdc_Char)0x43,  /* [1075] */
    (xdc_Char)0x61,  /* [1076] */
    (xdc_Char)0x6e,  /* [1077] */
    (xdc_Char)0x6e,  /* [1078] */
    (xdc_Char)0x6f,  /* [1079] */
    (xdc_Char)0x74,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x63,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x6c,  /* [1084] */
    (xdc_Char)0x6c,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x45,  /* [1087] */
    (xdc_Char)0x76,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x6e,  /* [1090] */
    (xdc_Char)0x74,  /* [1091] */
    (xdc_Char)0x5f,  /* [1092] */
    (xdc_Char)0x70,  /* [1093] */
    (xdc_Char)0x65,  /* [1094] */
    (xdc_Char)0x6e,  /* [1095] */
    (xdc_Char)0x64,  /* [1096] */
    (xdc_Char)0x28,  /* [1097] */
    (xdc_Char)0x29,  /* [1098] */
    (xdc_Char)0x20,  /* [1099] */
    (xdc_Char)0x77,  /* [1100] */
    (xdc_Char)0x68,  /* [1101] */
    (xdc_Char)0x69,  /* [1102] */
    (xdc_Char)0x6c,  /* [1103] */
    (xdc_Char)0x65,  /* [1104] */
    (xdc_Char)0x20,  /* [1105] */
    (xdc_Char)0x74,  /* [1106] */
    (xdc_Char)0x68,  /* [1107] */
    (xdc_Char)0x65,  /* [1108] */
    (xdc_Char)0x20,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x61,  /* [1111] */
    (xdc_Char)0x73,  /* [1112] */
    (xdc_Char)0x6b,  /* [1113] */
    (xdc_Char)0x20,  /* [1114] */
    (xdc_Char)0x6f,  /* [1115] */
    (xdc_Char)0x72,  /* [1116] */
    (xdc_Char)0x20,  /* [1117] */
    (xdc_Char)0x53,  /* [1118] */
    (xdc_Char)0x77,  /* [1119] */
    (xdc_Char)0x69,  /* [1120] */
    (xdc_Char)0x20,  /* [1121] */
    (xdc_Char)0x73,  /* [1122] */
    (xdc_Char)0x63,  /* [1123] */
    (xdc_Char)0x68,  /* [1124] */
    (xdc_Char)0x65,  /* [1125] */
    (xdc_Char)0x64,  /* [1126] */
    (xdc_Char)0x75,  /* [1127] */
    (xdc_Char)0x6c,  /* [1128] */
    (xdc_Char)0x65,  /* [1129] */
    (xdc_Char)0x72,  /* [1130] */
    (xdc_Char)0x20,  /* [1131] */
    (xdc_Char)0x69,  /* [1132] */
    (xdc_Char)0x73,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x64,  /* [1135] */
    (xdc_Char)0x69,  /* [1136] */
    (xdc_Char)0x73,  /* [1137] */
    (xdc_Char)0x61,  /* [1138] */
    (xdc_Char)0x62,  /* [1139] */
    (xdc_Char)0x6c,  /* [1140] */
    (xdc_Char)0x65,  /* [1141] */
    (xdc_Char)0x64,  /* [1142] */
    (xdc_Char)0x2e,  /* [1143] */
    (xdc_Char)0x0,  /* [1144] */
    (xdc_Char)0x4d,  /* [1145] */
    (xdc_Char)0x61,  /* [1146] */
    (xdc_Char)0x69,  /* [1147] */
    (xdc_Char)0x6c,  /* [1148] */
    (xdc_Char)0x62,  /* [1149] */
    (xdc_Char)0x6f,  /* [1150] */
    (xdc_Char)0x78,  /* [1151] */
    (xdc_Char)0x5f,  /* [1152] */
    (xdc_Char)0x63,  /* [1153] */
    (xdc_Char)0x72,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x61,  /* [1156] */
    (xdc_Char)0x74,  /* [1157] */
    (xdc_Char)0x65,  /* [1158] */
    (xdc_Char)0x27,  /* [1159] */
    (xdc_Char)0x73,  /* [1160] */
    (xdc_Char)0x20,  /* [1161] */
    (xdc_Char)0x62,  /* [1162] */
    (xdc_Char)0x75,  /* [1163] */
    (xdc_Char)0x66,  /* [1164] */
    (xdc_Char)0x53,  /* [1165] */
    (xdc_Char)0x69,  /* [1166] */
    (xdc_Char)0x7a,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x20,  /* [1169] */
    (xdc_Char)0x70,  /* [1170] */
    (xdc_Char)0x61,  /* [1171] */
    (xdc_Char)0x72,  /* [1172] */
    (xdc_Char)0x61,  /* [1173] */
    (xdc_Char)0x6d,  /* [1174] */
    (xdc_Char)0x65,  /* [1175] */
    (xdc_Char)0x74,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x72,  /* [1178] */
    (xdc_Char)0x20,  /* [1179] */
    (xdc_Char)0x69,  /* [1180] */
    (xdc_Char)0x73,  /* [1181] */
    (xdc_Char)0x20,  /* [1182] */
    (xdc_Char)0x69,  /* [1183] */
    (xdc_Char)0x6e,  /* [1184] */
    (xdc_Char)0x76,  /* [1185] */
    (xdc_Char)0x61,  /* [1186] */
    (xdc_Char)0x6c,  /* [1187] */
    (xdc_Char)0x69,  /* [1188] */
    (xdc_Char)0x64,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x28,  /* [1191] */
    (xdc_Char)0x74,  /* [1192] */
    (xdc_Char)0x6f,  /* [1193] */
    (xdc_Char)0x6f,  /* [1194] */
    (xdc_Char)0x20,  /* [1195] */
    (xdc_Char)0x73,  /* [1196] */
    (xdc_Char)0x6d,  /* [1197] */
    (xdc_Char)0x61,  /* [1198] */
    (xdc_Char)0x6c,  /* [1199] */
    (xdc_Char)0x6c,  /* [1200] */
    (xdc_Char)0x29,  /* [1201] */
    (xdc_Char)0x0,  /* [1202] */
    (xdc_Char)0x41,  /* [1203] */
    (xdc_Char)0x5f,  /* [1204] */
    (xdc_Char)0x6e,  /* [1205] */
    (xdc_Char)0x6f,  /* [1206] */
    (xdc_Char)0x45,  /* [1207] */
    (xdc_Char)0x76,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x6e,  /* [1210] */
    (xdc_Char)0x74,  /* [1211] */
    (xdc_Char)0x73,  /* [1212] */
    (xdc_Char)0x3a,  /* [1213] */
    (xdc_Char)0x20,  /* [1214] */
    (xdc_Char)0x54,  /* [1215] */
    (xdc_Char)0x68,  /* [1216] */
    (xdc_Char)0x65,  /* [1217] */
    (xdc_Char)0x20,  /* [1218] */
    (xdc_Char)0x45,  /* [1219] */
    (xdc_Char)0x76,  /* [1220] */
    (xdc_Char)0x65,  /* [1221] */
    (xdc_Char)0x6e,  /* [1222] */
    (xdc_Char)0x74,  /* [1223] */
    (xdc_Char)0x2e,  /* [1224] */
    (xdc_Char)0x73,  /* [1225] */
    (xdc_Char)0x75,  /* [1226] */
    (xdc_Char)0x70,  /* [1227] */
    (xdc_Char)0x70,  /* [1228] */
    (xdc_Char)0x6f,  /* [1229] */
    (xdc_Char)0x72,  /* [1230] */
    (xdc_Char)0x74,  /* [1231] */
    (xdc_Char)0x73,  /* [1232] */
    (xdc_Char)0x45,  /* [1233] */
    (xdc_Char)0x76,  /* [1234] */
    (xdc_Char)0x65,  /* [1235] */
    (xdc_Char)0x6e,  /* [1236] */
    (xdc_Char)0x74,  /* [1237] */
    (xdc_Char)0x73,  /* [1238] */
    (xdc_Char)0x20,  /* [1239] */
    (xdc_Char)0x66,  /* [1240] */
    (xdc_Char)0x6c,  /* [1241] */
    (xdc_Char)0x61,  /* [1242] */
    (xdc_Char)0x67,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x64,  /* [1248] */
    (xdc_Char)0x69,  /* [1249] */
    (xdc_Char)0x73,  /* [1250] */
    (xdc_Char)0x61,  /* [1251] */
    (xdc_Char)0x62,  /* [1252] */
    (xdc_Char)0x6c,  /* [1253] */
    (xdc_Char)0x65,  /* [1254] */
    (xdc_Char)0x64,  /* [1255] */
    (xdc_Char)0x2e,  /* [1256] */
    (xdc_Char)0x0,  /* [1257] */
    (xdc_Char)0x41,  /* [1258] */
    (xdc_Char)0x5f,  /* [1259] */
    (xdc_Char)0x69,  /* [1260] */
    (xdc_Char)0x6e,  /* [1261] */
    (xdc_Char)0x76,  /* [1262] */
    (xdc_Char)0x54,  /* [1263] */
    (xdc_Char)0x69,  /* [1264] */
    (xdc_Char)0x6d,  /* [1265] */
    (xdc_Char)0x65,  /* [1266] */
    (xdc_Char)0x6f,  /* [1267] */
    (xdc_Char)0x75,  /* [1268] */
    (xdc_Char)0x74,  /* [1269] */
    (xdc_Char)0x3a,  /* [1270] */
    (xdc_Char)0x20,  /* [1271] */
    (xdc_Char)0x43,  /* [1272] */
    (xdc_Char)0x61,  /* [1273] */
    (xdc_Char)0x6e,  /* [1274] */
    (xdc_Char)0x27,  /* [1275] */
    (xdc_Char)0x74,  /* [1276] */
    (xdc_Char)0x20,  /* [1277] */
    (xdc_Char)0x75,  /* [1278] */
    (xdc_Char)0x73,  /* [1279] */
    (xdc_Char)0x65,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x42,  /* [1282] */
    (xdc_Char)0x49,  /* [1283] */
    (xdc_Char)0x4f,  /* [1284] */
    (xdc_Char)0x53,  /* [1285] */
    (xdc_Char)0x5f,  /* [1286] */
    (xdc_Char)0x45,  /* [1287] */
    (xdc_Char)0x56,  /* [1288] */
    (xdc_Char)0x45,  /* [1289] */
    (xdc_Char)0x4e,  /* [1290] */
    (xdc_Char)0x54,  /* [1291] */
    (xdc_Char)0x5f,  /* [1292] */
    (xdc_Char)0x41,  /* [1293] */
    (xdc_Char)0x43,  /* [1294] */
    (xdc_Char)0x51,  /* [1295] */
    (xdc_Char)0x55,  /* [1296] */
    (xdc_Char)0x49,  /* [1297] */
    (xdc_Char)0x52,  /* [1298] */
    (xdc_Char)0x45,  /* [1299] */
    (xdc_Char)0x44,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x77,  /* [1302] */
    (xdc_Char)0x69,  /* [1303] */
    (xdc_Char)0x74,  /* [1304] */
    (xdc_Char)0x68,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x74,  /* [1307] */
    (xdc_Char)0x68,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x53,  /* [1312] */
    (xdc_Char)0x65,  /* [1313] */
    (xdc_Char)0x6d,  /* [1314] */
    (xdc_Char)0x61,  /* [1315] */
    (xdc_Char)0x70,  /* [1316] */
    (xdc_Char)0x68,  /* [1317] */
    (xdc_Char)0x6f,  /* [1318] */
    (xdc_Char)0x72,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x2e,  /* [1321] */
    (xdc_Char)0x0,  /* [1322] */
    (xdc_Char)0x41,  /* [1323] */
    (xdc_Char)0x5f,  /* [1324] */
    (xdc_Char)0x6f,  /* [1325] */
    (xdc_Char)0x76,  /* [1326] */
    (xdc_Char)0x65,  /* [1327] */
    (xdc_Char)0x72,  /* [1328] */
    (xdc_Char)0x66,  /* [1329] */
    (xdc_Char)0x6c,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x77,  /* [1332] */
    (xdc_Char)0x3a,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x43,  /* [1335] */
    (xdc_Char)0x6f,  /* [1336] */
    (xdc_Char)0x75,  /* [1337] */
    (xdc_Char)0x6e,  /* [1338] */
    (xdc_Char)0x74,  /* [1339] */
    (xdc_Char)0x20,  /* [1340] */
    (xdc_Char)0x68,  /* [1341] */
    (xdc_Char)0x61,  /* [1342] */
    (xdc_Char)0x73,  /* [1343] */
    (xdc_Char)0x20,  /* [1344] */
    (xdc_Char)0x65,  /* [1345] */
    (xdc_Char)0x78,  /* [1346] */
    (xdc_Char)0x63,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x64,  /* [1350] */
    (xdc_Char)0x65,  /* [1351] */
    (xdc_Char)0x64,  /* [1352] */
    (xdc_Char)0x20,  /* [1353] */
    (xdc_Char)0x36,  /* [1354] */
    (xdc_Char)0x35,  /* [1355] */
    (xdc_Char)0x35,  /* [1356] */
    (xdc_Char)0x33,  /* [1357] */
    (xdc_Char)0x35,  /* [1358] */
    (xdc_Char)0x20,  /* [1359] */
    (xdc_Char)0x61,  /* [1360] */
    (xdc_Char)0x6e,  /* [1361] */
    (xdc_Char)0x64,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x6f,  /* [1365] */
    (xdc_Char)0x6c,  /* [1366] */
    (xdc_Char)0x6c,  /* [1367] */
    (xdc_Char)0x65,  /* [1368] */
    (xdc_Char)0x64,  /* [1369] */
    (xdc_Char)0x20,  /* [1370] */
    (xdc_Char)0x6f,  /* [1371] */
    (xdc_Char)0x76,  /* [1372] */
    (xdc_Char)0x65,  /* [1373] */
    (xdc_Char)0x72,  /* [1374] */
    (xdc_Char)0x2e,  /* [1375] */
    (xdc_Char)0x0,  /* [1376] */
    (xdc_Char)0x41,  /* [1377] */
    (xdc_Char)0x5f,  /* [1378] */
    (xdc_Char)0x70,  /* [1379] */
    (xdc_Char)0x65,  /* [1380] */
    (xdc_Char)0x6e,  /* [1381] */
    (xdc_Char)0x64,  /* [1382] */
    (xdc_Char)0x54,  /* [1383] */
    (xdc_Char)0x61,  /* [1384] */
    (xdc_Char)0x73,  /* [1385] */
    (xdc_Char)0x6b,  /* [1386] */
    (xdc_Char)0x44,  /* [1387] */
    (xdc_Char)0x69,  /* [1388] */
    (xdc_Char)0x73,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x62,  /* [1391] */
    (xdc_Char)0x6c,  /* [1392] */
    (xdc_Char)0x65,  /* [1393] */
    (xdc_Char)0x64,  /* [1394] */
    (xdc_Char)0x3a,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x43,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x6e,  /* [1399] */
    (xdc_Char)0x6e,  /* [1400] */
    (xdc_Char)0x6f,  /* [1401] */
    (xdc_Char)0x74,  /* [1402] */
    (xdc_Char)0x20,  /* [1403] */
    (xdc_Char)0x63,  /* [1404] */
    (xdc_Char)0x61,  /* [1405] */
    (xdc_Char)0x6c,  /* [1406] */
    (xdc_Char)0x6c,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x53,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x6d,  /* [1411] */
    (xdc_Char)0x61,  /* [1412] */
    (xdc_Char)0x70,  /* [1413] */
    (xdc_Char)0x68,  /* [1414] */
    (xdc_Char)0x6f,  /* [1415] */
    (xdc_Char)0x72,  /* [1416] */
    (xdc_Char)0x65,  /* [1417] */
    (xdc_Char)0x5f,  /* [1418] */
    (xdc_Char)0x70,  /* [1419] */
    (xdc_Char)0x65,  /* [1420] */
    (xdc_Char)0x6e,  /* [1421] */
    (xdc_Char)0x64,  /* [1422] */
    (xdc_Char)0x28,  /* [1423] */
    (xdc_Char)0x29,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x77,  /* [1426] */
    (xdc_Char)0x68,  /* [1427] */
    (xdc_Char)0x69,  /* [1428] */
    (xdc_Char)0x6c,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x20,  /* [1431] */
    (xdc_Char)0x74,  /* [1432] */
    (xdc_Char)0x68,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x54,  /* [1436] */
    (xdc_Char)0x61,  /* [1437] */
    (xdc_Char)0x73,  /* [1438] */
    (xdc_Char)0x6b,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x6f,  /* [1441] */
    (xdc_Char)0x72,  /* [1442] */
    (xdc_Char)0x20,  /* [1443] */
    (xdc_Char)0x53,  /* [1444] */
    (xdc_Char)0x77,  /* [1445] */
    (xdc_Char)0x69,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x73,  /* [1448] */
    (xdc_Char)0x63,  /* [1449] */
    (xdc_Char)0x68,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x64,  /* [1452] */
    (xdc_Char)0x75,  /* [1453] */
    (xdc_Char)0x6c,  /* [1454] */
    (xdc_Char)0x65,  /* [1455] */
    (xdc_Char)0x72,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x69,  /* [1458] */
    (xdc_Char)0x73,  /* [1459] */
    (xdc_Char)0x20,  /* [1460] */
    (xdc_Char)0x64,  /* [1461] */
    (xdc_Char)0x69,  /* [1462] */
    (xdc_Char)0x73,  /* [1463] */
    (xdc_Char)0x61,  /* [1464] */
    (xdc_Char)0x62,  /* [1465] */
    (xdc_Char)0x6c,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x64,  /* [1468] */
    (xdc_Char)0x2e,  /* [1469] */
    (xdc_Char)0x0,  /* [1470] */
    (xdc_Char)0x41,  /* [1471] */
    (xdc_Char)0x5f,  /* [1472] */
    (xdc_Char)0x73,  /* [1473] */
    (xdc_Char)0x77,  /* [1474] */
    (xdc_Char)0x69,  /* [1475] */
    (xdc_Char)0x44,  /* [1476] */
    (xdc_Char)0x69,  /* [1477] */
    (xdc_Char)0x73,  /* [1478] */
    (xdc_Char)0x61,  /* [1479] */
    (xdc_Char)0x62,  /* [1480] */
    (xdc_Char)0x6c,  /* [1481] */
    (xdc_Char)0x65,  /* [1482] */
    (xdc_Char)0x64,  /* [1483] */
    (xdc_Char)0x3a,  /* [1484] */
    (xdc_Char)0x20,  /* [1485] */
    (xdc_Char)0x43,  /* [1486] */
    (xdc_Char)0x61,  /* [1487] */
    (xdc_Char)0x6e,  /* [1488] */
    (xdc_Char)0x6e,  /* [1489] */
    (xdc_Char)0x6f,  /* [1490] */
    (xdc_Char)0x74,  /* [1491] */
    (xdc_Char)0x20,  /* [1492] */
    (xdc_Char)0x63,  /* [1493] */
    (xdc_Char)0x72,  /* [1494] */
    (xdc_Char)0x65,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x65,  /* [1498] */
    (xdc_Char)0x20,  /* [1499] */
    (xdc_Char)0x61,  /* [1500] */
    (xdc_Char)0x20,  /* [1501] */
    (xdc_Char)0x53,  /* [1502] */
    (xdc_Char)0x77,  /* [1503] */
    (xdc_Char)0x69,  /* [1504] */
    (xdc_Char)0x20,  /* [1505] */
    (xdc_Char)0x77,  /* [1506] */
    (xdc_Char)0x68,  /* [1507] */
    (xdc_Char)0x65,  /* [1508] */
    (xdc_Char)0x6e,  /* [1509] */
    (xdc_Char)0x20,  /* [1510] */
    (xdc_Char)0x53,  /* [1511] */
    (xdc_Char)0x77,  /* [1512] */
    (xdc_Char)0x69,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x69,  /* [1515] */
    (xdc_Char)0x73,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x64,  /* [1518] */
    (xdc_Char)0x69,  /* [1519] */
    (xdc_Char)0x73,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x62,  /* [1522] */
    (xdc_Char)0x6c,  /* [1523] */
    (xdc_Char)0x65,  /* [1524] */
    (xdc_Char)0x64,  /* [1525] */
    (xdc_Char)0x2e,  /* [1526] */
    (xdc_Char)0x0,  /* [1527] */
    (xdc_Char)0x41,  /* [1528] */
    (xdc_Char)0x5f,  /* [1529] */
    (xdc_Char)0x62,  /* [1530] */
    (xdc_Char)0x61,  /* [1531] */
    (xdc_Char)0x64,  /* [1532] */
    (xdc_Char)0x50,  /* [1533] */
    (xdc_Char)0x72,  /* [1534] */
    (xdc_Char)0x69,  /* [1535] */
    (xdc_Char)0x6f,  /* [1536] */
    (xdc_Char)0x72,  /* [1537] */
    (xdc_Char)0x69,  /* [1538] */
    (xdc_Char)0x74,  /* [1539] */
    (xdc_Char)0x79,  /* [1540] */
    (xdc_Char)0x3a,  /* [1541] */
    (xdc_Char)0x20,  /* [1542] */
    (xdc_Char)0x41,  /* [1543] */
    (xdc_Char)0x6e,  /* [1544] */
    (xdc_Char)0x20,  /* [1545] */
    (xdc_Char)0x69,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x76,  /* [1548] */
    (xdc_Char)0x61,  /* [1549] */
    (xdc_Char)0x6c,  /* [1550] */
    (xdc_Char)0x69,  /* [1551] */
    (xdc_Char)0x64,  /* [1552] */
    (xdc_Char)0x20,  /* [1553] */
    (xdc_Char)0x53,  /* [1554] */
    (xdc_Char)0x77,  /* [1555] */
    (xdc_Char)0x69,  /* [1556] */
    (xdc_Char)0x20,  /* [1557] */
    (xdc_Char)0x70,  /* [1558] */
    (xdc_Char)0x72,  /* [1559] */
    (xdc_Char)0x69,  /* [1560] */
    (xdc_Char)0x6f,  /* [1561] */
    (xdc_Char)0x72,  /* [1562] */
    (xdc_Char)0x69,  /* [1563] */
    (xdc_Char)0x74,  /* [1564] */
    (xdc_Char)0x79,  /* [1565] */
    (xdc_Char)0x20,  /* [1566] */
    (xdc_Char)0x77,  /* [1567] */
    (xdc_Char)0x61,  /* [1568] */
    (xdc_Char)0x73,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x75,  /* [1571] */
    (xdc_Char)0x73,  /* [1572] */
    (xdc_Char)0x65,  /* [1573] */
    (xdc_Char)0x64,  /* [1574] */
    (xdc_Char)0x2e,  /* [1575] */
    (xdc_Char)0x0,  /* [1576] */
    (xdc_Char)0x41,  /* [1577] */
    (xdc_Char)0x5f,  /* [1578] */
    (xdc_Char)0x62,  /* [1579] */
    (xdc_Char)0x61,  /* [1580] */
    (xdc_Char)0x64,  /* [1581] */
    (xdc_Char)0x54,  /* [1582] */
    (xdc_Char)0x68,  /* [1583] */
    (xdc_Char)0x72,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x61,  /* [1586] */
    (xdc_Char)0x64,  /* [1587] */
    (xdc_Char)0x54,  /* [1588] */
    (xdc_Char)0x79,  /* [1589] */
    (xdc_Char)0x70,  /* [1590] */
    (xdc_Char)0x65,  /* [1591] */
    (xdc_Char)0x3a,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x43,  /* [1594] */
    (xdc_Char)0x61,  /* [1595] */
    (xdc_Char)0x6e,  /* [1596] */
    (xdc_Char)0x6e,  /* [1597] */
    (xdc_Char)0x6f,  /* [1598] */
    (xdc_Char)0x74,  /* [1599] */
    (xdc_Char)0x20,  /* [1600] */
    (xdc_Char)0x63,  /* [1601] */
    (xdc_Char)0x72,  /* [1602] */
    (xdc_Char)0x65,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x74,  /* [1605] */
    (xdc_Char)0x65,  /* [1606] */
    (xdc_Char)0x2f,  /* [1607] */
    (xdc_Char)0x64,  /* [1608] */
    (xdc_Char)0x65,  /* [1609] */
    (xdc_Char)0x6c,  /* [1610] */
    (xdc_Char)0x65,  /* [1611] */
    (xdc_Char)0x74,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x20,  /* [1614] */
    (xdc_Char)0x61,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x74,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x73,  /* [1619] */
    (xdc_Char)0x6b,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x66,  /* [1622] */
    (xdc_Char)0x72,  /* [1623] */
    (xdc_Char)0x6f,  /* [1624] */
    (xdc_Char)0x6d,  /* [1625] */
    (xdc_Char)0x20,  /* [1626] */
    (xdc_Char)0x48,  /* [1627] */
    (xdc_Char)0x77,  /* [1628] */
    (xdc_Char)0x69,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x6f,  /* [1631] */
    (xdc_Char)0x72,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x53,  /* [1634] */
    (xdc_Char)0x77,  /* [1635] */
    (xdc_Char)0x69,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x74,  /* [1638] */
    (xdc_Char)0x68,  /* [1639] */
    (xdc_Char)0x72,  /* [1640] */
    (xdc_Char)0x65,  /* [1641] */
    (xdc_Char)0x61,  /* [1642] */
    (xdc_Char)0x64,  /* [1643] */
    (xdc_Char)0x2e,  /* [1644] */
    (xdc_Char)0x0,  /* [1645] */
    (xdc_Char)0x41,  /* [1646] */
    (xdc_Char)0x5f,  /* [1647] */
    (xdc_Char)0x62,  /* [1648] */
    (xdc_Char)0x61,  /* [1649] */
    (xdc_Char)0x64,  /* [1650] */
    (xdc_Char)0x54,  /* [1651] */
    (xdc_Char)0x61,  /* [1652] */
    (xdc_Char)0x73,  /* [1653] */
    (xdc_Char)0x6b,  /* [1654] */
    (xdc_Char)0x53,  /* [1655] */
    (xdc_Char)0x74,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x74,  /* [1658] */
    (xdc_Char)0x65,  /* [1659] */
    (xdc_Char)0x3a,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x43,  /* [1662] */
    (xdc_Char)0x61,  /* [1663] */
    (xdc_Char)0x6e,  /* [1664] */
    (xdc_Char)0x27,  /* [1665] */
    (xdc_Char)0x74,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x64,  /* [1668] */
    (xdc_Char)0x65,  /* [1669] */
    (xdc_Char)0x6c,  /* [1670] */
    (xdc_Char)0x65,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x20,  /* [1674] */
    (xdc_Char)0x61,  /* [1675] */
    (xdc_Char)0x20,  /* [1676] */
    (xdc_Char)0x74,  /* [1677] */
    (xdc_Char)0x61,  /* [1678] */
    (xdc_Char)0x73,  /* [1679] */
    (xdc_Char)0x6b,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x69,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x20,  /* [1684] */
    (xdc_Char)0x52,  /* [1685] */
    (xdc_Char)0x55,  /* [1686] */
    (xdc_Char)0x4e,  /* [1687] */
    (xdc_Char)0x4e,  /* [1688] */
    (xdc_Char)0x49,  /* [1689] */
    (xdc_Char)0x4e,  /* [1690] */
    (xdc_Char)0x47,  /* [1691] */
    (xdc_Char)0x20,  /* [1692] */
    (xdc_Char)0x73,  /* [1693] */
    (xdc_Char)0x74,  /* [1694] */
    (xdc_Char)0x61,  /* [1695] */
    (xdc_Char)0x74,  /* [1696] */
    (xdc_Char)0x65,  /* [1697] */
    (xdc_Char)0x2e,  /* [1698] */
    (xdc_Char)0x0,  /* [1699] */
    (xdc_Char)0x41,  /* [1700] */
    (xdc_Char)0x5f,  /* [1701] */
    (xdc_Char)0x6e,  /* [1702] */
    (xdc_Char)0x6f,  /* [1703] */
    (xdc_Char)0x50,  /* [1704] */
    (xdc_Char)0x65,  /* [1705] */
    (xdc_Char)0x6e,  /* [1706] */
    (xdc_Char)0x64,  /* [1707] */
    (xdc_Char)0x45,  /* [1708] */
    (xdc_Char)0x6c,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x6d,  /* [1711] */
    (xdc_Char)0x3a,  /* [1712] */
    (xdc_Char)0x20,  /* [1713] */
    (xdc_Char)0x4e,  /* [1714] */
    (xdc_Char)0x6f,  /* [1715] */
    (xdc_Char)0x74,  /* [1716] */
    (xdc_Char)0x20,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x6e,  /* [1719] */
    (xdc_Char)0x6f,  /* [1720] */
    (xdc_Char)0x75,  /* [1721] */
    (xdc_Char)0x67,  /* [1722] */
    (xdc_Char)0x68,  /* [1723] */
    (xdc_Char)0x20,  /* [1724] */
    (xdc_Char)0x69,  /* [1725] */
    (xdc_Char)0x6e,  /* [1726] */
    (xdc_Char)0x66,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x20,  /* [1729] */
    (xdc_Char)0x74,  /* [1730] */
    (xdc_Char)0x6f,  /* [1731] */
    (xdc_Char)0x20,  /* [1732] */
    (xdc_Char)0x64,  /* [1733] */
    (xdc_Char)0x65,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x74,  /* [1737] */
    (xdc_Char)0x65,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x42,  /* [1740] */
    (xdc_Char)0x4c,  /* [1741] */
    (xdc_Char)0x4f,  /* [1742] */
    (xdc_Char)0x43,  /* [1743] */
    (xdc_Char)0x4b,  /* [1744] */
    (xdc_Char)0x45,  /* [1745] */
    (xdc_Char)0x44,  /* [1746] */
    (xdc_Char)0x20,  /* [1747] */
    (xdc_Char)0x74,  /* [1748] */
    (xdc_Char)0x61,  /* [1749] */
    (xdc_Char)0x73,  /* [1750] */
    (xdc_Char)0x6b,  /* [1751] */
    (xdc_Char)0x2e,  /* [1752] */
    (xdc_Char)0x0,  /* [1753] */
    (xdc_Char)0x41,  /* [1754] */
    (xdc_Char)0x5f,  /* [1755] */
    (xdc_Char)0x74,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x73,  /* [1758] */
    (xdc_Char)0x6b,  /* [1759] */
    (xdc_Char)0x44,  /* [1760] */
    (xdc_Char)0x69,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x61,  /* [1763] */
    (xdc_Char)0x62,  /* [1764] */
    (xdc_Char)0x6c,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x64,  /* [1767] */
    (xdc_Char)0x3a,  /* [1768] */
    (xdc_Char)0x20,  /* [1769] */
    (xdc_Char)0x43,  /* [1770] */
    (xdc_Char)0x61,  /* [1771] */
    (xdc_Char)0x6e,  /* [1772] */
    (xdc_Char)0x6e,  /* [1773] */
    (xdc_Char)0x6f,  /* [1774] */
    (xdc_Char)0x74,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x63,  /* [1777] */
    (xdc_Char)0x72,  /* [1778] */
    (xdc_Char)0x65,  /* [1779] */
    (xdc_Char)0x61,  /* [1780] */
    (xdc_Char)0x74,  /* [1781] */
    (xdc_Char)0x65,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x20,  /* [1785] */
    (xdc_Char)0x74,  /* [1786] */
    (xdc_Char)0x61,  /* [1787] */
    (xdc_Char)0x73,  /* [1788] */
    (xdc_Char)0x6b,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x77,  /* [1791] */
    (xdc_Char)0x68,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x6e,  /* [1794] */
    (xdc_Char)0x20,  /* [1795] */
    (xdc_Char)0x74,  /* [1796] */
    (xdc_Char)0x61,  /* [1797] */
    (xdc_Char)0x73,  /* [1798] */
    (xdc_Char)0x6b,  /* [1799] */
    (xdc_Char)0x69,  /* [1800] */
    (xdc_Char)0x6e,  /* [1801] */
    (xdc_Char)0x67,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x69,  /* [1804] */
    (xdc_Char)0x73,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x64,  /* [1807] */
    (xdc_Char)0x69,  /* [1808] */
    (xdc_Char)0x73,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x62,  /* [1811] */
    (xdc_Char)0x6c,  /* [1812] */
    (xdc_Char)0x65,  /* [1813] */
    (xdc_Char)0x64,  /* [1814] */
    (xdc_Char)0x2e,  /* [1815] */
    (xdc_Char)0x0,  /* [1816] */
    (xdc_Char)0x41,  /* [1817] */
    (xdc_Char)0x5f,  /* [1818] */
    (xdc_Char)0x62,  /* [1819] */
    (xdc_Char)0x61,  /* [1820] */
    (xdc_Char)0x64,  /* [1821] */
    (xdc_Char)0x50,  /* [1822] */
    (xdc_Char)0x72,  /* [1823] */
    (xdc_Char)0x69,  /* [1824] */
    (xdc_Char)0x6f,  /* [1825] */
    (xdc_Char)0x72,  /* [1826] */
    (xdc_Char)0x69,  /* [1827] */
    (xdc_Char)0x74,  /* [1828] */
    (xdc_Char)0x79,  /* [1829] */
    (xdc_Char)0x3a,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x41,  /* [1832] */
    (xdc_Char)0x6e,  /* [1833] */
    (xdc_Char)0x20,  /* [1834] */
    (xdc_Char)0x69,  /* [1835] */
    (xdc_Char)0x6e,  /* [1836] */
    (xdc_Char)0x76,  /* [1837] */
    (xdc_Char)0x61,  /* [1838] */
    (xdc_Char)0x6c,  /* [1839] */
    (xdc_Char)0x69,  /* [1840] */
    (xdc_Char)0x64,  /* [1841] */
    (xdc_Char)0x20,  /* [1842] */
    (xdc_Char)0x74,  /* [1843] */
    (xdc_Char)0x61,  /* [1844] */
    (xdc_Char)0x73,  /* [1845] */
    (xdc_Char)0x6b,  /* [1846] */
    (xdc_Char)0x20,  /* [1847] */
    (xdc_Char)0x70,  /* [1848] */
    (xdc_Char)0x72,  /* [1849] */
    (xdc_Char)0x69,  /* [1850] */
    (xdc_Char)0x6f,  /* [1851] */
    (xdc_Char)0x72,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x74,  /* [1854] */
    (xdc_Char)0x79,  /* [1855] */
    (xdc_Char)0x20,  /* [1856] */
    (xdc_Char)0x77,  /* [1857] */
    (xdc_Char)0x61,  /* [1858] */
    (xdc_Char)0x73,  /* [1859] */
    (xdc_Char)0x20,  /* [1860] */
    (xdc_Char)0x75,  /* [1861] */
    (xdc_Char)0x73,  /* [1862] */
    (xdc_Char)0x65,  /* [1863] */
    (xdc_Char)0x64,  /* [1864] */
    (xdc_Char)0x2e,  /* [1865] */
    (xdc_Char)0x0,  /* [1866] */
    (xdc_Char)0x41,  /* [1867] */
    (xdc_Char)0x5f,  /* [1868] */
    (xdc_Char)0x62,  /* [1869] */
    (xdc_Char)0x61,  /* [1870] */
    (xdc_Char)0x64,  /* [1871] */
    (xdc_Char)0x54,  /* [1872] */
    (xdc_Char)0x69,  /* [1873] */
    (xdc_Char)0x6d,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x6f,  /* [1876] */
    (xdc_Char)0x75,  /* [1877] */
    (xdc_Char)0x74,  /* [1878] */
    (xdc_Char)0x3a,  /* [1879] */
    (xdc_Char)0x20,  /* [1880] */
    (xdc_Char)0x43,  /* [1881] */
    (xdc_Char)0x61,  /* [1882] */
    (xdc_Char)0x6e,  /* [1883] */
    (xdc_Char)0x27,  /* [1884] */
    (xdc_Char)0x74,  /* [1885] */
    (xdc_Char)0x20,  /* [1886] */
    (xdc_Char)0x73,  /* [1887] */
    (xdc_Char)0x6c,  /* [1888] */
    (xdc_Char)0x65,  /* [1889] */
    (xdc_Char)0x65,  /* [1890] */
    (xdc_Char)0x70,  /* [1891] */
    (xdc_Char)0x20,  /* [1892] */
    (xdc_Char)0x46,  /* [1893] */
    (xdc_Char)0x4f,  /* [1894] */
    (xdc_Char)0x52,  /* [1895] */
    (xdc_Char)0x45,  /* [1896] */
    (xdc_Char)0x56,  /* [1897] */
    (xdc_Char)0x45,  /* [1898] */
    (xdc_Char)0x52,  /* [1899] */
    (xdc_Char)0x2e,  /* [1900] */
    (xdc_Char)0x0,  /* [1901] */
    (xdc_Char)0x41,  /* [1902] */
    (xdc_Char)0x5f,  /* [1903] */
    (xdc_Char)0x62,  /* [1904] */
    (xdc_Char)0x61,  /* [1905] */
    (xdc_Char)0x64,  /* [1906] */
    (xdc_Char)0x41,  /* [1907] */
    (xdc_Char)0x66,  /* [1908] */
    (xdc_Char)0x66,  /* [1909] */
    (xdc_Char)0x69,  /* [1910] */
    (xdc_Char)0x6e,  /* [1911] */
    (xdc_Char)0x69,  /* [1912] */
    (xdc_Char)0x74,  /* [1913] */
    (xdc_Char)0x79,  /* [1914] */
    (xdc_Char)0x3a,  /* [1915] */
    (xdc_Char)0x20,  /* [1916] */
    (xdc_Char)0x49,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x76,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x6c,  /* [1921] */
    (xdc_Char)0x69,  /* [1922] */
    (xdc_Char)0x64,  /* [1923] */
    (xdc_Char)0x20,  /* [1924] */
    (xdc_Char)0x61,  /* [1925] */
    (xdc_Char)0x66,  /* [1926] */
    (xdc_Char)0x66,  /* [1927] */
    (xdc_Char)0x69,  /* [1928] */
    (xdc_Char)0x6e,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x74,  /* [1931] */
    (xdc_Char)0x79,  /* [1932] */
    (xdc_Char)0x2e,  /* [1933] */
    (xdc_Char)0x0,  /* [1934] */
    (xdc_Char)0x41,  /* [1935] */
    (xdc_Char)0x5f,  /* [1936] */
    (xdc_Char)0x73,  /* [1937] */
    (xdc_Char)0x6c,  /* [1938] */
    (xdc_Char)0x65,  /* [1939] */
    (xdc_Char)0x65,  /* [1940] */
    (xdc_Char)0x70,  /* [1941] */
    (xdc_Char)0x54,  /* [1942] */
    (xdc_Char)0x61,  /* [1943] */
    (xdc_Char)0x73,  /* [1944] */
    (xdc_Char)0x6b,  /* [1945] */
    (xdc_Char)0x44,  /* [1946] */
    (xdc_Char)0x69,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x61,  /* [1949] */
    (xdc_Char)0x62,  /* [1950] */
    (xdc_Char)0x6c,  /* [1951] */
    (xdc_Char)0x65,  /* [1952] */
    (xdc_Char)0x64,  /* [1953] */
    (xdc_Char)0x3a,  /* [1954] */
    (xdc_Char)0x20,  /* [1955] */
    (xdc_Char)0x43,  /* [1956] */
    (xdc_Char)0x61,  /* [1957] */
    (xdc_Char)0x6e,  /* [1958] */
    (xdc_Char)0x6e,  /* [1959] */
    (xdc_Char)0x6f,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x20,  /* [1962] */
    (xdc_Char)0x63,  /* [1963] */
    (xdc_Char)0x61,  /* [1964] */
    (xdc_Char)0x6c,  /* [1965] */
    (xdc_Char)0x6c,  /* [1966] */
    (xdc_Char)0x20,  /* [1967] */
    (xdc_Char)0x54,  /* [1968] */
    (xdc_Char)0x61,  /* [1969] */
    (xdc_Char)0x73,  /* [1970] */
    (xdc_Char)0x6b,  /* [1971] */
    (xdc_Char)0x5f,  /* [1972] */
    (xdc_Char)0x73,  /* [1973] */
    (xdc_Char)0x6c,  /* [1974] */
    (xdc_Char)0x65,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x70,  /* [1977] */
    (xdc_Char)0x28,  /* [1978] */
    (xdc_Char)0x29,  /* [1979] */
    (xdc_Char)0x20,  /* [1980] */
    (xdc_Char)0x77,  /* [1981] */
    (xdc_Char)0x68,  /* [1982] */
    (xdc_Char)0x69,  /* [1983] */
    (xdc_Char)0x6c,  /* [1984] */
    (xdc_Char)0x65,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x74,  /* [1987] */
    (xdc_Char)0x68,  /* [1988] */
    (xdc_Char)0x65,  /* [1989] */
    (xdc_Char)0x20,  /* [1990] */
    (xdc_Char)0x54,  /* [1991] */
    (xdc_Char)0x61,  /* [1992] */
    (xdc_Char)0x73,  /* [1993] */
    (xdc_Char)0x6b,  /* [1994] */
    (xdc_Char)0x20,  /* [1995] */
    (xdc_Char)0x73,  /* [1996] */
    (xdc_Char)0x63,  /* [1997] */
    (xdc_Char)0x68,  /* [1998] */
    (xdc_Char)0x65,  /* [1999] */
    (xdc_Char)0x64,  /* [2000] */
    (xdc_Char)0x75,  /* [2001] */
    (xdc_Char)0x6c,  /* [2002] */
    (xdc_Char)0x65,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x20,  /* [2005] */
    (xdc_Char)0x69,  /* [2006] */
    (xdc_Char)0x73,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x64,  /* [2009] */
    (xdc_Char)0x69,  /* [2010] */
    (xdc_Char)0x73,  /* [2011] */
    (xdc_Char)0x61,  /* [2012] */
    (xdc_Char)0x62,  /* [2013] */
    (xdc_Char)0x6c,  /* [2014] */
    (xdc_Char)0x65,  /* [2015] */
    (xdc_Char)0x64,  /* [2016] */
    (xdc_Char)0x2e,  /* [2017] */
    (xdc_Char)0x0,  /* [2018] */
    (xdc_Char)0x41,  /* [2019] */
    (xdc_Char)0x5f,  /* [2020] */
    (xdc_Char)0x69,  /* [2021] */
    (xdc_Char)0x6e,  /* [2022] */
    (xdc_Char)0x76,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x6c,  /* [2025] */
    (xdc_Char)0x69,  /* [2026] */
    (xdc_Char)0x64,  /* [2027] */
    (xdc_Char)0x43,  /* [2028] */
    (xdc_Char)0x6f,  /* [2029] */
    (xdc_Char)0x72,  /* [2030] */
    (xdc_Char)0x65,  /* [2031] */
    (xdc_Char)0x49,  /* [2032] */
    (xdc_Char)0x64,  /* [2033] */
    (xdc_Char)0x3a,  /* [2034] */
    (xdc_Char)0x20,  /* [2035] */
    (xdc_Char)0x43,  /* [2036] */
    (xdc_Char)0x61,  /* [2037] */
    (xdc_Char)0x6e,  /* [2038] */
    (xdc_Char)0x6e,  /* [2039] */
    (xdc_Char)0x6f,  /* [2040] */
    (xdc_Char)0x74,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x70,  /* [2043] */
    (xdc_Char)0x61,  /* [2044] */
    (xdc_Char)0x73,  /* [2045] */
    (xdc_Char)0x73,  /* [2046] */
    (xdc_Char)0x20,  /* [2047] */
    (xdc_Char)0x61,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x6e,  /* [2050] */
    (xdc_Char)0x6f,  /* [2051] */
    (xdc_Char)0x6e,  /* [2052] */
    (xdc_Char)0x2d,  /* [2053] */
    (xdc_Char)0x7a,  /* [2054] */
    (xdc_Char)0x65,  /* [2055] */
    (xdc_Char)0x72,  /* [2056] */
    (xdc_Char)0x6f,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x43,  /* [2059] */
    (xdc_Char)0x6f,  /* [2060] */
    (xdc_Char)0x72,  /* [2061] */
    (xdc_Char)0x65,  /* [2062] */
    (xdc_Char)0x49,  /* [2063] */
    (xdc_Char)0x64,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x69,  /* [2066] */
    (xdc_Char)0x6e,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x61,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x6e,  /* [2071] */
    (xdc_Char)0x6f,  /* [2072] */
    (xdc_Char)0x6e,  /* [2073] */
    (xdc_Char)0x2d,  /* [2074] */
    (xdc_Char)0x53,  /* [2075] */
    (xdc_Char)0x4d,  /* [2076] */
    (xdc_Char)0x50,  /* [2077] */
    (xdc_Char)0x20,  /* [2078] */
    (xdc_Char)0x61,  /* [2079] */
    (xdc_Char)0x70,  /* [2080] */
    (xdc_Char)0x70,  /* [2081] */
    (xdc_Char)0x6c,  /* [2082] */
    (xdc_Char)0x69,  /* [2083] */
    (xdc_Char)0x63,  /* [2084] */
    (xdc_Char)0x61,  /* [2085] */
    (xdc_Char)0x74,  /* [2086] */
    (xdc_Char)0x69,  /* [2087] */
    (xdc_Char)0x6f,  /* [2088] */
    (xdc_Char)0x6e,  /* [2089] */
    (xdc_Char)0x2e,  /* [2090] */
    (xdc_Char)0x0,  /* [2091] */
    (xdc_Char)0x41,  /* [2092] */
    (xdc_Char)0x5f,  /* [2093] */
    (xdc_Char)0x69,  /* [2094] */
    (xdc_Char)0x70,  /* [2095] */
    (xdc_Char)0x63,  /* [2096] */
    (xdc_Char)0x46,  /* [2097] */
    (xdc_Char)0x61,  /* [2098] */
    (xdc_Char)0x69,  /* [2099] */
    (xdc_Char)0x6c,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x64,  /* [2102] */
    (xdc_Char)0x3a,  /* [2103] */
    (xdc_Char)0x20,  /* [2104] */
    (xdc_Char)0x55,  /* [2105] */
    (xdc_Char)0x6e,  /* [2106] */
    (xdc_Char)0x65,  /* [2107] */
    (xdc_Char)0x78,  /* [2108] */
    (xdc_Char)0x70,  /* [2109] */
    (xdc_Char)0x65,  /* [2110] */
    (xdc_Char)0x63,  /* [2111] */
    (xdc_Char)0x74,  /* [2112] */
    (xdc_Char)0x65,  /* [2113] */
    (xdc_Char)0x64,  /* [2114] */
    (xdc_Char)0x20,  /* [2115] */
    (xdc_Char)0x4d,  /* [2116] */
    (xdc_Char)0x65,  /* [2117] */
    (xdc_Char)0x73,  /* [2118] */
    (xdc_Char)0x73,  /* [2119] */
    (xdc_Char)0x61,  /* [2120] */
    (xdc_Char)0x67,  /* [2121] */
    (xdc_Char)0x65,  /* [2122] */
    (xdc_Char)0x51,  /* [2123] */
    (xdc_Char)0x20,  /* [2124] */
    (xdc_Char)0x66,  /* [2125] */
    (xdc_Char)0x61,  /* [2126] */
    (xdc_Char)0x69,  /* [2127] */
    (xdc_Char)0x6c,  /* [2128] */
    (xdc_Char)0x65,  /* [2129] */
    (xdc_Char)0x64,  /* [2130] */
    (xdc_Char)0x0,  /* [2131] */
    (xdc_Char)0x41,  /* [2132] */
    (xdc_Char)0x5f,  /* [2133] */
    (xdc_Char)0x69,  /* [2134] */
    (xdc_Char)0x6e,  /* [2135] */
    (xdc_Char)0x76,  /* [2136] */
    (xdc_Char)0x61,  /* [2137] */
    (xdc_Char)0x6c,  /* [2138] */
    (xdc_Char)0x69,  /* [2139] */
    (xdc_Char)0x64,  /* [2140] */
    (xdc_Char)0x48,  /* [2141] */
    (xdc_Char)0x64,  /* [2142] */
    (xdc_Char)0x72,  /* [2143] */
    (xdc_Char)0x54,  /* [2144] */
    (xdc_Char)0x79,  /* [2145] */
    (xdc_Char)0x70,  /* [2146] */
    (xdc_Char)0x65,  /* [2147] */
    (xdc_Char)0x3a,  /* [2148] */
    (xdc_Char)0x20,  /* [2149] */
    (xdc_Char)0x49,  /* [2150] */
    (xdc_Char)0x6e,  /* [2151] */
    (xdc_Char)0x76,  /* [2152] */
    (xdc_Char)0x61,  /* [2153] */
    (xdc_Char)0x6c,  /* [2154] */
    (xdc_Char)0x69,  /* [2155] */
    (xdc_Char)0x64,  /* [2156] */
    (xdc_Char)0x20,  /* [2157] */
    (xdc_Char)0x48,  /* [2158] */
    (xdc_Char)0x64,  /* [2159] */
    (xdc_Char)0x72,  /* [2160] */
    (xdc_Char)0x54,  /* [2161] */
    (xdc_Char)0x79,  /* [2162] */
    (xdc_Char)0x70,  /* [2163] */
    (xdc_Char)0x65,  /* [2164] */
    (xdc_Char)0x20,  /* [2165] */
    (xdc_Char)0x73,  /* [2166] */
    (xdc_Char)0x70,  /* [2167] */
    (xdc_Char)0x65,  /* [2168] */
    (xdc_Char)0x63,  /* [2169] */
    (xdc_Char)0x69,  /* [2170] */
    (xdc_Char)0x66,  /* [2171] */
    (xdc_Char)0x69,  /* [2172] */
    (xdc_Char)0x65,  /* [2173] */
    (xdc_Char)0x64,  /* [2174] */
    (xdc_Char)0x0,  /* [2175] */
    (xdc_Char)0x41,  /* [2176] */
    (xdc_Char)0x5f,  /* [2177] */
    (xdc_Char)0x69,  /* [2178] */
    (xdc_Char)0x6e,  /* [2179] */
    (xdc_Char)0x76,  /* [2180] */
    (xdc_Char)0x61,  /* [2181] */
    (xdc_Char)0x6c,  /* [2182] */
    (xdc_Char)0x69,  /* [2183] */
    (xdc_Char)0x64,  /* [2184] */
    (xdc_Char)0x53,  /* [2185] */
    (xdc_Char)0x65,  /* [2186] */
    (xdc_Char)0x72,  /* [2187] */
    (xdc_Char)0x76,  /* [2188] */
    (xdc_Char)0x69,  /* [2189] */
    (xdc_Char)0x63,  /* [2190] */
    (xdc_Char)0x65,  /* [2191] */
    (xdc_Char)0x49,  /* [2192] */
    (xdc_Char)0x64,  /* [2193] */
    (xdc_Char)0x3a,  /* [2194] */
    (xdc_Char)0x20,  /* [2195] */
    (xdc_Char)0x53,  /* [2196] */
    (xdc_Char)0x65,  /* [2197] */
    (xdc_Char)0x72,  /* [2198] */
    (xdc_Char)0x76,  /* [2199] */
    (xdc_Char)0x69,  /* [2200] */
    (xdc_Char)0x63,  /* [2201] */
    (xdc_Char)0x65,  /* [2202] */
    (xdc_Char)0x49,  /* [2203] */
    (xdc_Char)0x64,  /* [2204] */
    (xdc_Char)0x20,  /* [2205] */
    (xdc_Char)0x6f,  /* [2206] */
    (xdc_Char)0x75,  /* [2207] */
    (xdc_Char)0x74,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x6f,  /* [2210] */
    (xdc_Char)0x66,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x72,  /* [2213] */
    (xdc_Char)0x61,  /* [2214] */
    (xdc_Char)0x6e,  /* [2215] */
    (xdc_Char)0x67,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x0,  /* [2218] */
    (xdc_Char)0x41,  /* [2219] */
    (xdc_Char)0x5f,  /* [2220] */
    (xdc_Char)0x69,  /* [2221] */
    (xdc_Char)0x6e,  /* [2222] */
    (xdc_Char)0x76,  /* [2223] */
    (xdc_Char)0x61,  /* [2224] */
    (xdc_Char)0x6c,  /* [2225] */
    (xdc_Char)0x69,  /* [2226] */
    (xdc_Char)0x64,  /* [2227] */
    (xdc_Char)0x50,  /* [2228] */
    (xdc_Char)0x72,  /* [2229] */
    (xdc_Char)0x6f,  /* [2230] */
    (xdc_Char)0x63,  /* [2231] */
    (xdc_Char)0x65,  /* [2232] */
    (xdc_Char)0x73,  /* [2233] */
    (xdc_Char)0x73,  /* [2234] */
    (xdc_Char)0x43,  /* [2235] */
    (xdc_Char)0x61,  /* [2236] */
    (xdc_Char)0x6c,  /* [2237] */
    (xdc_Char)0x6c,  /* [2238] */
    (xdc_Char)0x62,  /* [2239] */
    (xdc_Char)0x61,  /* [2240] */
    (xdc_Char)0x63,  /* [2241] */
    (xdc_Char)0x6b,  /* [2242] */
    (xdc_Char)0x46,  /* [2243] */
    (xdc_Char)0x78,  /* [2244] */
    (xdc_Char)0x6e,  /* [2245] */
    (xdc_Char)0x3a,  /* [2246] */
    (xdc_Char)0x20,  /* [2247] */
    (xdc_Char)0x43,  /* [2248] */
    (xdc_Char)0x61,  /* [2249] */
    (xdc_Char)0x6c,  /* [2250] */
    (xdc_Char)0x6c,  /* [2251] */
    (xdc_Char)0x62,  /* [2252] */
    (xdc_Char)0x61,  /* [2253] */
    (xdc_Char)0x63,  /* [2254] */
    (xdc_Char)0x6b,  /* [2255] */
    (xdc_Char)0x20,  /* [2256] */
    (xdc_Char)0x63,  /* [2257] */
    (xdc_Char)0x61,  /* [2258] */
    (xdc_Char)0x6e,  /* [2259] */
    (xdc_Char)0x6e,  /* [2260] */
    (xdc_Char)0x6f,  /* [2261] */
    (xdc_Char)0x74,  /* [2262] */
    (xdc_Char)0x20,  /* [2263] */
    (xdc_Char)0x62,  /* [2264] */
    (xdc_Char)0x65,  /* [2265] */
    (xdc_Char)0x20,  /* [2266] */
    (xdc_Char)0x4e,  /* [2267] */
    (xdc_Char)0x55,  /* [2268] */
    (xdc_Char)0x4c,  /* [2269] */
    (xdc_Char)0x4c,  /* [2270] */
    (xdc_Char)0x0,  /* [2271] */
    (xdc_Char)0x41,  /* [2272] */
    (xdc_Char)0x5f,  /* [2273] */
    (xdc_Char)0x7a,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x72,  /* [2276] */
    (xdc_Char)0x6f,  /* [2277] */
    (xdc_Char)0x54,  /* [2278] */
    (xdc_Char)0x69,  /* [2279] */
    (xdc_Char)0x6d,  /* [2280] */
    (xdc_Char)0x65,  /* [2281] */
    (xdc_Char)0x6f,  /* [2282] */
    (xdc_Char)0x75,  /* [2283] */
    (xdc_Char)0x74,  /* [2284] */
    (xdc_Char)0x3a,  /* [2285] */
    (xdc_Char)0x20,  /* [2286] */
    (xdc_Char)0x54,  /* [2287] */
    (xdc_Char)0x69,  /* [2288] */
    (xdc_Char)0x6d,  /* [2289] */
    (xdc_Char)0x65,  /* [2290] */
    (xdc_Char)0x6f,  /* [2291] */
    (xdc_Char)0x75,  /* [2292] */
    (xdc_Char)0x74,  /* [2293] */
    (xdc_Char)0x20,  /* [2294] */
    (xdc_Char)0x76,  /* [2295] */
    (xdc_Char)0x61,  /* [2296] */
    (xdc_Char)0x6c,  /* [2297] */
    (xdc_Char)0x75,  /* [2298] */
    (xdc_Char)0x65,  /* [2299] */
    (xdc_Char)0x20,  /* [2300] */
    (xdc_Char)0x61,  /* [2301] */
    (xdc_Char)0x6e,  /* [2302] */
    (xdc_Char)0x6e,  /* [2303] */
    (xdc_Char)0x6f,  /* [2304] */
    (xdc_Char)0x74,  /* [2305] */
    (xdc_Char)0x20,  /* [2306] */
    (xdc_Char)0x62,  /* [2307] */
    (xdc_Char)0x65,  /* [2308] */
    (xdc_Char)0x20,  /* [2309] */
    (xdc_Char)0x7a,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x72,  /* [2312] */
    (xdc_Char)0x6f,  /* [2313] */
    (xdc_Char)0x0,  /* [2314] */
    (xdc_Char)0x41,  /* [2315] */
    (xdc_Char)0x5f,  /* [2316] */
    (xdc_Char)0x69,  /* [2317] */
    (xdc_Char)0x6e,  /* [2318] */
    (xdc_Char)0x76,  /* [2319] */
    (xdc_Char)0x61,  /* [2320] */
    (xdc_Char)0x6c,  /* [2321] */
    (xdc_Char)0x69,  /* [2322] */
    (xdc_Char)0x64,  /* [2323] */
    (xdc_Char)0x4b,  /* [2324] */
    (xdc_Char)0x65,  /* [2325] */
    (xdc_Char)0x79,  /* [2326] */
    (xdc_Char)0x3a,  /* [2327] */
    (xdc_Char)0x20,  /* [2328] */
    (xdc_Char)0x74,  /* [2329] */
    (xdc_Char)0x68,  /* [2330] */
    (xdc_Char)0x65,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x6b,  /* [2333] */
    (xdc_Char)0x65,  /* [2334] */
    (xdc_Char)0x79,  /* [2335] */
    (xdc_Char)0x20,  /* [2336] */
    (xdc_Char)0x6d,  /* [2337] */
    (xdc_Char)0x75,  /* [2338] */
    (xdc_Char)0x73,  /* [2339] */
    (xdc_Char)0x74,  /* [2340] */
    (xdc_Char)0x20,  /* [2341] */
    (xdc_Char)0x62,  /* [2342] */
    (xdc_Char)0x65,  /* [2343] */
    (xdc_Char)0x20,  /* [2344] */
    (xdc_Char)0x73,  /* [2345] */
    (xdc_Char)0x65,  /* [2346] */
    (xdc_Char)0x74,  /* [2347] */
    (xdc_Char)0x20,  /* [2348] */
    (xdc_Char)0x74,  /* [2349] */
    (xdc_Char)0x6f,  /* [2350] */
    (xdc_Char)0x20,  /* [2351] */
    (xdc_Char)0x61,  /* [2352] */
    (xdc_Char)0x20,  /* [2353] */
    (xdc_Char)0x6e,  /* [2354] */
    (xdc_Char)0x6f,  /* [2355] */
    (xdc_Char)0x6e,  /* [2356] */
    (xdc_Char)0x2d,  /* [2357] */
    (xdc_Char)0x64,  /* [2358] */
    (xdc_Char)0x65,  /* [2359] */
    (xdc_Char)0x66,  /* [2360] */
    (xdc_Char)0x61,  /* [2361] */
    (xdc_Char)0x75,  /* [2362] */
    (xdc_Char)0x6c,  /* [2363] */
    (xdc_Char)0x74,  /* [2364] */
    (xdc_Char)0x20,  /* [2365] */
    (xdc_Char)0x76,  /* [2366] */
    (xdc_Char)0x61,  /* [2367] */
    (xdc_Char)0x6c,  /* [2368] */
    (xdc_Char)0x75,  /* [2369] */
    (xdc_Char)0x65,  /* [2370] */
    (xdc_Char)0x0,  /* [2371] */
    (xdc_Char)0x41,  /* [2372] */
    (xdc_Char)0x5f,  /* [2373] */
    (xdc_Char)0x6e,  /* [2374] */
    (xdc_Char)0x75,  /* [2375] */
    (xdc_Char)0x6c,  /* [2376] */
    (xdc_Char)0x6c,  /* [2377] */
    (xdc_Char)0x48,  /* [2378] */
    (xdc_Char)0x61,  /* [2379] */
    (xdc_Char)0x6e,  /* [2380] */
    (xdc_Char)0x64,  /* [2381] */
    (xdc_Char)0x6c,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x3a,  /* [2384] */
    (xdc_Char)0x20,  /* [2385] */
    (xdc_Char)0x4e,  /* [2386] */
    (xdc_Char)0x75,  /* [2387] */
    (xdc_Char)0x6c,  /* [2388] */
    (xdc_Char)0x6c,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x68,  /* [2391] */
    (xdc_Char)0x61,  /* [2392] */
    (xdc_Char)0x6e,  /* [2393] */
    (xdc_Char)0x64,  /* [2394] */
    (xdc_Char)0x6c,  /* [2395] */
    (xdc_Char)0x65,  /* [2396] */
    (xdc_Char)0x20,  /* [2397] */
    (xdc_Char)0x70,  /* [2398] */
    (xdc_Char)0x61,  /* [2399] */
    (xdc_Char)0x73,  /* [2400] */
    (xdc_Char)0x73,  /* [2401] */
    (xdc_Char)0x65,  /* [2402] */
    (xdc_Char)0x64,  /* [2403] */
    (xdc_Char)0x20,  /* [2404] */
    (xdc_Char)0x74,  /* [2405] */
    (xdc_Char)0x6f,  /* [2406] */
    (xdc_Char)0x20,  /* [2407] */
    (xdc_Char)0x63,  /* [2408] */
    (xdc_Char)0x72,  /* [2409] */
    (xdc_Char)0x65,  /* [2410] */
    (xdc_Char)0x61,  /* [2411] */
    (xdc_Char)0x74,  /* [2412] */
    (xdc_Char)0x65,  /* [2413] */
    (xdc_Char)0x0,  /* [2414] */
    (xdc_Char)0x41,  /* [2415] */
    (xdc_Char)0x5f,  /* [2416] */
    (xdc_Char)0x49,  /* [2417] */
    (xdc_Char)0x70,  /* [2418] */
    (xdc_Char)0x63,  /* [2419] */
    (xdc_Char)0x4d,  /* [2420] */
    (xdc_Char)0x50,  /* [2421] */
    (xdc_Char)0x46,  /* [2422] */
    (xdc_Char)0x61,  /* [2423] */
    (xdc_Char)0x69,  /* [2424] */
    (xdc_Char)0x6c,  /* [2425] */
    (xdc_Char)0x75,  /* [2426] */
    (xdc_Char)0x72,  /* [2427] */
    (xdc_Char)0x65,  /* [2428] */
    (xdc_Char)0x3a,  /* [2429] */
    (xdc_Char)0x20,  /* [2430] */
    (xdc_Char)0x55,  /* [2431] */
    (xdc_Char)0x6e,  /* [2432] */
    (xdc_Char)0x65,  /* [2433] */
    (xdc_Char)0x78,  /* [2434] */
    (xdc_Char)0x70,  /* [2435] */
    (xdc_Char)0x65,  /* [2436] */
    (xdc_Char)0x63,  /* [2437] */
    (xdc_Char)0x74,  /* [2438] */
    (xdc_Char)0x65,  /* [2439] */
    (xdc_Char)0x64,  /* [2440] */
    (xdc_Char)0x20,  /* [2441] */
    (xdc_Char)0x66,  /* [2442] */
    (xdc_Char)0x61,  /* [2443] */
    (xdc_Char)0x69,  /* [2444] */
    (xdc_Char)0x6c,  /* [2445] */
    (xdc_Char)0x75,  /* [2446] */
    (xdc_Char)0x72,  /* [2447] */
    (xdc_Char)0x65,  /* [2448] */
    (xdc_Char)0x20,  /* [2449] */
    (xdc_Char)0x77,  /* [2450] */
    (xdc_Char)0x69,  /* [2451] */
    (xdc_Char)0x74,  /* [2452] */
    (xdc_Char)0x68,  /* [2453] */
    (xdc_Char)0x20,  /* [2454] */
    (xdc_Char)0x74,  /* [2455] */
    (xdc_Char)0x68,  /* [2456] */
    (xdc_Char)0x65,  /* [2457] */
    (xdc_Char)0x20,  /* [2458] */
    (xdc_Char)0x49,  /* [2459] */
    (xdc_Char)0x70,  /* [2460] */
    (xdc_Char)0x63,  /* [2461] */
    (xdc_Char)0x4d,  /* [2462] */
    (xdc_Char)0x50,  /* [2463] */
    (xdc_Char)0x0,  /* [2464] */
    (xdc_Char)0x4c,  /* [2465] */
    (xdc_Char)0x6f,  /* [2466] */
    (xdc_Char)0x67,  /* [2467] */
    (xdc_Char)0x67,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x72,  /* [2470] */
    (xdc_Char)0x53,  /* [2471] */
    (xdc_Char)0x74,  /* [2472] */
    (xdc_Char)0x72,  /* [2473] */
    (xdc_Char)0x65,  /* [2474] */
    (xdc_Char)0x61,  /* [2475] */
    (xdc_Char)0x6d,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x72,  /* [2478] */
    (xdc_Char)0x32,  /* [2479] */
    (xdc_Char)0x5f,  /* [2480] */
    (xdc_Char)0x63,  /* [2481] */
    (xdc_Char)0x72,  /* [2482] */
    (xdc_Char)0x65,  /* [2483] */
    (xdc_Char)0x61,  /* [2484] */
    (xdc_Char)0x74,  /* [2485] */
    (xdc_Char)0x65,  /* [2486] */
    (xdc_Char)0x27,  /* [2487] */
    (xdc_Char)0x73,  /* [2488] */
    (xdc_Char)0x20,  /* [2489] */
    (xdc_Char)0x62,  /* [2490] */
    (xdc_Char)0x75,  /* [2491] */
    (xdc_Char)0x66,  /* [2492] */
    (xdc_Char)0x66,  /* [2493] */
    (xdc_Char)0x65,  /* [2494] */
    (xdc_Char)0x72,  /* [2495] */
    (xdc_Char)0x20,  /* [2496] */
    (xdc_Char)0x72,  /* [2497] */
    (xdc_Char)0x65,  /* [2498] */
    (xdc_Char)0x74,  /* [2499] */
    (xdc_Char)0x75,  /* [2500] */
    (xdc_Char)0x72,  /* [2501] */
    (xdc_Char)0x6e,  /* [2502] */
    (xdc_Char)0x65,  /* [2503] */
    (xdc_Char)0x64,  /* [2504] */
    (xdc_Char)0x20,  /* [2505] */
    (xdc_Char)0x62,  /* [2506] */
    (xdc_Char)0x79,  /* [2507] */
    (xdc_Char)0x20,  /* [2508] */
    (xdc_Char)0x70,  /* [2509] */
    (xdc_Char)0x72,  /* [2510] */
    (xdc_Char)0x69,  /* [2511] */
    (xdc_Char)0x6d,  /* [2512] */
    (xdc_Char)0x65,  /* [2513] */
    (xdc_Char)0x46,  /* [2514] */
    (xdc_Char)0x78,  /* [2515] */
    (xdc_Char)0x6e,  /* [2516] */
    (xdc_Char)0x20,  /* [2517] */
    (xdc_Char)0x69,  /* [2518] */
    (xdc_Char)0x73,  /* [2519] */
    (xdc_Char)0x20,  /* [2520] */
    (xdc_Char)0x4e,  /* [2521] */
    (xdc_Char)0x55,  /* [2522] */
    (xdc_Char)0x4c,  /* [2523] */
    (xdc_Char)0x4c,  /* [2524] */
    (xdc_Char)0x0,  /* [2525] */
    (xdc_Char)0x41,  /* [2526] */
    (xdc_Char)0x5f,  /* [2527] */
    (xdc_Char)0x62,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x64,  /* [2530] */
    (xdc_Char)0x43,  /* [2531] */
    (xdc_Char)0x6f,  /* [2532] */
    (xdc_Char)0x6e,  /* [2533] */
    (xdc_Char)0x74,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x78,  /* [2536] */
    (xdc_Char)0x74,  /* [2537] */
    (xdc_Char)0x3a,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x62,  /* [2540] */
    (xdc_Char)0x61,  /* [2541] */
    (xdc_Char)0x64,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x63,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x6c,  /* [2546] */
    (xdc_Char)0x6c,  /* [2547] */
    (xdc_Char)0x69,  /* [2548] */
    (xdc_Char)0x6e,  /* [2549] */
    (xdc_Char)0x67,  /* [2550] */
    (xdc_Char)0x20,  /* [2551] */
    (xdc_Char)0x63,  /* [2552] */
    (xdc_Char)0x6f,  /* [2553] */
    (xdc_Char)0x6e,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x65,  /* [2556] */
    (xdc_Char)0x78,  /* [2557] */
    (xdc_Char)0x74,  /* [2558] */
    (xdc_Char)0x2e,  /* [2559] */
    (xdc_Char)0x20,  /* [2560] */
    (xdc_Char)0x4d,  /* [2561] */
    (xdc_Char)0x61,  /* [2562] */
    (xdc_Char)0x79,  /* [2563] */
    (xdc_Char)0x20,  /* [2564] */
    (xdc_Char)0x6e,  /* [2565] */
    (xdc_Char)0x6f,  /* [2566] */
    (xdc_Char)0x74,  /* [2567] */
    (xdc_Char)0x20,  /* [2568] */
    (xdc_Char)0x62,  /* [2569] */
    (xdc_Char)0x65,  /* [2570] */
    (xdc_Char)0x20,  /* [2571] */
    (xdc_Char)0x65,  /* [2572] */
    (xdc_Char)0x6e,  /* [2573] */
    (xdc_Char)0x74,  /* [2574] */
    (xdc_Char)0x65,  /* [2575] */
    (xdc_Char)0x72,  /* [2576] */
    (xdc_Char)0x65,  /* [2577] */
    (xdc_Char)0x64,  /* [2578] */
    (xdc_Char)0x20,  /* [2579] */
    (xdc_Char)0x66,  /* [2580] */
    (xdc_Char)0x72,  /* [2581] */
    (xdc_Char)0x6f,  /* [2582] */
    (xdc_Char)0x6d,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x61,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x68,  /* [2587] */
    (xdc_Char)0x61,  /* [2588] */
    (xdc_Char)0x72,  /* [2589] */
    (xdc_Char)0x64,  /* [2590] */
    (xdc_Char)0x77,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x72,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x69,  /* [2596] */
    (xdc_Char)0x6e,  /* [2597] */
    (xdc_Char)0x74,  /* [2598] */
    (xdc_Char)0x65,  /* [2599] */
    (xdc_Char)0x72,  /* [2600] */
    (xdc_Char)0x72,  /* [2601] */
    (xdc_Char)0x75,  /* [2602] */
    (xdc_Char)0x70,  /* [2603] */
    (xdc_Char)0x74,  /* [2604] */
    (xdc_Char)0x20,  /* [2605] */
    (xdc_Char)0x74,  /* [2606] */
    (xdc_Char)0x68,  /* [2607] */
    (xdc_Char)0x72,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x61,  /* [2610] */
    (xdc_Char)0x64,  /* [2611] */
    (xdc_Char)0x2e,  /* [2612] */
    (xdc_Char)0x0,  /* [2613] */
    (xdc_Char)0x41,  /* [2614] */
    (xdc_Char)0x5f,  /* [2615] */
    (xdc_Char)0x62,  /* [2616] */
    (xdc_Char)0x61,  /* [2617] */
    (xdc_Char)0x64,  /* [2618] */
    (xdc_Char)0x43,  /* [2619] */
    (xdc_Char)0x6f,  /* [2620] */
    (xdc_Char)0x6e,  /* [2621] */
    (xdc_Char)0x74,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x78,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x3a,  /* [2626] */
    (xdc_Char)0x20,  /* [2627] */
    (xdc_Char)0x62,  /* [2628] */
    (xdc_Char)0x61,  /* [2629] */
    (xdc_Char)0x64,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x63,  /* [2632] */
    (xdc_Char)0x61,  /* [2633] */
    (xdc_Char)0x6c,  /* [2634] */
    (xdc_Char)0x6c,  /* [2635] */
    (xdc_Char)0x69,  /* [2636] */
    (xdc_Char)0x6e,  /* [2637] */
    (xdc_Char)0x67,  /* [2638] */
    (xdc_Char)0x20,  /* [2639] */
    (xdc_Char)0x63,  /* [2640] */
    (xdc_Char)0x6f,  /* [2641] */
    (xdc_Char)0x6e,  /* [2642] */
    (xdc_Char)0x74,  /* [2643] */
    (xdc_Char)0x65,  /* [2644] */
    (xdc_Char)0x78,  /* [2645] */
    (xdc_Char)0x74,  /* [2646] */
    (xdc_Char)0x2e,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x4d,  /* [2649] */
    (xdc_Char)0x61,  /* [2650] */
    (xdc_Char)0x79,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x6e,  /* [2653] */
    (xdc_Char)0x6f,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x20,  /* [2656] */
    (xdc_Char)0x62,  /* [2657] */
    (xdc_Char)0x65,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x65,  /* [2660] */
    (xdc_Char)0x6e,  /* [2661] */
    (xdc_Char)0x74,  /* [2662] */
    (xdc_Char)0x65,  /* [2663] */
    (xdc_Char)0x72,  /* [2664] */
    (xdc_Char)0x65,  /* [2665] */
    (xdc_Char)0x64,  /* [2666] */
    (xdc_Char)0x20,  /* [2667] */
    (xdc_Char)0x66,  /* [2668] */
    (xdc_Char)0x72,  /* [2669] */
    (xdc_Char)0x6f,  /* [2670] */
    (xdc_Char)0x6d,  /* [2671] */
    (xdc_Char)0x20,  /* [2672] */
    (xdc_Char)0x61,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x73,  /* [2675] */
    (xdc_Char)0x6f,  /* [2676] */
    (xdc_Char)0x66,  /* [2677] */
    (xdc_Char)0x74,  /* [2678] */
    (xdc_Char)0x77,  /* [2679] */
    (xdc_Char)0x61,  /* [2680] */
    (xdc_Char)0x72,  /* [2681] */
    (xdc_Char)0x65,  /* [2682] */
    (xdc_Char)0x20,  /* [2683] */
    (xdc_Char)0x6f,  /* [2684] */
    (xdc_Char)0x72,  /* [2685] */
    (xdc_Char)0x20,  /* [2686] */
    (xdc_Char)0x68,  /* [2687] */
    (xdc_Char)0x61,  /* [2688] */
    (xdc_Char)0x72,  /* [2689] */
    (xdc_Char)0x64,  /* [2690] */
    (xdc_Char)0x77,  /* [2691] */
    (xdc_Char)0x61,  /* [2692] */
    (xdc_Char)0x72,  /* [2693] */
    (xdc_Char)0x65,  /* [2694] */
    (xdc_Char)0x20,  /* [2695] */
    (xdc_Char)0x69,  /* [2696] */
    (xdc_Char)0x6e,  /* [2697] */
    (xdc_Char)0x74,  /* [2698] */
    (xdc_Char)0x65,  /* [2699] */
    (xdc_Char)0x72,  /* [2700] */
    (xdc_Char)0x72,  /* [2701] */
    (xdc_Char)0x75,  /* [2702] */
    (xdc_Char)0x70,  /* [2703] */
    (xdc_Char)0x74,  /* [2704] */
    (xdc_Char)0x20,  /* [2705] */
    (xdc_Char)0x74,  /* [2706] */
    (xdc_Char)0x68,  /* [2707] */
    (xdc_Char)0x72,  /* [2708] */
    (xdc_Char)0x65,  /* [2709] */
    (xdc_Char)0x61,  /* [2710] */
    (xdc_Char)0x64,  /* [2711] */
    (xdc_Char)0x2e,  /* [2712] */
    (xdc_Char)0x0,  /* [2713] */
    (xdc_Char)0x41,  /* [2714] */
    (xdc_Char)0x5f,  /* [2715] */
    (xdc_Char)0x62,  /* [2716] */
    (xdc_Char)0x61,  /* [2717] */
    (xdc_Char)0x64,  /* [2718] */
    (xdc_Char)0x43,  /* [2719] */
    (xdc_Char)0x6f,  /* [2720] */
    (xdc_Char)0x6e,  /* [2721] */
    (xdc_Char)0x74,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x78,  /* [2724] */
    (xdc_Char)0x74,  /* [2725] */
    (xdc_Char)0x3a,  /* [2726] */
    (xdc_Char)0x20,  /* [2727] */
    (xdc_Char)0x62,  /* [2728] */
    (xdc_Char)0x61,  /* [2729] */
    (xdc_Char)0x64,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x63,  /* [2732] */
    (xdc_Char)0x61,  /* [2733] */
    (xdc_Char)0x6c,  /* [2734] */
    (xdc_Char)0x6c,  /* [2735] */
    (xdc_Char)0x69,  /* [2736] */
    (xdc_Char)0x6e,  /* [2737] */
    (xdc_Char)0x67,  /* [2738] */
    (xdc_Char)0x20,  /* [2739] */
    (xdc_Char)0x63,  /* [2740] */
    (xdc_Char)0x6f,  /* [2741] */
    (xdc_Char)0x6e,  /* [2742] */
    (xdc_Char)0x74,  /* [2743] */
    (xdc_Char)0x65,  /* [2744] */
    (xdc_Char)0x78,  /* [2745] */
    (xdc_Char)0x74,  /* [2746] */
    (xdc_Char)0x2e,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x53,  /* [2749] */
    (xdc_Char)0x65,  /* [2750] */
    (xdc_Char)0x65,  /* [2751] */
    (xdc_Char)0x20,  /* [2752] */
    (xdc_Char)0x47,  /* [2753] */
    (xdc_Char)0x61,  /* [2754] */
    (xdc_Char)0x74,  /* [2755] */
    (xdc_Char)0x65,  /* [2756] */
    (xdc_Char)0x4d,  /* [2757] */
    (xdc_Char)0x75,  /* [2758] */
    (xdc_Char)0x74,  /* [2759] */
    (xdc_Char)0x65,  /* [2760] */
    (xdc_Char)0x78,  /* [2761] */
    (xdc_Char)0x50,  /* [2762] */
    (xdc_Char)0x72,  /* [2763] */
    (xdc_Char)0x69,  /* [2764] */
    (xdc_Char)0x20,  /* [2765] */
    (xdc_Char)0x41,  /* [2766] */
    (xdc_Char)0x50,  /* [2767] */
    (xdc_Char)0x49,  /* [2768] */
    (xdc_Char)0x20,  /* [2769] */
    (xdc_Char)0x64,  /* [2770] */
    (xdc_Char)0x6f,  /* [2771] */
    (xdc_Char)0x63,  /* [2772] */
    (xdc_Char)0x20,  /* [2773] */
    (xdc_Char)0x66,  /* [2774] */
    (xdc_Char)0x6f,  /* [2775] */
    (xdc_Char)0x72,  /* [2776] */
    (xdc_Char)0x20,  /* [2777] */
    (xdc_Char)0x64,  /* [2778] */
    (xdc_Char)0x65,  /* [2779] */
    (xdc_Char)0x74,  /* [2780] */
    (xdc_Char)0x61,  /* [2781] */
    (xdc_Char)0x69,  /* [2782] */
    (xdc_Char)0x6c,  /* [2783] */
    (xdc_Char)0x73,  /* [2784] */
    (xdc_Char)0x2e,  /* [2785] */
    (xdc_Char)0x0,  /* [2786] */
    (xdc_Char)0x41,  /* [2787] */
    (xdc_Char)0x5f,  /* [2788] */
    (xdc_Char)0x65,  /* [2789] */
    (xdc_Char)0x6e,  /* [2790] */
    (xdc_Char)0x74,  /* [2791] */
    (xdc_Char)0x65,  /* [2792] */
    (xdc_Char)0x72,  /* [2793] */
    (xdc_Char)0x54,  /* [2794] */
    (xdc_Char)0x61,  /* [2795] */
    (xdc_Char)0x73,  /* [2796] */
    (xdc_Char)0x6b,  /* [2797] */
    (xdc_Char)0x44,  /* [2798] */
    (xdc_Char)0x69,  /* [2799] */
    (xdc_Char)0x73,  /* [2800] */
    (xdc_Char)0x61,  /* [2801] */
    (xdc_Char)0x62,  /* [2802] */
    (xdc_Char)0x6c,  /* [2803] */
    (xdc_Char)0x65,  /* [2804] */
    (xdc_Char)0x64,  /* [2805] */
    (xdc_Char)0x3a,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x43,  /* [2808] */
    (xdc_Char)0x61,  /* [2809] */
    (xdc_Char)0x6e,  /* [2810] */
    (xdc_Char)0x6e,  /* [2811] */
    (xdc_Char)0x6f,  /* [2812] */
    (xdc_Char)0x74,  /* [2813] */
    (xdc_Char)0x20,  /* [2814] */
    (xdc_Char)0x63,  /* [2815] */
    (xdc_Char)0x61,  /* [2816] */
    (xdc_Char)0x6c,  /* [2817] */
    (xdc_Char)0x6c,  /* [2818] */
    (xdc_Char)0x20,  /* [2819] */
    (xdc_Char)0x47,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x74,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x4d,  /* [2824] */
    (xdc_Char)0x75,  /* [2825] */
    (xdc_Char)0x74,  /* [2826] */
    (xdc_Char)0x65,  /* [2827] */
    (xdc_Char)0x78,  /* [2828] */
    (xdc_Char)0x50,  /* [2829] */
    (xdc_Char)0x72,  /* [2830] */
    (xdc_Char)0x69,  /* [2831] */
    (xdc_Char)0x5f,  /* [2832] */
    (xdc_Char)0x65,  /* [2833] */
    (xdc_Char)0x6e,  /* [2834] */
    (xdc_Char)0x74,  /* [2835] */
    (xdc_Char)0x65,  /* [2836] */
    (xdc_Char)0x72,  /* [2837] */
    (xdc_Char)0x28,  /* [2838] */
    (xdc_Char)0x29,  /* [2839] */
    (xdc_Char)0x20,  /* [2840] */
    (xdc_Char)0x77,  /* [2841] */
    (xdc_Char)0x68,  /* [2842] */
    (xdc_Char)0x69,  /* [2843] */
    (xdc_Char)0x6c,  /* [2844] */
    (xdc_Char)0x65,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x74,  /* [2847] */
    (xdc_Char)0x68,  /* [2848] */
    (xdc_Char)0x65,  /* [2849] */
    (xdc_Char)0x20,  /* [2850] */
    (xdc_Char)0x54,  /* [2851] */
    (xdc_Char)0x61,  /* [2852] */
    (xdc_Char)0x73,  /* [2853] */
    (xdc_Char)0x6b,  /* [2854] */
    (xdc_Char)0x20,  /* [2855] */
    (xdc_Char)0x6f,  /* [2856] */
    (xdc_Char)0x72,  /* [2857] */
    (xdc_Char)0x20,  /* [2858] */
    (xdc_Char)0x53,  /* [2859] */
    (xdc_Char)0x77,  /* [2860] */
    (xdc_Char)0x69,  /* [2861] */
    (xdc_Char)0x20,  /* [2862] */
    (xdc_Char)0x73,  /* [2863] */
    (xdc_Char)0x63,  /* [2864] */
    (xdc_Char)0x68,  /* [2865] */
    (xdc_Char)0x65,  /* [2866] */
    (xdc_Char)0x64,  /* [2867] */
    (xdc_Char)0x75,  /* [2868] */
    (xdc_Char)0x6c,  /* [2869] */
    (xdc_Char)0x65,  /* [2870] */
    (xdc_Char)0x72,  /* [2871] */
    (xdc_Char)0x20,  /* [2872] */
    (xdc_Char)0x69,  /* [2873] */
    (xdc_Char)0x73,  /* [2874] */
    (xdc_Char)0x20,  /* [2875] */
    (xdc_Char)0x64,  /* [2876] */
    (xdc_Char)0x69,  /* [2877] */
    (xdc_Char)0x73,  /* [2878] */
    (xdc_Char)0x61,  /* [2879] */
    (xdc_Char)0x62,  /* [2880] */
    (xdc_Char)0x6c,  /* [2881] */
    (xdc_Char)0x65,  /* [2882] */
    (xdc_Char)0x64,  /* [2883] */
    (xdc_Char)0x2e,  /* [2884] */
    (xdc_Char)0x0,  /* [2885] */
    (xdc_Char)0x41,  /* [2886] */
    (xdc_Char)0x5f,  /* [2887] */
    (xdc_Char)0x62,  /* [2888] */
    (xdc_Char)0x61,  /* [2889] */
    (xdc_Char)0x64,  /* [2890] */
    (xdc_Char)0x43,  /* [2891] */
    (xdc_Char)0x6f,  /* [2892] */
    (xdc_Char)0x6e,  /* [2893] */
    (xdc_Char)0x74,  /* [2894] */
    (xdc_Char)0x65,  /* [2895] */
    (xdc_Char)0x78,  /* [2896] */
    (xdc_Char)0x74,  /* [2897] */
    (xdc_Char)0x3a,  /* [2898] */
    (xdc_Char)0x20,  /* [2899] */
    (xdc_Char)0x62,  /* [2900] */
    (xdc_Char)0x61,  /* [2901] */
    (xdc_Char)0x64,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x63,  /* [2904] */
    (xdc_Char)0x61,  /* [2905] */
    (xdc_Char)0x6c,  /* [2906] */
    (xdc_Char)0x6c,  /* [2907] */
    (xdc_Char)0x69,  /* [2908] */
    (xdc_Char)0x6e,  /* [2909] */
    (xdc_Char)0x67,  /* [2910] */
    (xdc_Char)0x20,  /* [2911] */
    (xdc_Char)0x63,  /* [2912] */
    (xdc_Char)0x6f,  /* [2913] */
    (xdc_Char)0x6e,  /* [2914] */
    (xdc_Char)0x74,  /* [2915] */
    (xdc_Char)0x65,  /* [2916] */
    (xdc_Char)0x78,  /* [2917] */
    (xdc_Char)0x74,  /* [2918] */
    (xdc_Char)0x2e,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x53,  /* [2921] */
    (xdc_Char)0x65,  /* [2922] */
    (xdc_Char)0x65,  /* [2923] */
    (xdc_Char)0x20,  /* [2924] */
    (xdc_Char)0x47,  /* [2925] */
    (xdc_Char)0x61,  /* [2926] */
    (xdc_Char)0x74,  /* [2927] */
    (xdc_Char)0x65,  /* [2928] */
    (xdc_Char)0x4d,  /* [2929] */
    (xdc_Char)0x75,  /* [2930] */
    (xdc_Char)0x74,  /* [2931] */
    (xdc_Char)0x65,  /* [2932] */
    (xdc_Char)0x78,  /* [2933] */
    (xdc_Char)0x20,  /* [2934] */
    (xdc_Char)0x41,  /* [2935] */
    (xdc_Char)0x50,  /* [2936] */
    (xdc_Char)0x49,  /* [2937] */
    (xdc_Char)0x20,  /* [2938] */
    (xdc_Char)0x64,  /* [2939] */
    (xdc_Char)0x6f,  /* [2940] */
    (xdc_Char)0x63,  /* [2941] */
    (xdc_Char)0x20,  /* [2942] */
    (xdc_Char)0x66,  /* [2943] */
    (xdc_Char)0x6f,  /* [2944] */
    (xdc_Char)0x72,  /* [2945] */
    (xdc_Char)0x20,  /* [2946] */
    (xdc_Char)0x64,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x74,  /* [2949] */
    (xdc_Char)0x61,  /* [2950] */
    (xdc_Char)0x69,  /* [2951] */
    (xdc_Char)0x6c,  /* [2952] */
    (xdc_Char)0x73,  /* [2953] */
    (xdc_Char)0x2e,  /* [2954] */
    (xdc_Char)0x0,  /* [2955] */
    (xdc_Char)0x41,  /* [2956] */
    (xdc_Char)0x5f,  /* [2957] */
    (xdc_Char)0x62,  /* [2958] */
    (xdc_Char)0x61,  /* [2959] */
    (xdc_Char)0x64,  /* [2960] */
    (xdc_Char)0x43,  /* [2961] */
    (xdc_Char)0x6f,  /* [2962] */
    (xdc_Char)0x6e,  /* [2963] */
    (xdc_Char)0x74,  /* [2964] */
    (xdc_Char)0x65,  /* [2965] */
    (xdc_Char)0x78,  /* [2966] */
    (xdc_Char)0x74,  /* [2967] */
    (xdc_Char)0x3a,  /* [2968] */
    (xdc_Char)0x20,  /* [2969] */
    (xdc_Char)0x62,  /* [2970] */
    (xdc_Char)0x61,  /* [2971] */
    (xdc_Char)0x64,  /* [2972] */
    (xdc_Char)0x20,  /* [2973] */
    (xdc_Char)0x63,  /* [2974] */
    (xdc_Char)0x61,  /* [2975] */
    (xdc_Char)0x6c,  /* [2976] */
    (xdc_Char)0x6c,  /* [2977] */
    (xdc_Char)0x69,  /* [2978] */
    (xdc_Char)0x6e,  /* [2979] */
    (xdc_Char)0x67,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x63,  /* [2982] */
    (xdc_Char)0x6f,  /* [2983] */
    (xdc_Char)0x6e,  /* [2984] */
    (xdc_Char)0x74,  /* [2985] */
    (xdc_Char)0x65,  /* [2986] */
    (xdc_Char)0x78,  /* [2987] */
    (xdc_Char)0x74,  /* [2988] */
    (xdc_Char)0x2e,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x53,  /* [2991] */
    (xdc_Char)0x65,  /* [2992] */
    (xdc_Char)0x65,  /* [2993] */
    (xdc_Char)0x20,  /* [2994] */
    (xdc_Char)0x47,  /* [2995] */
    (xdc_Char)0x61,  /* [2996] */
    (xdc_Char)0x74,  /* [2997] */
    (xdc_Char)0x65,  /* [2998] */
    (xdc_Char)0x53,  /* [2999] */
    (xdc_Char)0x70,  /* [3000] */
    (xdc_Char)0x69,  /* [3001] */
    (xdc_Char)0x6e,  /* [3002] */
    (xdc_Char)0x6c,  /* [3003] */
    (xdc_Char)0x6f,  /* [3004] */
    (xdc_Char)0x63,  /* [3005] */
    (xdc_Char)0x6b,  /* [3006] */
    (xdc_Char)0x20,  /* [3007] */
    (xdc_Char)0x41,  /* [3008] */
    (xdc_Char)0x50,  /* [3009] */
    (xdc_Char)0x49,  /* [3010] */
    (xdc_Char)0x20,  /* [3011] */
    (xdc_Char)0x64,  /* [3012] */
    (xdc_Char)0x6f,  /* [3013] */
    (xdc_Char)0x63,  /* [3014] */
    (xdc_Char)0x20,  /* [3015] */
    (xdc_Char)0x66,  /* [3016] */
    (xdc_Char)0x6f,  /* [3017] */
    (xdc_Char)0x72,  /* [3018] */
    (xdc_Char)0x20,  /* [3019] */
    (xdc_Char)0x64,  /* [3020] */
    (xdc_Char)0x65,  /* [3021] */
    (xdc_Char)0x74,  /* [3022] */
    (xdc_Char)0x61,  /* [3023] */
    (xdc_Char)0x69,  /* [3024] */
    (xdc_Char)0x6c,  /* [3025] */
    (xdc_Char)0x73,  /* [3026] */
    (xdc_Char)0x2e,  /* [3027] */
    (xdc_Char)0x0,  /* [3028] */
    (xdc_Char)0x41,  /* [3029] */
    (xdc_Char)0x5f,  /* [3030] */
    (xdc_Char)0x69,  /* [3031] */
    (xdc_Char)0x6e,  /* [3032] */
    (xdc_Char)0x76,  /* [3033] */
    (xdc_Char)0x61,  /* [3034] */
    (xdc_Char)0x6c,  /* [3035] */
    (xdc_Char)0x69,  /* [3036] */
    (xdc_Char)0x64,  /* [3037] */
    (xdc_Char)0x51,  /* [3038] */
    (xdc_Char)0x75,  /* [3039] */
    (xdc_Char)0x61,  /* [3040] */
    (xdc_Char)0x6c,  /* [3041] */
    (xdc_Char)0x69,  /* [3042] */
    (xdc_Char)0x74,  /* [3043] */
    (xdc_Char)0x79,  /* [3044] */
    (xdc_Char)0x3a,  /* [3045] */
    (xdc_Char)0x20,  /* [3046] */
    (xdc_Char)0x53,  /* [3047] */
    (xdc_Char)0x65,  /* [3048] */
    (xdc_Char)0x65,  /* [3049] */
    (xdc_Char)0x20,  /* [3050] */
    (xdc_Char)0x47,  /* [3051] */
    (xdc_Char)0x61,  /* [3052] */
    (xdc_Char)0x74,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x53,  /* [3055] */
    (xdc_Char)0x70,  /* [3056] */
    (xdc_Char)0x69,  /* [3057] */
    (xdc_Char)0x6e,  /* [3058] */
    (xdc_Char)0x6c,  /* [3059] */
    (xdc_Char)0x6f,  /* [3060] */
    (xdc_Char)0x63,  /* [3061] */
    (xdc_Char)0x6b,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x41,  /* [3064] */
    (xdc_Char)0x50,  /* [3065] */
    (xdc_Char)0x49,  /* [3066] */
    (xdc_Char)0x20,  /* [3067] */
    (xdc_Char)0x64,  /* [3068] */
    (xdc_Char)0x6f,  /* [3069] */
    (xdc_Char)0x63,  /* [3070] */
    (xdc_Char)0x20,  /* [3071] */
    (xdc_Char)0x66,  /* [3072] */
    (xdc_Char)0x6f,  /* [3073] */
    (xdc_Char)0x72,  /* [3074] */
    (xdc_Char)0x20,  /* [3075] */
    (xdc_Char)0x64,  /* [3076] */
    (xdc_Char)0x65,  /* [3077] */
    (xdc_Char)0x74,  /* [3078] */
    (xdc_Char)0x61,  /* [3079] */
    (xdc_Char)0x69,  /* [3080] */
    (xdc_Char)0x6c,  /* [3081] */
    (xdc_Char)0x73,  /* [3082] */
    (xdc_Char)0x2e,  /* [3083] */
    (xdc_Char)0x0,  /* [3084] */
    (xdc_Char)0x41,  /* [3085] */
    (xdc_Char)0x5f,  /* [3086] */
    (xdc_Char)0x75,  /* [3087] */
    (xdc_Char)0x6e,  /* [3088] */
    (xdc_Char)0x73,  /* [3089] */
    (xdc_Char)0x75,  /* [3090] */
    (xdc_Char)0x70,  /* [3091] */
    (xdc_Char)0x70,  /* [3092] */
    (xdc_Char)0x6f,  /* [3093] */
    (xdc_Char)0x72,  /* [3094] */
    (xdc_Char)0x74,  /* [3095] */
    (xdc_Char)0x65,  /* [3096] */
    (xdc_Char)0x64,  /* [3097] */
    (xdc_Char)0x4d,  /* [3098] */
    (xdc_Char)0x61,  /* [3099] */
    (xdc_Char)0x73,  /* [3100] */
    (xdc_Char)0x6b,  /* [3101] */
    (xdc_Char)0x69,  /* [3102] */
    (xdc_Char)0x6e,  /* [3103] */
    (xdc_Char)0x67,  /* [3104] */
    (xdc_Char)0x4f,  /* [3105] */
    (xdc_Char)0x70,  /* [3106] */
    (xdc_Char)0x74,  /* [3107] */
    (xdc_Char)0x69,  /* [3108] */
    (xdc_Char)0x6f,  /* [3109] */
    (xdc_Char)0x6e,  /* [3110] */
    (xdc_Char)0x3a,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x75,  /* [3113] */
    (xdc_Char)0x6e,  /* [3114] */
    (xdc_Char)0x73,  /* [3115] */
    (xdc_Char)0x75,  /* [3116] */
    (xdc_Char)0x70,  /* [3117] */
    (xdc_Char)0x70,  /* [3118] */
    (xdc_Char)0x6f,  /* [3119] */
    (xdc_Char)0x72,  /* [3120] */
    (xdc_Char)0x74,  /* [3121] */
    (xdc_Char)0x65,  /* [3122] */
    (xdc_Char)0x64,  /* [3123] */
    (xdc_Char)0x20,  /* [3124] */
    (xdc_Char)0x6d,  /* [3125] */
    (xdc_Char)0x61,  /* [3126] */
    (xdc_Char)0x73,  /* [3127] */
    (xdc_Char)0x6b,  /* [3128] */
    (xdc_Char)0x53,  /* [3129] */
    (xdc_Char)0x65,  /* [3130] */
    (xdc_Char)0x74,  /* [3131] */
    (xdc_Char)0x74,  /* [3132] */
    (xdc_Char)0x69,  /* [3133] */
    (xdc_Char)0x6e,  /* [3134] */
    (xdc_Char)0x67,  /* [3135] */
    (xdc_Char)0x2e,  /* [3136] */
    (xdc_Char)0x0,  /* [3137] */
    (xdc_Char)0x62,  /* [3138] */
    (xdc_Char)0x75,  /* [3139] */
    (xdc_Char)0x66,  /* [3140] */
    (xdc_Char)0x20,  /* [3141] */
    (xdc_Char)0x70,  /* [3142] */
    (xdc_Char)0x61,  /* [3143] */
    (xdc_Char)0x72,  /* [3144] */
    (xdc_Char)0x61,  /* [3145] */
    (xdc_Char)0x6d,  /* [3146] */
    (xdc_Char)0x65,  /* [3147] */
    (xdc_Char)0x74,  /* [3148] */
    (xdc_Char)0x65,  /* [3149] */
    (xdc_Char)0x72,  /* [3150] */
    (xdc_Char)0x20,  /* [3151] */
    (xdc_Char)0x63,  /* [3152] */
    (xdc_Char)0x61,  /* [3153] */
    (xdc_Char)0x6e,  /* [3154] */
    (xdc_Char)0x6e,  /* [3155] */
    (xdc_Char)0x6f,  /* [3156] */
    (xdc_Char)0x74,  /* [3157] */
    (xdc_Char)0x20,  /* [3158] */
    (xdc_Char)0x62,  /* [3159] */
    (xdc_Char)0x65,  /* [3160] */
    (xdc_Char)0x20,  /* [3161] */
    (xdc_Char)0x6e,  /* [3162] */
    (xdc_Char)0x75,  /* [3163] */
    (xdc_Char)0x6c,  /* [3164] */
    (xdc_Char)0x6c,  /* [3165] */
    (xdc_Char)0x0,  /* [3166] */
    (xdc_Char)0x62,  /* [3167] */
    (xdc_Char)0x75,  /* [3168] */
    (xdc_Char)0x66,  /* [3169] */
    (xdc_Char)0x20,  /* [3170] */
    (xdc_Char)0x6e,  /* [3171] */
    (xdc_Char)0x6f,  /* [3172] */
    (xdc_Char)0x74,  /* [3173] */
    (xdc_Char)0x20,  /* [3174] */
    (xdc_Char)0x70,  /* [3175] */
    (xdc_Char)0x72,  /* [3176] */
    (xdc_Char)0x6f,  /* [3177] */
    (xdc_Char)0x70,  /* [3178] */
    (xdc_Char)0x65,  /* [3179] */
    (xdc_Char)0x72,  /* [3180] */
    (xdc_Char)0x6c,  /* [3181] */
    (xdc_Char)0x79,  /* [3182] */
    (xdc_Char)0x20,  /* [3183] */
    (xdc_Char)0x61,  /* [3184] */
    (xdc_Char)0x6c,  /* [3185] */
    (xdc_Char)0x69,  /* [3186] */
    (xdc_Char)0x67,  /* [3187] */
    (xdc_Char)0x6e,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x64,  /* [3190] */
    (xdc_Char)0x0,  /* [3191] */
    (xdc_Char)0x61,  /* [3192] */
    (xdc_Char)0x6c,  /* [3193] */
    (xdc_Char)0x69,  /* [3194] */
    (xdc_Char)0x67,  /* [3195] */
    (xdc_Char)0x6e,  /* [3196] */
    (xdc_Char)0x20,  /* [3197] */
    (xdc_Char)0x70,  /* [3198] */
    (xdc_Char)0x61,  /* [3199] */
    (xdc_Char)0x72,  /* [3200] */
    (xdc_Char)0x61,  /* [3201] */
    (xdc_Char)0x6d,  /* [3202] */
    (xdc_Char)0x65,  /* [3203] */
    (xdc_Char)0x74,  /* [3204] */
    (xdc_Char)0x65,  /* [3205] */
    (xdc_Char)0x72,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x6d,  /* [3208] */
    (xdc_Char)0x75,  /* [3209] */
    (xdc_Char)0x73,  /* [3210] */
    (xdc_Char)0x74,  /* [3211] */
    (xdc_Char)0x20,  /* [3212] */
    (xdc_Char)0x62,  /* [3213] */
    (xdc_Char)0x65,  /* [3214] */
    (xdc_Char)0x20,  /* [3215] */
    (xdc_Char)0x30,  /* [3216] */
    (xdc_Char)0x20,  /* [3217] */
    (xdc_Char)0x6f,  /* [3218] */
    (xdc_Char)0x72,  /* [3219] */
    (xdc_Char)0x20,  /* [3220] */
    (xdc_Char)0x61,  /* [3221] */
    (xdc_Char)0x20,  /* [3222] */
    (xdc_Char)0x70,  /* [3223] */
    (xdc_Char)0x6f,  /* [3224] */
    (xdc_Char)0x77,  /* [3225] */
    (xdc_Char)0x65,  /* [3226] */
    (xdc_Char)0x72,  /* [3227] */
    (xdc_Char)0x20,  /* [3228] */
    (xdc_Char)0x6f,  /* [3229] */
    (xdc_Char)0x66,  /* [3230] */
    (xdc_Char)0x20,  /* [3231] */
    (xdc_Char)0x32,  /* [3232] */
    (xdc_Char)0x20,  /* [3233] */
    (xdc_Char)0x3e,  /* [3234] */
    (xdc_Char)0x3d,  /* [3235] */
    (xdc_Char)0x20,  /* [3236] */
    (xdc_Char)0x74,  /* [3237] */
    (xdc_Char)0x68,  /* [3238] */
    (xdc_Char)0x65,  /* [3239] */
    (xdc_Char)0x20,  /* [3240] */
    (xdc_Char)0x76,  /* [3241] */
    (xdc_Char)0x61,  /* [3242] */
    (xdc_Char)0x6c,  /* [3243] */
    (xdc_Char)0x75,  /* [3244] */
    (xdc_Char)0x65,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x6f,  /* [3247] */
    (xdc_Char)0x66,  /* [3248] */
    (xdc_Char)0x20,  /* [3249] */
    (xdc_Char)0x4d,  /* [3250] */
    (xdc_Char)0x65,  /* [3251] */
    (xdc_Char)0x6d,  /* [3252] */
    (xdc_Char)0x6f,  /* [3253] */
    (xdc_Char)0x72,  /* [3254] */
    (xdc_Char)0x79,  /* [3255] */
    (xdc_Char)0x5f,  /* [3256] */
    (xdc_Char)0x67,  /* [3257] */
    (xdc_Char)0x65,  /* [3258] */
    (xdc_Char)0x74,  /* [3259] */
    (xdc_Char)0x4d,  /* [3260] */
    (xdc_Char)0x61,  /* [3261] */
    (xdc_Char)0x78,  /* [3262] */
    (xdc_Char)0x44,  /* [3263] */
    (xdc_Char)0x65,  /* [3264] */
    (xdc_Char)0x66,  /* [3265] */
    (xdc_Char)0x61,  /* [3266] */
    (xdc_Char)0x75,  /* [3267] */
    (xdc_Char)0x6c,  /* [3268] */
    (xdc_Char)0x74,  /* [3269] */
    (xdc_Char)0x54,  /* [3270] */
    (xdc_Char)0x79,  /* [3271] */
    (xdc_Char)0x70,  /* [3272] */
    (xdc_Char)0x65,  /* [3273] */
    (xdc_Char)0x41,  /* [3274] */
    (xdc_Char)0x6c,  /* [3275] */
    (xdc_Char)0x69,  /* [3276] */
    (xdc_Char)0x67,  /* [3277] */
    (xdc_Char)0x6e,  /* [3278] */
    (xdc_Char)0x28,  /* [3279] */
    (xdc_Char)0x29,  /* [3280] */
    (xdc_Char)0x0,  /* [3281] */
    (xdc_Char)0x61,  /* [3282] */
    (xdc_Char)0x6c,  /* [3283] */
    (xdc_Char)0x69,  /* [3284] */
    (xdc_Char)0x67,  /* [3285] */
    (xdc_Char)0x6e,  /* [3286] */
    (xdc_Char)0x20,  /* [3287] */
    (xdc_Char)0x70,  /* [3288] */
    (xdc_Char)0x61,  /* [3289] */
    (xdc_Char)0x72,  /* [3290] */
    (xdc_Char)0x61,  /* [3291] */
    (xdc_Char)0x6d,  /* [3292] */
    (xdc_Char)0x65,  /* [3293] */
    (xdc_Char)0x74,  /* [3294] */
    (xdc_Char)0x65,  /* [3295] */
    (xdc_Char)0x72,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x31,  /* [3298] */
    (xdc_Char)0x29,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x6d,  /* [3301] */
    (xdc_Char)0x75,  /* [3302] */
    (xdc_Char)0x73,  /* [3303] */
    (xdc_Char)0x74,  /* [3304] */
    (xdc_Char)0x20,  /* [3305] */
    (xdc_Char)0x62,  /* [3306] */
    (xdc_Char)0x65,  /* [3307] */
    (xdc_Char)0x20,  /* [3308] */
    (xdc_Char)0x30,  /* [3309] */
    (xdc_Char)0x20,  /* [3310] */
    (xdc_Char)0x6f,  /* [3311] */
    (xdc_Char)0x72,  /* [3312] */
    (xdc_Char)0x20,  /* [3313] */
    (xdc_Char)0x61,  /* [3314] */
    (xdc_Char)0x20,  /* [3315] */
    (xdc_Char)0x70,  /* [3316] */
    (xdc_Char)0x6f,  /* [3317] */
    (xdc_Char)0x77,  /* [3318] */
    (xdc_Char)0x65,  /* [3319] */
    (xdc_Char)0x72,  /* [3320] */
    (xdc_Char)0x20,  /* [3321] */
    (xdc_Char)0x6f,  /* [3322] */
    (xdc_Char)0x66,  /* [3323] */
    (xdc_Char)0x20,  /* [3324] */
    (xdc_Char)0x32,  /* [3325] */
    (xdc_Char)0x20,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x6e,  /* [3328] */
    (xdc_Char)0x64,  /* [3329] */
    (xdc_Char)0x20,  /* [3330] */
    (xdc_Char)0x32,  /* [3331] */
    (xdc_Char)0x29,  /* [3332] */
    (xdc_Char)0x20,  /* [3333] */
    (xdc_Char)0x6e,  /* [3334] */
    (xdc_Char)0x6f,  /* [3335] */
    (xdc_Char)0x74,  /* [3336] */
    (xdc_Char)0x20,  /* [3337] */
    (xdc_Char)0x67,  /* [3338] */
    (xdc_Char)0x72,  /* [3339] */
    (xdc_Char)0x65,  /* [3340] */
    (xdc_Char)0x61,  /* [3341] */
    (xdc_Char)0x74,  /* [3342] */
    (xdc_Char)0x65,  /* [3343] */
    (xdc_Char)0x72,  /* [3344] */
    (xdc_Char)0x20,  /* [3345] */
    (xdc_Char)0x74,  /* [3346] */
    (xdc_Char)0x68,  /* [3347] */
    (xdc_Char)0x61,  /* [3348] */
    (xdc_Char)0x6e,  /* [3349] */
    (xdc_Char)0x20,  /* [3350] */
    (xdc_Char)0x74,  /* [3351] */
    (xdc_Char)0x68,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x68,  /* [3355] */
    (xdc_Char)0x65,  /* [3356] */
    (xdc_Char)0x61,  /* [3357] */
    (xdc_Char)0x70,  /* [3358] */
    (xdc_Char)0x73,  /* [3359] */
    (xdc_Char)0x20,  /* [3360] */
    (xdc_Char)0x61,  /* [3361] */
    (xdc_Char)0x6c,  /* [3362] */
    (xdc_Char)0x69,  /* [3363] */
    (xdc_Char)0x67,  /* [3364] */
    (xdc_Char)0x6e,  /* [3365] */
    (xdc_Char)0x6d,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x6e,  /* [3368] */
    (xdc_Char)0x74,  /* [3369] */
    (xdc_Char)0x0,  /* [3370] */
    (xdc_Char)0x62,  /* [3371] */
    (xdc_Char)0x6c,  /* [3372] */
    (xdc_Char)0x6f,  /* [3373] */
    (xdc_Char)0x63,  /* [3374] */
    (xdc_Char)0x6b,  /* [3375] */
    (xdc_Char)0x53,  /* [3376] */
    (xdc_Char)0x69,  /* [3377] */
    (xdc_Char)0x7a,  /* [3378] */
    (xdc_Char)0x65,  /* [3379] */
    (xdc_Char)0x20,  /* [3380] */
    (xdc_Char)0x6d,  /* [3381] */
    (xdc_Char)0x75,  /* [3382] */
    (xdc_Char)0x73,  /* [3383] */
    (xdc_Char)0x74,  /* [3384] */
    (xdc_Char)0x20,  /* [3385] */
    (xdc_Char)0x62,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x20,  /* [3388] */
    (xdc_Char)0x6c,  /* [3389] */
    (xdc_Char)0x61,  /* [3390] */
    (xdc_Char)0x72,  /* [3391] */
    (xdc_Char)0x67,  /* [3392] */
    (xdc_Char)0x65,  /* [3393] */
    (xdc_Char)0x20,  /* [3394] */
    (xdc_Char)0x65,  /* [3395] */
    (xdc_Char)0x6e,  /* [3396] */
    (xdc_Char)0x6f,  /* [3397] */
    (xdc_Char)0x75,  /* [3398] */
    (xdc_Char)0x67,  /* [3399] */
    (xdc_Char)0x68,  /* [3400] */
    (xdc_Char)0x20,  /* [3401] */
    (xdc_Char)0x74,  /* [3402] */
    (xdc_Char)0x6f,  /* [3403] */
    (xdc_Char)0x20,  /* [3404] */
    (xdc_Char)0x68,  /* [3405] */
    (xdc_Char)0x6f,  /* [3406] */
    (xdc_Char)0x6c,  /* [3407] */
    (xdc_Char)0x64,  /* [3408] */
    (xdc_Char)0x20,  /* [3409] */
    (xdc_Char)0x61,  /* [3410] */
    (xdc_Char)0x74,  /* [3411] */
    (xdc_Char)0x6c,  /* [3412] */
    (xdc_Char)0x65,  /* [3413] */
    (xdc_Char)0x61,  /* [3414] */
    (xdc_Char)0x73,  /* [3415] */
    (xdc_Char)0x74,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x74,  /* [3418] */
    (xdc_Char)0x77,  /* [3419] */
    (xdc_Char)0x6f,  /* [3420] */
    (xdc_Char)0x20,  /* [3421] */
    (xdc_Char)0x70,  /* [3422] */
    (xdc_Char)0x6f,  /* [3423] */
    (xdc_Char)0x69,  /* [3424] */
    (xdc_Char)0x6e,  /* [3425] */
    (xdc_Char)0x74,  /* [3426] */
    (xdc_Char)0x65,  /* [3427] */
    (xdc_Char)0x72,  /* [3428] */
    (xdc_Char)0x73,  /* [3429] */
    (xdc_Char)0x0,  /* [3430] */
    (xdc_Char)0x6e,  /* [3431] */
    (xdc_Char)0x75,  /* [3432] */
    (xdc_Char)0x6d,  /* [3433] */
    (xdc_Char)0x42,  /* [3434] */
    (xdc_Char)0x6c,  /* [3435] */
    (xdc_Char)0x6f,  /* [3436] */
    (xdc_Char)0x63,  /* [3437] */
    (xdc_Char)0x6b,  /* [3438] */
    (xdc_Char)0x73,  /* [3439] */
    (xdc_Char)0x20,  /* [3440] */
    (xdc_Char)0x63,  /* [3441] */
    (xdc_Char)0x61,  /* [3442] */
    (xdc_Char)0x6e,  /* [3443] */
    (xdc_Char)0x6e,  /* [3444] */
    (xdc_Char)0x6f,  /* [3445] */
    (xdc_Char)0x74,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x62,  /* [3448] */
    (xdc_Char)0x65,  /* [3449] */
    (xdc_Char)0x20,  /* [3450] */
    (xdc_Char)0x7a,  /* [3451] */
    (xdc_Char)0x65,  /* [3452] */
    (xdc_Char)0x72,  /* [3453] */
    (xdc_Char)0x6f,  /* [3454] */
    (xdc_Char)0x0,  /* [3455] */
    (xdc_Char)0x62,  /* [3456] */
    (xdc_Char)0x75,  /* [3457] */
    (xdc_Char)0x66,  /* [3458] */
    (xdc_Char)0x53,  /* [3459] */
    (xdc_Char)0x69,  /* [3460] */
    (xdc_Char)0x7a,  /* [3461] */
    (xdc_Char)0x65,  /* [3462] */
    (xdc_Char)0x20,  /* [3463] */
    (xdc_Char)0x63,  /* [3464] */
    (xdc_Char)0x61,  /* [3465] */
    (xdc_Char)0x6e,  /* [3466] */
    (xdc_Char)0x6e,  /* [3467] */
    (xdc_Char)0x6f,  /* [3468] */
    (xdc_Char)0x74,  /* [3469] */
    (xdc_Char)0x20,  /* [3470] */
    (xdc_Char)0x62,  /* [3471] */
    (xdc_Char)0x65,  /* [3472] */
    (xdc_Char)0x20,  /* [3473] */
    (xdc_Char)0x7a,  /* [3474] */
    (xdc_Char)0x65,  /* [3475] */
    (xdc_Char)0x72,  /* [3476] */
    (xdc_Char)0x6f,  /* [3477] */
    (xdc_Char)0x0,  /* [3478] */
    (xdc_Char)0x48,  /* [3479] */
    (xdc_Char)0x65,  /* [3480] */
    (xdc_Char)0x61,  /* [3481] */
    (xdc_Char)0x70,  /* [3482] */
    (xdc_Char)0x42,  /* [3483] */
    (xdc_Char)0x75,  /* [3484] */
    (xdc_Char)0x66,  /* [3485] */
    (xdc_Char)0x5f,  /* [3486] */
    (xdc_Char)0x63,  /* [3487] */
    (xdc_Char)0x72,  /* [3488] */
    (xdc_Char)0x65,  /* [3489] */
    (xdc_Char)0x61,  /* [3490] */
    (xdc_Char)0x74,  /* [3491] */
    (xdc_Char)0x65,  /* [3492] */
    (xdc_Char)0x27,  /* [3493] */
    (xdc_Char)0x73,  /* [3494] */
    (xdc_Char)0x20,  /* [3495] */
    (xdc_Char)0x62,  /* [3496] */
    (xdc_Char)0x75,  /* [3497] */
    (xdc_Char)0x66,  /* [3498] */
    (xdc_Char)0x53,  /* [3499] */
    (xdc_Char)0x69,  /* [3500] */
    (xdc_Char)0x7a,  /* [3501] */
    (xdc_Char)0x65,  /* [3502] */
    (xdc_Char)0x20,  /* [3503] */
    (xdc_Char)0x70,  /* [3504] */
    (xdc_Char)0x61,  /* [3505] */
    (xdc_Char)0x72,  /* [3506] */
    (xdc_Char)0x61,  /* [3507] */
    (xdc_Char)0x6d,  /* [3508] */
    (xdc_Char)0x65,  /* [3509] */
    (xdc_Char)0x74,  /* [3510] */
    (xdc_Char)0x65,  /* [3511] */
    (xdc_Char)0x72,  /* [3512] */
    (xdc_Char)0x20,  /* [3513] */
    (xdc_Char)0x69,  /* [3514] */
    (xdc_Char)0x73,  /* [3515] */
    (xdc_Char)0x20,  /* [3516] */
    (xdc_Char)0x69,  /* [3517] */
    (xdc_Char)0x6e,  /* [3518] */
    (xdc_Char)0x76,  /* [3519] */
    (xdc_Char)0x61,  /* [3520] */
    (xdc_Char)0x6c,  /* [3521] */
    (xdc_Char)0x69,  /* [3522] */
    (xdc_Char)0x64,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x28,  /* [3525] */
    (xdc_Char)0x74,  /* [3526] */
    (xdc_Char)0x6f,  /* [3527] */
    (xdc_Char)0x6f,  /* [3528] */
    (xdc_Char)0x20,  /* [3529] */
    (xdc_Char)0x73,  /* [3530] */
    (xdc_Char)0x6d,  /* [3531] */
    (xdc_Char)0x61,  /* [3532] */
    (xdc_Char)0x6c,  /* [3533] */
    (xdc_Char)0x6c,  /* [3534] */
    (xdc_Char)0x29,  /* [3535] */
    (xdc_Char)0x0,  /* [3536] */
    (xdc_Char)0x43,  /* [3537] */
    (xdc_Char)0x61,  /* [3538] */
    (xdc_Char)0x6e,  /* [3539] */
    (xdc_Char)0x6e,  /* [3540] */
    (xdc_Char)0x6f,  /* [3541] */
    (xdc_Char)0x74,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x63,  /* [3544] */
    (xdc_Char)0x61,  /* [3545] */
    (xdc_Char)0x6c,  /* [3546] */
    (xdc_Char)0x6c,  /* [3547] */
    (xdc_Char)0x20,  /* [3548] */
    (xdc_Char)0x48,  /* [3549] */
    (xdc_Char)0x65,  /* [3550] */
    (xdc_Char)0x61,  /* [3551] */
    (xdc_Char)0x70,  /* [3552] */
    (xdc_Char)0x42,  /* [3553] */
    (xdc_Char)0x75,  /* [3554] */
    (xdc_Char)0x66,  /* [3555] */
    (xdc_Char)0x5f,  /* [3556] */
    (xdc_Char)0x66,  /* [3557] */
    (xdc_Char)0x72,  /* [3558] */
    (xdc_Char)0x65,  /* [3559] */
    (xdc_Char)0x65,  /* [3560] */
    (xdc_Char)0x20,  /* [3561] */
    (xdc_Char)0x77,  /* [3562] */
    (xdc_Char)0x68,  /* [3563] */
    (xdc_Char)0x65,  /* [3564] */
    (xdc_Char)0x6e,  /* [3565] */
    (xdc_Char)0x20,  /* [3566] */
    (xdc_Char)0x6e,  /* [3567] */
    (xdc_Char)0x6f,  /* [3568] */
    (xdc_Char)0x20,  /* [3569] */
    (xdc_Char)0x62,  /* [3570] */
    (xdc_Char)0x6c,  /* [3571] */
    (xdc_Char)0x6f,  /* [3572] */
    (xdc_Char)0x63,  /* [3573] */
    (xdc_Char)0x6b,  /* [3574] */
    (xdc_Char)0x73,  /* [3575] */
    (xdc_Char)0x20,  /* [3576] */
    (xdc_Char)0x68,  /* [3577] */
    (xdc_Char)0x61,  /* [3578] */
    (xdc_Char)0x76,  /* [3579] */
    (xdc_Char)0x65,  /* [3580] */
    (xdc_Char)0x20,  /* [3581] */
    (xdc_Char)0x62,  /* [3582] */
    (xdc_Char)0x65,  /* [3583] */
    (xdc_Char)0x65,  /* [3584] */
    (xdc_Char)0x6e,  /* [3585] */
    (xdc_Char)0x20,  /* [3586] */
    (xdc_Char)0x61,  /* [3587] */
    (xdc_Char)0x6c,  /* [3588] */
    (xdc_Char)0x6c,  /* [3589] */
    (xdc_Char)0x6f,  /* [3590] */
    (xdc_Char)0x63,  /* [3591] */
    (xdc_Char)0x61,  /* [3592] */
    (xdc_Char)0x74,  /* [3593] */
    (xdc_Char)0x65,  /* [3594] */
    (xdc_Char)0x64,  /* [3595] */
    (xdc_Char)0x0,  /* [3596] */
    (xdc_Char)0x41,  /* [3597] */
    (xdc_Char)0x5f,  /* [3598] */
    (xdc_Char)0x69,  /* [3599] */
    (xdc_Char)0x6e,  /* [3600] */
    (xdc_Char)0x76,  /* [3601] */
    (xdc_Char)0x61,  /* [3602] */
    (xdc_Char)0x6c,  /* [3603] */
    (xdc_Char)0x69,  /* [3604] */
    (xdc_Char)0x64,  /* [3605] */
    (xdc_Char)0x46,  /* [3606] */
    (xdc_Char)0x72,  /* [3607] */
    (xdc_Char)0x65,  /* [3608] */
    (xdc_Char)0x65,  /* [3609] */
    (xdc_Char)0x3a,  /* [3610] */
    (xdc_Char)0x20,  /* [3611] */
    (xdc_Char)0x49,  /* [3612] */
    (xdc_Char)0x6e,  /* [3613] */
    (xdc_Char)0x76,  /* [3614] */
    (xdc_Char)0x61,  /* [3615] */
    (xdc_Char)0x6c,  /* [3616] */
    (xdc_Char)0x69,  /* [3617] */
    (xdc_Char)0x64,  /* [3618] */
    (xdc_Char)0x20,  /* [3619] */
    (xdc_Char)0x66,  /* [3620] */
    (xdc_Char)0x72,  /* [3621] */
    (xdc_Char)0x65,  /* [3622] */
    (xdc_Char)0x65,  /* [3623] */
    (xdc_Char)0x0,  /* [3624] */
    (xdc_Char)0x41,  /* [3625] */
    (xdc_Char)0x5f,  /* [3626] */
    (xdc_Char)0x7a,  /* [3627] */
    (xdc_Char)0x65,  /* [3628] */
    (xdc_Char)0x72,  /* [3629] */
    (xdc_Char)0x6f,  /* [3630] */
    (xdc_Char)0x42,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x6f,  /* [3633] */
    (xdc_Char)0x63,  /* [3634] */
    (xdc_Char)0x6b,  /* [3635] */
    (xdc_Char)0x3a,  /* [3636] */
    (xdc_Char)0x20,  /* [3637] */
    (xdc_Char)0x43,  /* [3638] */
    (xdc_Char)0x61,  /* [3639] */
    (xdc_Char)0x6e,  /* [3640] */
    (xdc_Char)0x6e,  /* [3641] */
    (xdc_Char)0x6f,  /* [3642] */
    (xdc_Char)0x74,  /* [3643] */
    (xdc_Char)0x20,  /* [3644] */
    (xdc_Char)0x61,  /* [3645] */
    (xdc_Char)0x6c,  /* [3646] */
    (xdc_Char)0x6c,  /* [3647] */
    (xdc_Char)0x6f,  /* [3648] */
    (xdc_Char)0x63,  /* [3649] */
    (xdc_Char)0x61,  /* [3650] */
    (xdc_Char)0x74,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x20,  /* [3653] */
    (xdc_Char)0x73,  /* [3654] */
    (xdc_Char)0x69,  /* [3655] */
    (xdc_Char)0x7a,  /* [3656] */
    (xdc_Char)0x65,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x30,  /* [3659] */
    (xdc_Char)0x0,  /* [3660] */
    (xdc_Char)0x41,  /* [3661] */
    (xdc_Char)0x5f,  /* [3662] */
    (xdc_Char)0x68,  /* [3663] */
    (xdc_Char)0x65,  /* [3664] */
    (xdc_Char)0x61,  /* [3665] */
    (xdc_Char)0x70,  /* [3666] */
    (xdc_Char)0x53,  /* [3667] */
    (xdc_Char)0x69,  /* [3668] */
    (xdc_Char)0x7a,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x3a,  /* [3671] */
    (xdc_Char)0x20,  /* [3672] */
    (xdc_Char)0x52,  /* [3673] */
    (xdc_Char)0x65,  /* [3674] */
    (xdc_Char)0x71,  /* [3675] */
    (xdc_Char)0x75,  /* [3676] */
    (xdc_Char)0x65,  /* [3677] */
    (xdc_Char)0x73,  /* [3678] */
    (xdc_Char)0x74,  /* [3679] */
    (xdc_Char)0x65,  /* [3680] */
    (xdc_Char)0x64,  /* [3681] */
    (xdc_Char)0x20,  /* [3682] */
    (xdc_Char)0x68,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x61,  /* [3685] */
    (xdc_Char)0x70,  /* [3686] */
    (xdc_Char)0x20,  /* [3687] */
    (xdc_Char)0x73,  /* [3688] */
    (xdc_Char)0x69,  /* [3689] */
    (xdc_Char)0x7a,  /* [3690] */
    (xdc_Char)0x65,  /* [3691] */
    (xdc_Char)0x20,  /* [3692] */
    (xdc_Char)0x69,  /* [3693] */
    (xdc_Char)0x73,  /* [3694] */
    (xdc_Char)0x20,  /* [3695] */
    (xdc_Char)0x74,  /* [3696] */
    (xdc_Char)0x6f,  /* [3697] */
    (xdc_Char)0x6f,  /* [3698] */
    (xdc_Char)0x20,  /* [3699] */
    (xdc_Char)0x73,  /* [3700] */
    (xdc_Char)0x6d,  /* [3701] */
    (xdc_Char)0x61,  /* [3702] */
    (xdc_Char)0x6c,  /* [3703] */
    (xdc_Char)0x6c,  /* [3704] */
    (xdc_Char)0x0,  /* [3705] */
    (xdc_Char)0x41,  /* [3706] */
    (xdc_Char)0x5f,  /* [3707] */
    (xdc_Char)0x61,  /* [3708] */
    (xdc_Char)0x6c,  /* [3709] */
    (xdc_Char)0x69,  /* [3710] */
    (xdc_Char)0x67,  /* [3711] */
    (xdc_Char)0x6e,  /* [3712] */
    (xdc_Char)0x3a,  /* [3713] */
    (xdc_Char)0x20,  /* [3714] */
    (xdc_Char)0x52,  /* [3715] */
    (xdc_Char)0x65,  /* [3716] */
    (xdc_Char)0x71,  /* [3717] */
    (xdc_Char)0x75,  /* [3718] */
    (xdc_Char)0x65,  /* [3719] */
    (xdc_Char)0x73,  /* [3720] */
    (xdc_Char)0x74,  /* [3721] */
    (xdc_Char)0x65,  /* [3722] */
    (xdc_Char)0x64,  /* [3723] */
    (xdc_Char)0x20,  /* [3724] */
    (xdc_Char)0x61,  /* [3725] */
    (xdc_Char)0x6c,  /* [3726] */
    (xdc_Char)0x69,  /* [3727] */
    (xdc_Char)0x67,  /* [3728] */
    (xdc_Char)0x6e,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x69,  /* [3731] */
    (xdc_Char)0x73,  /* [3732] */
    (xdc_Char)0x20,  /* [3733] */
    (xdc_Char)0x6e,  /* [3734] */
    (xdc_Char)0x6f,  /* [3735] */
    (xdc_Char)0x74,  /* [3736] */
    (xdc_Char)0x20,  /* [3737] */
    (xdc_Char)0x61,  /* [3738] */
    (xdc_Char)0x20,  /* [3739] */
    (xdc_Char)0x70,  /* [3740] */
    (xdc_Char)0x6f,  /* [3741] */
    (xdc_Char)0x77,  /* [3742] */
    (xdc_Char)0x65,  /* [3743] */
    (xdc_Char)0x72,  /* [3744] */
    (xdc_Char)0x20,  /* [3745] */
    (xdc_Char)0x6f,  /* [3746] */
    (xdc_Char)0x66,  /* [3747] */
    (xdc_Char)0x20,  /* [3748] */
    (xdc_Char)0x32,  /* [3749] */
    (xdc_Char)0x0,  /* [3750] */
    (xdc_Char)0x49,  /* [3751] */
    (xdc_Char)0x6e,  /* [3752] */
    (xdc_Char)0x76,  /* [3753] */
    (xdc_Char)0x61,  /* [3754] */
    (xdc_Char)0x6c,  /* [3755] */
    (xdc_Char)0x69,  /* [3756] */
    (xdc_Char)0x64,  /* [3757] */
    (xdc_Char)0x20,  /* [3758] */
    (xdc_Char)0x62,  /* [3759] */
    (xdc_Char)0x6c,  /* [3760] */
    (xdc_Char)0x6f,  /* [3761] */
    (xdc_Char)0x63,  /* [3762] */
    (xdc_Char)0x6b,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x61,  /* [3765] */
    (xdc_Char)0x64,  /* [3766] */
    (xdc_Char)0x64,  /* [3767] */
    (xdc_Char)0x72,  /* [3768] */
    (xdc_Char)0x65,  /* [3769] */
    (xdc_Char)0x73,  /* [3770] */
    (xdc_Char)0x73,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x6f,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x74,  /* [3776] */
    (xdc_Char)0x68,  /* [3777] */
    (xdc_Char)0x65,  /* [3778] */
    (xdc_Char)0x20,  /* [3779] */
    (xdc_Char)0x66,  /* [3780] */
    (xdc_Char)0x72,  /* [3781] */
    (xdc_Char)0x65,  /* [3782] */
    (xdc_Char)0x65,  /* [3783] */
    (xdc_Char)0x2e,  /* [3784] */
    (xdc_Char)0x20,  /* [3785] */
    (xdc_Char)0x46,  /* [3786] */
    (xdc_Char)0x61,  /* [3787] */
    (xdc_Char)0x69,  /* [3788] */
    (xdc_Char)0x6c,  /* [3789] */
    (xdc_Char)0x65,  /* [3790] */
    (xdc_Char)0x64,  /* [3791] */
    (xdc_Char)0x20,  /* [3792] */
    (xdc_Char)0x74,  /* [3793] */
    (xdc_Char)0x6f,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x66,  /* [3796] */
    (xdc_Char)0x72,  /* [3797] */
    (xdc_Char)0x65,  /* [3798] */
    (xdc_Char)0x65,  /* [3799] */
    (xdc_Char)0x20,  /* [3800] */
    (xdc_Char)0x62,  /* [3801] */
    (xdc_Char)0x6c,  /* [3802] */
    (xdc_Char)0x6f,  /* [3803] */
    (xdc_Char)0x63,  /* [3804] */
    (xdc_Char)0x6b,  /* [3805] */
    (xdc_Char)0x20,  /* [3806] */
    (xdc_Char)0x62,  /* [3807] */
    (xdc_Char)0x61,  /* [3808] */
    (xdc_Char)0x63,  /* [3809] */
    (xdc_Char)0x6b,  /* [3810] */
    (xdc_Char)0x20,  /* [3811] */
    (xdc_Char)0x74,  /* [3812] */
    (xdc_Char)0x6f,  /* [3813] */
    (xdc_Char)0x20,  /* [3814] */
    (xdc_Char)0x68,  /* [3815] */
    (xdc_Char)0x65,  /* [3816] */
    (xdc_Char)0x61,  /* [3817] */
    (xdc_Char)0x70,  /* [3818] */
    (xdc_Char)0x2e,  /* [3819] */
    (xdc_Char)0x0,  /* [3820] */
    (xdc_Char)0x41,  /* [3821] */
    (xdc_Char)0x5f,  /* [3822] */
    (xdc_Char)0x64,  /* [3823] */
    (xdc_Char)0x6f,  /* [3824] */
    (xdc_Char)0x75,  /* [3825] */
    (xdc_Char)0x62,  /* [3826] */
    (xdc_Char)0x6c,  /* [3827] */
    (xdc_Char)0x65,  /* [3828] */
    (xdc_Char)0x46,  /* [3829] */
    (xdc_Char)0x72,  /* [3830] */
    (xdc_Char)0x65,  /* [3831] */
    (xdc_Char)0x65,  /* [3832] */
    (xdc_Char)0x3a,  /* [3833] */
    (xdc_Char)0x20,  /* [3834] */
    (xdc_Char)0x42,  /* [3835] */
    (xdc_Char)0x75,  /* [3836] */
    (xdc_Char)0x66,  /* [3837] */
    (xdc_Char)0x66,  /* [3838] */
    (xdc_Char)0x65,  /* [3839] */
    (xdc_Char)0x72,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x61,  /* [3842] */
    (xdc_Char)0x6c,  /* [3843] */
    (xdc_Char)0x72,  /* [3844] */
    (xdc_Char)0x65,  /* [3845] */
    (xdc_Char)0x61,  /* [3846] */
    (xdc_Char)0x64,  /* [3847] */
    (xdc_Char)0x79,  /* [3848] */
    (xdc_Char)0x20,  /* [3849] */
    (xdc_Char)0x66,  /* [3850] */
    (xdc_Char)0x72,  /* [3851] */
    (xdc_Char)0x65,  /* [3852] */
    (xdc_Char)0x65,  /* [3853] */
    (xdc_Char)0x0,  /* [3854] */
    (xdc_Char)0x41,  /* [3855] */
    (xdc_Char)0x5f,  /* [3856] */
    (xdc_Char)0x62,  /* [3857] */
    (xdc_Char)0x75,  /* [3858] */
    (xdc_Char)0x66,  /* [3859] */
    (xdc_Char)0x4f,  /* [3860] */
    (xdc_Char)0x76,  /* [3861] */
    (xdc_Char)0x65,  /* [3862] */
    (xdc_Char)0x72,  /* [3863] */
    (xdc_Char)0x66,  /* [3864] */
    (xdc_Char)0x6c,  /* [3865] */
    (xdc_Char)0x6f,  /* [3866] */
    (xdc_Char)0x77,  /* [3867] */
    (xdc_Char)0x3a,  /* [3868] */
    (xdc_Char)0x20,  /* [3869] */
    (xdc_Char)0x42,  /* [3870] */
    (xdc_Char)0x75,  /* [3871] */
    (xdc_Char)0x66,  /* [3872] */
    (xdc_Char)0x66,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x72,  /* [3875] */
    (xdc_Char)0x20,  /* [3876] */
    (xdc_Char)0x6f,  /* [3877] */
    (xdc_Char)0x76,  /* [3878] */
    (xdc_Char)0x65,  /* [3879] */
    (xdc_Char)0x72,  /* [3880] */
    (xdc_Char)0x66,  /* [3881] */
    (xdc_Char)0x6c,  /* [3882] */
    (xdc_Char)0x6f,  /* [3883] */
    (xdc_Char)0x77,  /* [3884] */
    (xdc_Char)0x0,  /* [3885] */
    (xdc_Char)0x41,  /* [3886] */
    (xdc_Char)0x5f,  /* [3887] */
    (xdc_Char)0x6e,  /* [3888] */
    (xdc_Char)0x6f,  /* [3889] */
    (xdc_Char)0x74,  /* [3890] */
    (xdc_Char)0x45,  /* [3891] */
    (xdc_Char)0x6d,  /* [3892] */
    (xdc_Char)0x70,  /* [3893] */
    (xdc_Char)0x74,  /* [3894] */
    (xdc_Char)0x79,  /* [3895] */
    (xdc_Char)0x3a,  /* [3896] */
    (xdc_Char)0x20,  /* [3897] */
    (xdc_Char)0x48,  /* [3898] */
    (xdc_Char)0x65,  /* [3899] */
    (xdc_Char)0x61,  /* [3900] */
    (xdc_Char)0x70,  /* [3901] */
    (xdc_Char)0x20,  /* [3902] */
    (xdc_Char)0x6e,  /* [3903] */
    (xdc_Char)0x6f,  /* [3904] */
    (xdc_Char)0x74,  /* [3905] */
    (xdc_Char)0x20,  /* [3906] */
    (xdc_Char)0x65,  /* [3907] */
    (xdc_Char)0x6d,  /* [3908] */
    (xdc_Char)0x70,  /* [3909] */
    (xdc_Char)0x74,  /* [3910] */
    (xdc_Char)0x79,  /* [3911] */
    (xdc_Char)0x0,  /* [3912] */
    (xdc_Char)0x41,  /* [3913] */
    (xdc_Char)0x5f,  /* [3914] */
    (xdc_Char)0x6e,  /* [3915] */
    (xdc_Char)0x75,  /* [3916] */
    (xdc_Char)0x6c,  /* [3917] */
    (xdc_Char)0x6c,  /* [3918] */
    (xdc_Char)0x4f,  /* [3919] */
    (xdc_Char)0x62,  /* [3920] */
    (xdc_Char)0x6a,  /* [3921] */
    (xdc_Char)0x65,  /* [3922] */
    (xdc_Char)0x63,  /* [3923] */
    (xdc_Char)0x74,  /* [3924] */
    (xdc_Char)0x3a,  /* [3925] */
    (xdc_Char)0x20,  /* [3926] */
    (xdc_Char)0x48,  /* [3927] */
    (xdc_Char)0x65,  /* [3928] */
    (xdc_Char)0x61,  /* [3929] */
    (xdc_Char)0x70,  /* [3930] */
    (xdc_Char)0x54,  /* [3931] */
    (xdc_Char)0x72,  /* [3932] */
    (xdc_Char)0x61,  /* [3933] */
    (xdc_Char)0x63,  /* [3934] */
    (xdc_Char)0x6b,  /* [3935] */
    (xdc_Char)0x5f,  /* [3936] */
    (xdc_Char)0x70,  /* [3937] */
    (xdc_Char)0x72,  /* [3938] */
    (xdc_Char)0x69,  /* [3939] */
    (xdc_Char)0x6e,  /* [3940] */
    (xdc_Char)0x74,  /* [3941] */
    (xdc_Char)0x48,  /* [3942] */
    (xdc_Char)0x65,  /* [3943] */
    (xdc_Char)0x61,  /* [3944] */
    (xdc_Char)0x70,  /* [3945] */
    (xdc_Char)0x20,  /* [3946] */
    (xdc_Char)0x63,  /* [3947] */
    (xdc_Char)0x61,  /* [3948] */
    (xdc_Char)0x6c,  /* [3949] */
    (xdc_Char)0x6c,  /* [3950] */
    (xdc_Char)0x65,  /* [3951] */
    (xdc_Char)0x64,  /* [3952] */
    (xdc_Char)0x20,  /* [3953] */
    (xdc_Char)0x77,  /* [3954] */
    (xdc_Char)0x69,  /* [3955] */
    (xdc_Char)0x74,  /* [3956] */
    (xdc_Char)0x68,  /* [3957] */
    (xdc_Char)0x20,  /* [3958] */
    (xdc_Char)0x6e,  /* [3959] */
    (xdc_Char)0x75,  /* [3960] */
    (xdc_Char)0x6c,  /* [3961] */
    (xdc_Char)0x6c,  /* [3962] */
    (xdc_Char)0x20,  /* [3963] */
    (xdc_Char)0x6f,  /* [3964] */
    (xdc_Char)0x62,  /* [3965] */
    (xdc_Char)0x6a,  /* [3966] */
    (xdc_Char)0x0,  /* [3967] */
    (xdc_Char)0x61,  /* [3968] */
    (xdc_Char)0x73,  /* [3969] */
    (xdc_Char)0x73,  /* [3970] */
    (xdc_Char)0x65,  /* [3971] */
    (xdc_Char)0x72,  /* [3972] */
    (xdc_Char)0x74,  /* [3973] */
    (xdc_Char)0x69,  /* [3974] */
    (xdc_Char)0x6f,  /* [3975] */
    (xdc_Char)0x6e,  /* [3976] */
    (xdc_Char)0x20,  /* [3977] */
    (xdc_Char)0x66,  /* [3978] */
    (xdc_Char)0x61,  /* [3979] */
    (xdc_Char)0x69,  /* [3980] */
    (xdc_Char)0x6c,  /* [3981] */
    (xdc_Char)0x75,  /* [3982] */
    (xdc_Char)0x72,  /* [3983] */
    (xdc_Char)0x65,  /* [3984] */
    (xdc_Char)0x25,  /* [3985] */
    (xdc_Char)0x73,  /* [3986] */
    (xdc_Char)0x25,  /* [3987] */
    (xdc_Char)0x73,  /* [3988] */
    (xdc_Char)0x0,  /* [3989] */
    (xdc_Char)0x25,  /* [3990] */
    (xdc_Char)0x24,  /* [3991] */
    (xdc_Char)0x53,  /* [3992] */
    (xdc_Char)0x0,  /* [3993] */
    (xdc_Char)0x6f,  /* [3994] */
    (xdc_Char)0x75,  /* [3995] */
    (xdc_Char)0x74,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x6f,  /* [3998] */
    (xdc_Char)0x66,  /* [3999] */
    (xdc_Char)0x20,  /* [4000] */
    (xdc_Char)0x6d,  /* [4001] */
    (xdc_Char)0x65,  /* [4002] */
    (xdc_Char)0x6d,  /* [4003] */
    (xdc_Char)0x6f,  /* [4004] */
    (xdc_Char)0x72,  /* [4005] */
    (xdc_Char)0x79,  /* [4006] */
    (xdc_Char)0x3a,  /* [4007] */
    (xdc_Char)0x20,  /* [4008] */
    (xdc_Char)0x68,  /* [4009] */
    (xdc_Char)0x65,  /* [4010] */
    (xdc_Char)0x61,  /* [4011] */
    (xdc_Char)0x70,  /* [4012] */
    (xdc_Char)0x3d,  /* [4013] */
    (xdc_Char)0x30,  /* [4014] */
    (xdc_Char)0x78,  /* [4015] */
    (xdc_Char)0x25,  /* [4016] */
    (xdc_Char)0x78,  /* [4017] */
    (xdc_Char)0x2c,  /* [4018] */
    (xdc_Char)0x20,  /* [4019] */
    (xdc_Char)0x73,  /* [4020] */
    (xdc_Char)0x69,  /* [4021] */
    (xdc_Char)0x7a,  /* [4022] */
    (xdc_Char)0x65,  /* [4023] */
    (xdc_Char)0x3d,  /* [4024] */
    (xdc_Char)0x25,  /* [4025] */
    (xdc_Char)0x75,  /* [4026] */
    (xdc_Char)0x0,  /* [4027] */
    (xdc_Char)0x25,  /* [4028] */
    (xdc_Char)0x73,  /* [4029] */
    (xdc_Char)0x20,  /* [4030] */
    (xdc_Char)0x30,  /* [4031] */
    (xdc_Char)0x78,  /* [4032] */
    (xdc_Char)0x25,  /* [4033] */
    (xdc_Char)0x78,  /* [4034] */
    (xdc_Char)0x0,  /* [4035] */
    (xdc_Char)0x45,  /* [4036] */
    (xdc_Char)0x5f,  /* [4037] */
    (xdc_Char)0x62,  /* [4038] */
    (xdc_Char)0x61,  /* [4039] */
    (xdc_Char)0x64,  /* [4040] */
    (xdc_Char)0x4c,  /* [4041] */
    (xdc_Char)0x65,  /* [4042] */
    (xdc_Char)0x76,  /* [4043] */
    (xdc_Char)0x65,  /* [4044] */
    (xdc_Char)0x6c,  /* [4045] */
    (xdc_Char)0x3a,  /* [4046] */
    (xdc_Char)0x20,  /* [4047] */
    (xdc_Char)0x42,  /* [4048] */
    (xdc_Char)0x61,  /* [4049] */
    (xdc_Char)0x64,  /* [4050] */
    (xdc_Char)0x20,  /* [4051] */
    (xdc_Char)0x66,  /* [4052] */
    (xdc_Char)0x69,  /* [4053] */
    (xdc_Char)0x6c,  /* [4054] */
    (xdc_Char)0x74,  /* [4055] */
    (xdc_Char)0x65,  /* [4056] */
    (xdc_Char)0x72,  /* [4057] */
    (xdc_Char)0x20,  /* [4058] */
    (xdc_Char)0x6c,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x76,  /* [4061] */
    (xdc_Char)0x65,  /* [4062] */
    (xdc_Char)0x6c,  /* [4063] */
    (xdc_Char)0x20,  /* [4064] */
    (xdc_Char)0x76,  /* [4065] */
    (xdc_Char)0x61,  /* [4066] */
    (xdc_Char)0x6c,  /* [4067] */
    (xdc_Char)0x75,  /* [4068] */
    (xdc_Char)0x65,  /* [4069] */
    (xdc_Char)0x3a,  /* [4070] */
    (xdc_Char)0x20,  /* [4071] */
    (xdc_Char)0x25,  /* [4072] */
    (xdc_Char)0x64,  /* [4073] */
    (xdc_Char)0x0,  /* [4074] */
    (xdc_Char)0x66,  /* [4075] */
    (xdc_Char)0x72,  /* [4076] */
    (xdc_Char)0x65,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x28,  /* [4079] */
    (xdc_Char)0x29,  /* [4080] */
    (xdc_Char)0x20,  /* [4081] */
    (xdc_Char)0x69,  /* [4082] */
    (xdc_Char)0x6e,  /* [4083] */
    (xdc_Char)0x76,  /* [4084] */
    (xdc_Char)0x61,  /* [4085] */
    (xdc_Char)0x6c,  /* [4086] */
    (xdc_Char)0x69,  /* [4087] */
    (xdc_Char)0x64,  /* [4088] */
    (xdc_Char)0x20,  /* [4089] */
    (xdc_Char)0x69,  /* [4090] */
    (xdc_Char)0x6e,  /* [4091] */
    (xdc_Char)0x20,  /* [4092] */
    (xdc_Char)0x67,  /* [4093] */
    (xdc_Char)0x72,  /* [4094] */
    (xdc_Char)0x6f,  /* [4095] */
    (xdc_Char)0x77,  /* [4096] */
    (xdc_Char)0x74,  /* [4097] */
    (xdc_Char)0x68,  /* [4098] */
    (xdc_Char)0x2d,  /* [4099] */
    (xdc_Char)0x6f,  /* [4100] */
    (xdc_Char)0x6e,  /* [4101] */
    (xdc_Char)0x6c,  /* [4102] */
    (xdc_Char)0x79,  /* [4103] */
    (xdc_Char)0x20,  /* [4104] */
    (xdc_Char)0x48,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x61,  /* [4107] */
    (xdc_Char)0x70,  /* [4108] */
    (xdc_Char)0x4d,  /* [4109] */
    (xdc_Char)0x69,  /* [4110] */
    (xdc_Char)0x6e,  /* [4111] */
    (xdc_Char)0x0,  /* [4112] */
    (xdc_Char)0x54,  /* [4113] */
    (xdc_Char)0x68,  /* [4114] */
    (xdc_Char)0x65,  /* [4115] */
    (xdc_Char)0x20,  /* [4116] */
    (xdc_Char)0x52,  /* [4117] */
    (xdc_Char)0x54,  /* [4118] */
    (xdc_Char)0x53,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x68,  /* [4121] */
    (xdc_Char)0x65,  /* [4122] */
    (xdc_Char)0x61,  /* [4123] */
    (xdc_Char)0x70,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x69,  /* [4126] */
    (xdc_Char)0x73,  /* [4127] */
    (xdc_Char)0x20,  /* [4128] */
    (xdc_Char)0x75,  /* [4129] */
    (xdc_Char)0x73,  /* [4130] */
    (xdc_Char)0x65,  /* [4131] */
    (xdc_Char)0x64,  /* [4132] */
    (xdc_Char)0x20,  /* [4133] */
    (xdc_Char)0x75,  /* [4134] */
    (xdc_Char)0x70,  /* [4135] */
    (xdc_Char)0x2e,  /* [4136] */
    (xdc_Char)0x20,  /* [4137] */
    (xdc_Char)0x45,  /* [4138] */
    (xdc_Char)0x78,  /* [4139] */
    (xdc_Char)0x61,  /* [4140] */
    (xdc_Char)0x6d,  /* [4141] */
    (xdc_Char)0x69,  /* [4142] */
    (xdc_Char)0x6e,  /* [4143] */
    (xdc_Char)0x65,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x50,  /* [4146] */
    (xdc_Char)0x72,  /* [4147] */
    (xdc_Char)0x6f,  /* [4148] */
    (xdc_Char)0x67,  /* [4149] */
    (xdc_Char)0x72,  /* [4150] */
    (xdc_Char)0x61,  /* [4151] */
    (xdc_Char)0x6d,  /* [4152] */
    (xdc_Char)0x2e,  /* [4153] */
    (xdc_Char)0x68,  /* [4154] */
    (xdc_Char)0x65,  /* [4155] */
    (xdc_Char)0x61,  /* [4156] */
    (xdc_Char)0x70,  /* [4157] */
    (xdc_Char)0x2e,  /* [4158] */
    (xdc_Char)0x0,  /* [4159] */
    (xdc_Char)0x45,  /* [4160] */
    (xdc_Char)0x5f,  /* [4161] */
    (xdc_Char)0x62,  /* [4162] */
    (xdc_Char)0x61,  /* [4163] */
    (xdc_Char)0x64,  /* [4164] */
    (xdc_Char)0x43,  /* [4165] */
    (xdc_Char)0x6f,  /* [4166] */
    (xdc_Char)0x6d,  /* [4167] */
    (xdc_Char)0x6d,  /* [4168] */
    (xdc_Char)0x61,  /* [4169] */
    (xdc_Char)0x6e,  /* [4170] */
    (xdc_Char)0x64,  /* [4171] */
    (xdc_Char)0x3a,  /* [4172] */
    (xdc_Char)0x20,  /* [4173] */
    (xdc_Char)0x52,  /* [4174] */
    (xdc_Char)0x65,  /* [4175] */
    (xdc_Char)0x63,  /* [4176] */
    (xdc_Char)0x65,  /* [4177] */
    (xdc_Char)0x69,  /* [4178] */
    (xdc_Char)0x76,  /* [4179] */
    (xdc_Char)0x65,  /* [4180] */
    (xdc_Char)0x64,  /* [4181] */
    (xdc_Char)0x20,  /* [4182] */
    (xdc_Char)0x69,  /* [4183] */
    (xdc_Char)0x6e,  /* [4184] */
    (xdc_Char)0x76,  /* [4185] */
    (xdc_Char)0x61,  /* [4186] */
    (xdc_Char)0x6c,  /* [4187] */
    (xdc_Char)0x69,  /* [4188] */
    (xdc_Char)0x64,  /* [4189] */
    (xdc_Char)0x20,  /* [4190] */
    (xdc_Char)0x63,  /* [4191] */
    (xdc_Char)0x6f,  /* [4192] */
    (xdc_Char)0x6d,  /* [4193] */
    (xdc_Char)0x6d,  /* [4194] */
    (xdc_Char)0x61,  /* [4195] */
    (xdc_Char)0x6e,  /* [4196] */
    (xdc_Char)0x64,  /* [4197] */
    (xdc_Char)0x2c,  /* [4198] */
    (xdc_Char)0x20,  /* [4199] */
    (xdc_Char)0x69,  /* [4200] */
    (xdc_Char)0x64,  /* [4201] */
    (xdc_Char)0x3a,  /* [4202] */
    (xdc_Char)0x20,  /* [4203] */
    (xdc_Char)0x25,  /* [4204] */
    (xdc_Char)0x64,  /* [4205] */
    (xdc_Char)0x2e,  /* [4206] */
    (xdc_Char)0x0,  /* [4207] */
    (xdc_Char)0x45,  /* [4208] */
    (xdc_Char)0x5f,  /* [4209] */
    (xdc_Char)0x73,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x61,  /* [4212] */
    (xdc_Char)0x63,  /* [4213] */
    (xdc_Char)0x6b,  /* [4214] */
    (xdc_Char)0x4f,  /* [4215] */
    (xdc_Char)0x76,  /* [4216] */
    (xdc_Char)0x65,  /* [4217] */
    (xdc_Char)0x72,  /* [4218] */
    (xdc_Char)0x66,  /* [4219] */
    (xdc_Char)0x6c,  /* [4220] */
    (xdc_Char)0x6f,  /* [4221] */
    (xdc_Char)0x77,  /* [4222] */
    (xdc_Char)0x3a,  /* [4223] */
    (xdc_Char)0x20,  /* [4224] */
    (xdc_Char)0x54,  /* [4225] */
    (xdc_Char)0x61,  /* [4226] */
    (xdc_Char)0x73,  /* [4227] */
    (xdc_Char)0x6b,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x30,  /* [4230] */
    (xdc_Char)0x78,  /* [4231] */
    (xdc_Char)0x25,  /* [4232] */
    (xdc_Char)0x78,  /* [4233] */
    (xdc_Char)0x20,  /* [4234] */
    (xdc_Char)0x73,  /* [4235] */
    (xdc_Char)0x74,  /* [4236] */
    (xdc_Char)0x61,  /* [4237] */
    (xdc_Char)0x63,  /* [4238] */
    (xdc_Char)0x6b,  /* [4239] */
    (xdc_Char)0x20,  /* [4240] */
    (xdc_Char)0x6f,  /* [4241] */
    (xdc_Char)0x76,  /* [4242] */
    (xdc_Char)0x65,  /* [4243] */
    (xdc_Char)0x72,  /* [4244] */
    (xdc_Char)0x66,  /* [4245] */
    (xdc_Char)0x6c,  /* [4246] */
    (xdc_Char)0x6f,  /* [4247] */
    (xdc_Char)0x77,  /* [4248] */
    (xdc_Char)0x2e,  /* [4249] */
    (xdc_Char)0x0,  /* [4250] */
    (xdc_Char)0x45,  /* [4251] */
    (xdc_Char)0x5f,  /* [4252] */
    (xdc_Char)0x73,  /* [4253] */
    (xdc_Char)0x70,  /* [4254] */
    (xdc_Char)0x4f,  /* [4255] */
    (xdc_Char)0x75,  /* [4256] */
    (xdc_Char)0x74,  /* [4257] */
    (xdc_Char)0x4f,  /* [4258] */
    (xdc_Char)0x66,  /* [4259] */
    (xdc_Char)0x42,  /* [4260] */
    (xdc_Char)0x6f,  /* [4261] */
    (xdc_Char)0x75,  /* [4262] */
    (xdc_Char)0x6e,  /* [4263] */
    (xdc_Char)0x64,  /* [4264] */
    (xdc_Char)0x73,  /* [4265] */
    (xdc_Char)0x3a,  /* [4266] */
    (xdc_Char)0x20,  /* [4267] */
    (xdc_Char)0x54,  /* [4268] */
    (xdc_Char)0x61,  /* [4269] */
    (xdc_Char)0x73,  /* [4270] */
    (xdc_Char)0x6b,  /* [4271] */
    (xdc_Char)0x20,  /* [4272] */
    (xdc_Char)0x30,  /* [4273] */
    (xdc_Char)0x78,  /* [4274] */
    (xdc_Char)0x25,  /* [4275] */
    (xdc_Char)0x78,  /* [4276] */
    (xdc_Char)0x20,  /* [4277] */
    (xdc_Char)0x73,  /* [4278] */
    (xdc_Char)0x74,  /* [4279] */
    (xdc_Char)0x61,  /* [4280] */
    (xdc_Char)0x63,  /* [4281] */
    (xdc_Char)0x6b,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x65,  /* [4284] */
    (xdc_Char)0x72,  /* [4285] */
    (xdc_Char)0x72,  /* [4286] */
    (xdc_Char)0x6f,  /* [4287] */
    (xdc_Char)0x72,  /* [4288] */
    (xdc_Char)0x2c,  /* [4289] */
    (xdc_Char)0x20,  /* [4290] */
    (xdc_Char)0x53,  /* [4291] */
    (xdc_Char)0x50,  /* [4292] */
    (xdc_Char)0x20,  /* [4293] */
    (xdc_Char)0x3d,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x30,  /* [4296] */
    (xdc_Char)0x78,  /* [4297] */
    (xdc_Char)0x25,  /* [4298] */
    (xdc_Char)0x78,  /* [4299] */
    (xdc_Char)0x2e,  /* [4300] */
    (xdc_Char)0x0,  /* [4301] */
    (xdc_Char)0x45,  /* [4302] */
    (xdc_Char)0x5f,  /* [4303] */
    (xdc_Char)0x64,  /* [4304] */
    (xdc_Char)0x65,  /* [4305] */
    (xdc_Char)0x6c,  /* [4306] */
    (xdc_Char)0x65,  /* [4307] */
    (xdc_Char)0x74,  /* [4308] */
    (xdc_Char)0x65,  /* [4309] */
    (xdc_Char)0x4e,  /* [4310] */
    (xdc_Char)0x6f,  /* [4311] */
    (xdc_Char)0x74,  /* [4312] */
    (xdc_Char)0x41,  /* [4313] */
    (xdc_Char)0x6c,  /* [4314] */
    (xdc_Char)0x6c,  /* [4315] */
    (xdc_Char)0x6f,  /* [4316] */
    (xdc_Char)0x77,  /* [4317] */
    (xdc_Char)0x65,  /* [4318] */
    (xdc_Char)0x64,  /* [4319] */
    (xdc_Char)0x3a,  /* [4320] */
    (xdc_Char)0x20,  /* [4321] */
    (xdc_Char)0x54,  /* [4322] */
    (xdc_Char)0x61,  /* [4323] */
    (xdc_Char)0x73,  /* [4324] */
    (xdc_Char)0x6b,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x30,  /* [4327] */
    (xdc_Char)0x78,  /* [4328] */
    (xdc_Char)0x25,  /* [4329] */
    (xdc_Char)0x78,  /* [4330] */
    (xdc_Char)0x2e,  /* [4331] */
    (xdc_Char)0x0,  /* [4332] */
    (xdc_Char)0x45,  /* [4333] */
    (xdc_Char)0x5f,  /* [4334] */
    (xdc_Char)0x73,  /* [4335] */
    (xdc_Char)0x74,  /* [4336] */
    (xdc_Char)0x61,  /* [4337] */
    (xdc_Char)0x63,  /* [4338] */
    (xdc_Char)0x6b,  /* [4339] */
    (xdc_Char)0x4f,  /* [4340] */
    (xdc_Char)0x76,  /* [4341] */
    (xdc_Char)0x65,  /* [4342] */
    (xdc_Char)0x72,  /* [4343] */
    (xdc_Char)0x66,  /* [4344] */
    (xdc_Char)0x6c,  /* [4345] */
    (xdc_Char)0x6f,  /* [4346] */
    (xdc_Char)0x77,  /* [4347] */
    (xdc_Char)0x3a,  /* [4348] */
    (xdc_Char)0x20,  /* [4349] */
    (xdc_Char)0x49,  /* [4350] */
    (xdc_Char)0x53,  /* [4351] */
    (xdc_Char)0x52,  /* [4352] */
    (xdc_Char)0x20,  /* [4353] */
    (xdc_Char)0x73,  /* [4354] */
    (xdc_Char)0x74,  /* [4355] */
    (xdc_Char)0x61,  /* [4356] */
    (xdc_Char)0x63,  /* [4357] */
    (xdc_Char)0x6b,  /* [4358] */
    (xdc_Char)0x20,  /* [4359] */
    (xdc_Char)0x6f,  /* [4360] */
    (xdc_Char)0x76,  /* [4361] */
    (xdc_Char)0x65,  /* [4362] */
    (xdc_Char)0x72,  /* [4363] */
    (xdc_Char)0x66,  /* [4364] */
    (xdc_Char)0x6c,  /* [4365] */
    (xdc_Char)0x6f,  /* [4366] */
    (xdc_Char)0x77,  /* [4367] */
    (xdc_Char)0x2e,  /* [4368] */
    (xdc_Char)0x0,  /* [4369] */
    (xdc_Char)0x45,  /* [4370] */
    (xdc_Char)0x5f,  /* [4371] */
    (xdc_Char)0x70,  /* [4372] */
    (xdc_Char)0x72,  /* [4373] */
    (xdc_Char)0x69,  /* [4374] */
    (xdc_Char)0x6f,  /* [4375] */
    (xdc_Char)0x72,  /* [4376] */
    (xdc_Char)0x69,  /* [4377] */
    (xdc_Char)0x74,  /* [4378] */
    (xdc_Char)0x79,  /* [4379] */
    (xdc_Char)0x3a,  /* [4380] */
    (xdc_Char)0x20,  /* [4381] */
    (xdc_Char)0x54,  /* [4382] */
    (xdc_Char)0x68,  /* [4383] */
    (xdc_Char)0x72,  /* [4384] */
    (xdc_Char)0x65,  /* [4385] */
    (xdc_Char)0x61,  /* [4386] */
    (xdc_Char)0x64,  /* [4387] */
    (xdc_Char)0x20,  /* [4388] */
    (xdc_Char)0x70,  /* [4389] */
    (xdc_Char)0x72,  /* [4390] */
    (xdc_Char)0x69,  /* [4391] */
    (xdc_Char)0x6f,  /* [4392] */
    (xdc_Char)0x72,  /* [4393] */
    (xdc_Char)0x69,  /* [4394] */
    (xdc_Char)0x74,  /* [4395] */
    (xdc_Char)0x79,  /* [4396] */
    (xdc_Char)0x20,  /* [4397] */
    (xdc_Char)0x69,  /* [4398] */
    (xdc_Char)0x73,  /* [4399] */
    (xdc_Char)0x20,  /* [4400] */
    (xdc_Char)0x69,  /* [4401] */
    (xdc_Char)0x6e,  /* [4402] */
    (xdc_Char)0x76,  /* [4403] */
    (xdc_Char)0x61,  /* [4404] */
    (xdc_Char)0x6c,  /* [4405] */
    (xdc_Char)0x69,  /* [4406] */
    (xdc_Char)0x64,  /* [4407] */
    (xdc_Char)0x20,  /* [4408] */
    (xdc_Char)0x25,  /* [4409] */
    (xdc_Char)0x64,  /* [4410] */
    (xdc_Char)0x0,  /* [4411] */
    (xdc_Char)0x45,  /* [4412] */
    (xdc_Char)0x5f,  /* [4413] */
    (xdc_Char)0x61,  /* [4414] */
    (xdc_Char)0x6c,  /* [4415] */
    (xdc_Char)0x72,  /* [4416] */
    (xdc_Char)0x65,  /* [4417] */
    (xdc_Char)0x61,  /* [4418] */
    (xdc_Char)0x64,  /* [4419] */
    (xdc_Char)0x79,  /* [4420] */
    (xdc_Char)0x44,  /* [4421] */
    (xdc_Char)0x65,  /* [4422] */
    (xdc_Char)0x66,  /* [4423] */
    (xdc_Char)0x69,  /* [4424] */
    (xdc_Char)0x6e,  /* [4425] */
    (xdc_Char)0x65,  /* [4426] */
    (xdc_Char)0x64,  /* [4427] */
    (xdc_Char)0x3a,  /* [4428] */
    (xdc_Char)0x20,  /* [4429] */
    (xdc_Char)0x48,  /* [4430] */
    (xdc_Char)0x77,  /* [4431] */
    (xdc_Char)0x69,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x61,  /* [4434] */
    (xdc_Char)0x6c,  /* [4435] */
    (xdc_Char)0x72,  /* [4436] */
    (xdc_Char)0x65,  /* [4437] */
    (xdc_Char)0x61,  /* [4438] */
    (xdc_Char)0x64,  /* [4439] */
    (xdc_Char)0x79,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x64,  /* [4442] */
    (xdc_Char)0x65,  /* [4443] */
    (xdc_Char)0x66,  /* [4444] */
    (xdc_Char)0x69,  /* [4445] */
    (xdc_Char)0x6e,  /* [4446] */
    (xdc_Char)0x65,  /* [4447] */
    (xdc_Char)0x64,  /* [4448] */
    (xdc_Char)0x3a,  /* [4449] */
    (xdc_Char)0x20,  /* [4450] */
    (xdc_Char)0x69,  /* [4451] */
    (xdc_Char)0x6e,  /* [4452] */
    (xdc_Char)0x74,  /* [4453] */
    (xdc_Char)0x72,  /* [4454] */
    (xdc_Char)0x23,  /* [4455] */
    (xdc_Char)0x20,  /* [4456] */
    (xdc_Char)0x25,  /* [4457] */
    (xdc_Char)0x64,  /* [4458] */
    (xdc_Char)0x0,  /* [4459] */
    (xdc_Char)0x45,  /* [4460] */
    (xdc_Char)0x5f,  /* [4461] */
    (xdc_Char)0x68,  /* [4462] */
    (xdc_Char)0x77,  /* [4463] */
    (xdc_Char)0x69,  /* [4464] */
    (xdc_Char)0x4c,  /* [4465] */
    (xdc_Char)0x69,  /* [4466] */
    (xdc_Char)0x6d,  /* [4467] */
    (xdc_Char)0x69,  /* [4468] */
    (xdc_Char)0x74,  /* [4469] */
    (xdc_Char)0x45,  /* [4470] */
    (xdc_Char)0x78,  /* [4471] */
    (xdc_Char)0x63,  /* [4472] */
    (xdc_Char)0x65,  /* [4473] */
    (xdc_Char)0x65,  /* [4474] */
    (xdc_Char)0x64,  /* [4475] */
    (xdc_Char)0x65,  /* [4476] */
    (xdc_Char)0x64,  /* [4477] */
    (xdc_Char)0x3a,  /* [4478] */
    (xdc_Char)0x20,  /* [4479] */
    (xdc_Char)0x54,  /* [4480] */
    (xdc_Char)0x6f,  /* [4481] */
    (xdc_Char)0x6f,  /* [4482] */
    (xdc_Char)0x20,  /* [4483] */
    (xdc_Char)0x6d,  /* [4484] */
    (xdc_Char)0x61,  /* [4485] */
    (xdc_Char)0x6e,  /* [4486] */
    (xdc_Char)0x79,  /* [4487] */
    (xdc_Char)0x20,  /* [4488] */
    (xdc_Char)0x69,  /* [4489] */
    (xdc_Char)0x6e,  /* [4490] */
    (xdc_Char)0x74,  /* [4491] */
    (xdc_Char)0x65,  /* [4492] */
    (xdc_Char)0x72,  /* [4493] */
    (xdc_Char)0x72,  /* [4494] */
    (xdc_Char)0x75,  /* [4495] */
    (xdc_Char)0x70,  /* [4496] */
    (xdc_Char)0x74,  /* [4497] */
    (xdc_Char)0x73,  /* [4498] */
    (xdc_Char)0x20,  /* [4499] */
    (xdc_Char)0x64,  /* [4500] */
    (xdc_Char)0x65,  /* [4501] */
    (xdc_Char)0x66,  /* [4502] */
    (xdc_Char)0x69,  /* [4503] */
    (xdc_Char)0x6e,  /* [4504] */
    (xdc_Char)0x65,  /* [4505] */
    (xdc_Char)0x64,  /* [4506] */
    (xdc_Char)0x0,  /* [4507] */
    (xdc_Char)0x45,  /* [4508] */
    (xdc_Char)0x5f,  /* [4509] */
    (xdc_Char)0x65,  /* [4510] */
    (xdc_Char)0x78,  /* [4511] */
    (xdc_Char)0x63,  /* [4512] */
    (xdc_Char)0x65,  /* [4513] */
    (xdc_Char)0x70,  /* [4514] */
    (xdc_Char)0x74,  /* [4515] */
    (xdc_Char)0x69,  /* [4516] */
    (xdc_Char)0x6f,  /* [4517] */
    (xdc_Char)0x6e,  /* [4518] */
    (xdc_Char)0x3a,  /* [4519] */
    (xdc_Char)0x20,  /* [4520] */
    (xdc_Char)0x69,  /* [4521] */
    (xdc_Char)0x64,  /* [4522] */
    (xdc_Char)0x20,  /* [4523] */
    (xdc_Char)0x3d,  /* [4524] */
    (xdc_Char)0x20,  /* [4525] */
    (xdc_Char)0x25,  /* [4526] */
    (xdc_Char)0x64,  /* [4527] */
    (xdc_Char)0x2c,  /* [4528] */
    (xdc_Char)0x20,  /* [4529] */
    (xdc_Char)0x70,  /* [4530] */
    (xdc_Char)0x63,  /* [4531] */
    (xdc_Char)0x20,  /* [4532] */
    (xdc_Char)0x3d,  /* [4533] */
    (xdc_Char)0x20,  /* [4534] */
    (xdc_Char)0x25,  /* [4535] */
    (xdc_Char)0x30,  /* [4536] */
    (xdc_Char)0x38,  /* [4537] */
    (xdc_Char)0x78,  /* [4538] */
    (xdc_Char)0x2e,  /* [4539] */
    (xdc_Char)0xa,  /* [4540] */
    (xdc_Char)0x54,  /* [4541] */
    (xdc_Char)0x6f,  /* [4542] */
    (xdc_Char)0x20,  /* [4543] */
    (xdc_Char)0x73,  /* [4544] */
    (xdc_Char)0x65,  /* [4545] */
    (xdc_Char)0x65,  /* [4546] */
    (xdc_Char)0x20,  /* [4547] */
    (xdc_Char)0x6d,  /* [4548] */
    (xdc_Char)0x6f,  /* [4549] */
    (xdc_Char)0x72,  /* [4550] */
    (xdc_Char)0x65,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x65,  /* [4553] */
    (xdc_Char)0x78,  /* [4554] */
    (xdc_Char)0x63,  /* [4555] */
    (xdc_Char)0x65,  /* [4556] */
    (xdc_Char)0x70,  /* [4557] */
    (xdc_Char)0x74,  /* [4558] */
    (xdc_Char)0x69,  /* [4559] */
    (xdc_Char)0x6f,  /* [4560] */
    (xdc_Char)0x6e,  /* [4561] */
    (xdc_Char)0x20,  /* [4562] */
    (xdc_Char)0x64,  /* [4563] */
    (xdc_Char)0x65,  /* [4564] */
    (xdc_Char)0x74,  /* [4565] */
    (xdc_Char)0x61,  /* [4566] */
    (xdc_Char)0x69,  /* [4567] */
    (xdc_Char)0x6c,  /* [4568] */
    (xdc_Char)0x2c,  /* [4569] */
    (xdc_Char)0x20,  /* [4570] */
    (xdc_Char)0x73,  /* [4571] */
    (xdc_Char)0x65,  /* [4572] */
    (xdc_Char)0x74,  /* [4573] */
    (xdc_Char)0x20,  /* [4574] */
    (xdc_Char)0x74,  /* [4575] */
    (xdc_Char)0x69,  /* [4576] */
    (xdc_Char)0x2e,  /* [4577] */
    (xdc_Char)0x73,  /* [4578] */
    (xdc_Char)0x79,  /* [4579] */
    (xdc_Char)0x73,  /* [4580] */
    (xdc_Char)0x62,  /* [4581] */
    (xdc_Char)0x69,  /* [4582] */
    (xdc_Char)0x6f,  /* [4583] */
    (xdc_Char)0x73,  /* [4584] */
    (xdc_Char)0x2e,  /* [4585] */
    (xdc_Char)0x66,  /* [4586] */
    (xdc_Char)0x61,  /* [4587] */
    (xdc_Char)0x6d,  /* [4588] */
    (xdc_Char)0x69,  /* [4589] */
    (xdc_Char)0x6c,  /* [4590] */
    (xdc_Char)0x79,  /* [4591] */
    (xdc_Char)0x2e,  /* [4592] */
    (xdc_Char)0x61,  /* [4593] */
    (xdc_Char)0x72,  /* [4594] */
    (xdc_Char)0x6d,  /* [4595] */
    (xdc_Char)0x2e,  /* [4596] */
    (xdc_Char)0x6d,  /* [4597] */
    (xdc_Char)0x33,  /* [4598] */
    (xdc_Char)0x2e,  /* [4599] */
    (xdc_Char)0x48,  /* [4600] */
    (xdc_Char)0x77,  /* [4601] */
    (xdc_Char)0x69,  /* [4602] */
    (xdc_Char)0x2e,  /* [4603] */
    (xdc_Char)0x65,  /* [4604] */
    (xdc_Char)0x6e,  /* [4605] */
    (xdc_Char)0x61,  /* [4606] */
    (xdc_Char)0x62,  /* [4607] */
    (xdc_Char)0x6c,  /* [4608] */
    (xdc_Char)0x65,  /* [4609] */
    (xdc_Char)0x45,  /* [4610] */
    (xdc_Char)0x78,  /* [4611] */
    (xdc_Char)0x63,  /* [4612] */
    (xdc_Char)0x65,  /* [4613] */
    (xdc_Char)0x70,  /* [4614] */
    (xdc_Char)0x74,  /* [4615] */
    (xdc_Char)0x69,  /* [4616] */
    (xdc_Char)0x6f,  /* [4617] */
    (xdc_Char)0x6e,  /* [4618] */
    (xdc_Char)0x20,  /* [4619] */
    (xdc_Char)0x3d,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x74,  /* [4622] */
    (xdc_Char)0x72,  /* [4623] */
    (xdc_Char)0x75,  /* [4624] */
    (xdc_Char)0x65,  /* [4625] */
    (xdc_Char)0x20,  /* [4626] */
    (xdc_Char)0x6f,  /* [4627] */
    (xdc_Char)0x72,  /* [4628] */
    (xdc_Char)0x2c,  /* [4629] */
    (xdc_Char)0xa,  /* [4630] */
    (xdc_Char)0x65,  /* [4631] */
    (xdc_Char)0x78,  /* [4632] */
    (xdc_Char)0x61,  /* [4633] */
    (xdc_Char)0x6d,  /* [4634] */
    (xdc_Char)0x69,  /* [4635] */
    (xdc_Char)0x6e,  /* [4636] */
    (xdc_Char)0x65,  /* [4637] */
    (xdc_Char)0x20,  /* [4638] */
    (xdc_Char)0x74,  /* [4639] */
    (xdc_Char)0x68,  /* [4640] */
    (xdc_Char)0x65,  /* [4641] */
    (xdc_Char)0x20,  /* [4642] */
    (xdc_Char)0x45,  /* [4643] */
    (xdc_Char)0x78,  /* [4644] */
    (xdc_Char)0x63,  /* [4645] */
    (xdc_Char)0x65,  /* [4646] */
    (xdc_Char)0x70,  /* [4647] */
    (xdc_Char)0x74,  /* [4648] */
    (xdc_Char)0x69,  /* [4649] */
    (xdc_Char)0x6f,  /* [4650] */
    (xdc_Char)0x6e,  /* [4651] */
    (xdc_Char)0x20,  /* [4652] */
    (xdc_Char)0x76,  /* [4653] */
    (xdc_Char)0x69,  /* [4654] */
    (xdc_Char)0x65,  /* [4655] */
    (xdc_Char)0x77,  /* [4656] */
    (xdc_Char)0x20,  /* [4657] */
    (xdc_Char)0x66,  /* [4658] */
    (xdc_Char)0x6f,  /* [4659] */
    (xdc_Char)0x72,  /* [4660] */
    (xdc_Char)0x20,  /* [4661] */
    (xdc_Char)0x74,  /* [4662] */
    (xdc_Char)0x68,  /* [4663] */
    (xdc_Char)0x65,  /* [4664] */
    (xdc_Char)0x20,  /* [4665] */
    (xdc_Char)0x74,  /* [4666] */
    (xdc_Char)0x69,  /* [4667] */
    (xdc_Char)0x2e,  /* [4668] */
    (xdc_Char)0x73,  /* [4669] */
    (xdc_Char)0x79,  /* [4670] */
    (xdc_Char)0x73,  /* [4671] */
    (xdc_Char)0x62,  /* [4672] */
    (xdc_Char)0x69,  /* [4673] */
    (xdc_Char)0x6f,  /* [4674] */
    (xdc_Char)0x73,  /* [4675] */
    (xdc_Char)0x2e,  /* [4676] */
    (xdc_Char)0x66,  /* [4677] */
    (xdc_Char)0x61,  /* [4678] */
    (xdc_Char)0x6d,  /* [4679] */
    (xdc_Char)0x69,  /* [4680] */
    (xdc_Char)0x6c,  /* [4681] */
    (xdc_Char)0x79,  /* [4682] */
    (xdc_Char)0x2e,  /* [4683] */
    (xdc_Char)0x61,  /* [4684] */
    (xdc_Char)0x72,  /* [4685] */
    (xdc_Char)0x6d,  /* [4686] */
    (xdc_Char)0x2e,  /* [4687] */
    (xdc_Char)0x6d,  /* [4688] */
    (xdc_Char)0x33,  /* [4689] */
    (xdc_Char)0x2e,  /* [4690] */
    (xdc_Char)0x48,  /* [4691] */
    (xdc_Char)0x77,  /* [4692] */
    (xdc_Char)0x69,  /* [4693] */
    (xdc_Char)0x20,  /* [4694] */
    (xdc_Char)0x6d,  /* [4695] */
    (xdc_Char)0x6f,  /* [4696] */
    (xdc_Char)0x64,  /* [4697] */
    (xdc_Char)0x75,  /* [4698] */
    (xdc_Char)0x6c,  /* [4699] */
    (xdc_Char)0x65,  /* [4700] */
    (xdc_Char)0x20,  /* [4701] */
    (xdc_Char)0x75,  /* [4702] */
    (xdc_Char)0x73,  /* [4703] */
    (xdc_Char)0x69,  /* [4704] */
    (xdc_Char)0x6e,  /* [4705] */
    (xdc_Char)0x67,  /* [4706] */
    (xdc_Char)0x20,  /* [4707] */
    (xdc_Char)0x52,  /* [4708] */
    (xdc_Char)0x4f,  /* [4709] */
    (xdc_Char)0x56,  /* [4710] */
    (xdc_Char)0x2e,  /* [4711] */
    (xdc_Char)0x0,  /* [4712] */
    (xdc_Char)0x45,  /* [4713] */
    (xdc_Char)0x5f,  /* [4714] */
    (xdc_Char)0x6e,  /* [4715] */
    (xdc_Char)0x6f,  /* [4716] */
    (xdc_Char)0x49,  /* [4717] */
    (xdc_Char)0x73,  /* [4718] */
    (xdc_Char)0x72,  /* [4719] */
    (xdc_Char)0x3a,  /* [4720] */
    (xdc_Char)0x20,  /* [4721] */
    (xdc_Char)0x69,  /* [4722] */
    (xdc_Char)0x64,  /* [4723] */
    (xdc_Char)0x20,  /* [4724] */
    (xdc_Char)0x3d,  /* [4725] */
    (xdc_Char)0x20,  /* [4726] */
    (xdc_Char)0x25,  /* [4727] */
    (xdc_Char)0x64,  /* [4728] */
    (xdc_Char)0x2c,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x70,  /* [4731] */
    (xdc_Char)0x63,  /* [4732] */
    (xdc_Char)0x20,  /* [4733] */
    (xdc_Char)0x3d,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x25,  /* [4736] */
    (xdc_Char)0x30,  /* [4737] */
    (xdc_Char)0x38,  /* [4738] */
    (xdc_Char)0x78,  /* [4739] */
    (xdc_Char)0x0,  /* [4740] */
    (xdc_Char)0x45,  /* [4741] */
    (xdc_Char)0x5f,  /* [4742] */
    (xdc_Char)0x4e,  /* [4743] */
    (xdc_Char)0x4d,  /* [4744] */
    (xdc_Char)0x49,  /* [4745] */
    (xdc_Char)0x3a,  /* [4746] */
    (xdc_Char)0x20,  /* [4747] */
    (xdc_Char)0x25,  /* [4748] */
    (xdc_Char)0x73,  /* [4749] */
    (xdc_Char)0x0,  /* [4750] */
    (xdc_Char)0x45,  /* [4751] */
    (xdc_Char)0x5f,  /* [4752] */
    (xdc_Char)0x68,  /* [4753] */
    (xdc_Char)0x61,  /* [4754] */
    (xdc_Char)0x72,  /* [4755] */
    (xdc_Char)0x64,  /* [4756] */
    (xdc_Char)0x46,  /* [4757] */
    (xdc_Char)0x61,  /* [4758] */
    (xdc_Char)0x75,  /* [4759] */
    (xdc_Char)0x6c,  /* [4760] */
    (xdc_Char)0x74,  /* [4761] */
    (xdc_Char)0x3a,  /* [4762] */
    (xdc_Char)0x20,  /* [4763] */
    (xdc_Char)0x25,  /* [4764] */
    (xdc_Char)0x73,  /* [4765] */
    (xdc_Char)0x0,  /* [4766] */
    (xdc_Char)0x45,  /* [4767] */
    (xdc_Char)0x5f,  /* [4768] */
    (xdc_Char)0x6d,  /* [4769] */
    (xdc_Char)0x65,  /* [4770] */
    (xdc_Char)0x6d,  /* [4771] */
    (xdc_Char)0x46,  /* [4772] */
    (xdc_Char)0x61,  /* [4773] */
    (xdc_Char)0x75,  /* [4774] */
    (xdc_Char)0x6c,  /* [4775] */
    (xdc_Char)0x74,  /* [4776] */
    (xdc_Char)0x3a,  /* [4777] */
    (xdc_Char)0x20,  /* [4778] */
    (xdc_Char)0x25,  /* [4779] */
    (xdc_Char)0x73,  /* [4780] */
    (xdc_Char)0x2c,  /* [4781] */
    (xdc_Char)0x20,  /* [4782] */
    (xdc_Char)0x61,  /* [4783] */
    (xdc_Char)0x64,  /* [4784] */
    (xdc_Char)0x64,  /* [4785] */
    (xdc_Char)0x72,  /* [4786] */
    (xdc_Char)0x65,  /* [4787] */
    (xdc_Char)0x73,  /* [4788] */
    (xdc_Char)0x73,  /* [4789] */
    (xdc_Char)0x3a,  /* [4790] */
    (xdc_Char)0x20,  /* [4791] */
    (xdc_Char)0x25,  /* [4792] */
    (xdc_Char)0x30,  /* [4793] */
    (xdc_Char)0x38,  /* [4794] */
    (xdc_Char)0x78,  /* [4795] */
    (xdc_Char)0x0,  /* [4796] */
    (xdc_Char)0x45,  /* [4797] */
    (xdc_Char)0x5f,  /* [4798] */
    (xdc_Char)0x62,  /* [4799] */
    (xdc_Char)0x75,  /* [4800] */
    (xdc_Char)0x73,  /* [4801] */
    (xdc_Char)0x46,  /* [4802] */
    (xdc_Char)0x61,  /* [4803] */
    (xdc_Char)0x75,  /* [4804] */
    (xdc_Char)0x6c,  /* [4805] */
    (xdc_Char)0x74,  /* [4806] */
    (xdc_Char)0x3a,  /* [4807] */
    (xdc_Char)0x20,  /* [4808] */
    (xdc_Char)0x25,  /* [4809] */
    (xdc_Char)0x73,  /* [4810] */
    (xdc_Char)0x2c,  /* [4811] */
    (xdc_Char)0x20,  /* [4812] */
    (xdc_Char)0x61,  /* [4813] */
    (xdc_Char)0x64,  /* [4814] */
    (xdc_Char)0x64,  /* [4815] */
    (xdc_Char)0x72,  /* [4816] */
    (xdc_Char)0x65,  /* [4817] */
    (xdc_Char)0x73,  /* [4818] */
    (xdc_Char)0x73,  /* [4819] */
    (xdc_Char)0x3a,  /* [4820] */
    (xdc_Char)0x20,  /* [4821] */
    (xdc_Char)0x25,  /* [4822] */
    (xdc_Char)0x30,  /* [4823] */
    (xdc_Char)0x38,  /* [4824] */
    (xdc_Char)0x78,  /* [4825] */
    (xdc_Char)0x0,  /* [4826] */
    (xdc_Char)0x45,  /* [4827] */
    (xdc_Char)0x5f,  /* [4828] */
    (xdc_Char)0x75,  /* [4829] */
    (xdc_Char)0x73,  /* [4830] */
    (xdc_Char)0x61,  /* [4831] */
    (xdc_Char)0x67,  /* [4832] */
    (xdc_Char)0x65,  /* [4833] */
    (xdc_Char)0x46,  /* [4834] */
    (xdc_Char)0x61,  /* [4835] */
    (xdc_Char)0x75,  /* [4836] */
    (xdc_Char)0x6c,  /* [4837] */
    (xdc_Char)0x74,  /* [4838] */
    (xdc_Char)0x3a,  /* [4839] */
    (xdc_Char)0x20,  /* [4840] */
    (xdc_Char)0x25,  /* [4841] */
    (xdc_Char)0x73,  /* [4842] */
    (xdc_Char)0x0,  /* [4843] */
    (xdc_Char)0x45,  /* [4844] */
    (xdc_Char)0x5f,  /* [4845] */
    (xdc_Char)0x73,  /* [4846] */
    (xdc_Char)0x76,  /* [4847] */
    (xdc_Char)0x43,  /* [4848] */
    (xdc_Char)0x61,  /* [4849] */
    (xdc_Char)0x6c,  /* [4850] */
    (xdc_Char)0x6c,  /* [4851] */
    (xdc_Char)0x3a,  /* [4852] */
    (xdc_Char)0x20,  /* [4853] */
    (xdc_Char)0x73,  /* [4854] */
    (xdc_Char)0x76,  /* [4855] */
    (xdc_Char)0x4e,  /* [4856] */
    (xdc_Char)0x75,  /* [4857] */
    (xdc_Char)0x6d,  /* [4858] */
    (xdc_Char)0x20,  /* [4859] */
    (xdc_Char)0x3d,  /* [4860] */
    (xdc_Char)0x20,  /* [4861] */
    (xdc_Char)0x25,  /* [4862] */
    (xdc_Char)0x64,  /* [4863] */
    (xdc_Char)0x0,  /* [4864] */
    (xdc_Char)0x45,  /* [4865] */
    (xdc_Char)0x5f,  /* [4866] */
    (xdc_Char)0x64,  /* [4867] */
    (xdc_Char)0x65,  /* [4868] */
    (xdc_Char)0x62,  /* [4869] */
    (xdc_Char)0x75,  /* [4870] */
    (xdc_Char)0x67,  /* [4871] */
    (xdc_Char)0x4d,  /* [4872] */
    (xdc_Char)0x6f,  /* [4873] */
    (xdc_Char)0x6e,  /* [4874] */
    (xdc_Char)0x3a,  /* [4875] */
    (xdc_Char)0x20,  /* [4876] */
    (xdc_Char)0x25,  /* [4877] */
    (xdc_Char)0x73,  /* [4878] */
    (xdc_Char)0x0,  /* [4879] */
    (xdc_Char)0x45,  /* [4880] */
    (xdc_Char)0x5f,  /* [4881] */
    (xdc_Char)0x72,  /* [4882] */
    (xdc_Char)0x65,  /* [4883] */
    (xdc_Char)0x73,  /* [4884] */
    (xdc_Char)0x65,  /* [4885] */
    (xdc_Char)0x72,  /* [4886] */
    (xdc_Char)0x76,  /* [4887] */
    (xdc_Char)0x65,  /* [4888] */
    (xdc_Char)0x64,  /* [4889] */
    (xdc_Char)0x3a,  /* [4890] */
    (xdc_Char)0x20,  /* [4891] */
    (xdc_Char)0x25,  /* [4892] */
    (xdc_Char)0x73,  /* [4893] */
    (xdc_Char)0x20,  /* [4894] */
    (xdc_Char)0x25,  /* [4895] */
    (xdc_Char)0x64,  /* [4896] */
    (xdc_Char)0x0,  /* [4897] */
    (xdc_Char)0x45,  /* [4898] */
    (xdc_Char)0x5f,  /* [4899] */
    (xdc_Char)0x69,  /* [4900] */
    (xdc_Char)0x6e,  /* [4901] */
    (xdc_Char)0x76,  /* [4902] */
    (xdc_Char)0x61,  /* [4903] */
    (xdc_Char)0x6c,  /* [4904] */
    (xdc_Char)0x69,  /* [4905] */
    (xdc_Char)0x64,  /* [4906] */
    (xdc_Char)0x54,  /* [4907] */
    (xdc_Char)0x69,  /* [4908] */
    (xdc_Char)0x6d,  /* [4909] */
    (xdc_Char)0x65,  /* [4910] */
    (xdc_Char)0x72,  /* [4911] */
    (xdc_Char)0x3a,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x49,  /* [4914] */
    (xdc_Char)0x6e,  /* [4915] */
    (xdc_Char)0x76,  /* [4916] */
    (xdc_Char)0x61,  /* [4917] */
    (xdc_Char)0x6c,  /* [4918] */
    (xdc_Char)0x69,  /* [4919] */
    (xdc_Char)0x64,  /* [4920] */
    (xdc_Char)0x20,  /* [4921] */
    (xdc_Char)0x54,  /* [4922] */
    (xdc_Char)0x69,  /* [4923] */
    (xdc_Char)0x6d,  /* [4924] */
    (xdc_Char)0x65,  /* [4925] */
    (xdc_Char)0x72,  /* [4926] */
    (xdc_Char)0x20,  /* [4927] */
    (xdc_Char)0x49,  /* [4928] */
    (xdc_Char)0x64,  /* [4929] */
    (xdc_Char)0x20,  /* [4930] */
    (xdc_Char)0x25,  /* [4931] */
    (xdc_Char)0x64,  /* [4932] */
    (xdc_Char)0x0,  /* [4933] */
    (xdc_Char)0x45,  /* [4934] */
    (xdc_Char)0x5f,  /* [4935] */
    (xdc_Char)0x6e,  /* [4936] */
    (xdc_Char)0x6f,  /* [4937] */
    (xdc_Char)0x74,  /* [4938] */
    (xdc_Char)0x41,  /* [4939] */
    (xdc_Char)0x76,  /* [4940] */
    (xdc_Char)0x61,  /* [4941] */
    (xdc_Char)0x69,  /* [4942] */
    (xdc_Char)0x6c,  /* [4943] */
    (xdc_Char)0x61,  /* [4944] */
    (xdc_Char)0x62,  /* [4945] */
    (xdc_Char)0x6c,  /* [4946] */
    (xdc_Char)0x65,  /* [4947] */
    (xdc_Char)0x3a,  /* [4948] */
    (xdc_Char)0x20,  /* [4949] */
    (xdc_Char)0x54,  /* [4950] */
    (xdc_Char)0x69,  /* [4951] */
    (xdc_Char)0x6d,  /* [4952] */
    (xdc_Char)0x65,  /* [4953] */
    (xdc_Char)0x72,  /* [4954] */
    (xdc_Char)0x20,  /* [4955] */
    (xdc_Char)0x6e,  /* [4956] */
    (xdc_Char)0x6f,  /* [4957] */
    (xdc_Char)0x74,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x61,  /* [4960] */
    (xdc_Char)0x76,  /* [4961] */
    (xdc_Char)0x61,  /* [4962] */
    (xdc_Char)0x69,  /* [4963] */
    (xdc_Char)0x6c,  /* [4964] */
    (xdc_Char)0x61,  /* [4965] */
    (xdc_Char)0x62,  /* [4966] */
    (xdc_Char)0x6c,  /* [4967] */
    (xdc_Char)0x65,  /* [4968] */
    (xdc_Char)0x20,  /* [4969] */
    (xdc_Char)0x25,  /* [4970] */
    (xdc_Char)0x64,  /* [4971] */
    (xdc_Char)0x0,  /* [4972] */
    (xdc_Char)0x45,  /* [4973] */
    (xdc_Char)0x5f,  /* [4974] */
    (xdc_Char)0x63,  /* [4975] */
    (xdc_Char)0x61,  /* [4976] */
    (xdc_Char)0x6e,  /* [4977] */
    (xdc_Char)0x6e,  /* [4978] */
    (xdc_Char)0x6f,  /* [4979] */
    (xdc_Char)0x74,  /* [4980] */
    (xdc_Char)0x53,  /* [4981] */
    (xdc_Char)0x75,  /* [4982] */
    (xdc_Char)0x70,  /* [4983] */
    (xdc_Char)0x70,  /* [4984] */
    (xdc_Char)0x6f,  /* [4985] */
    (xdc_Char)0x72,  /* [4986] */
    (xdc_Char)0x74,  /* [4987] */
    (xdc_Char)0x3a,  /* [4988] */
    (xdc_Char)0x20,  /* [4989] */
    (xdc_Char)0x54,  /* [4990] */
    (xdc_Char)0x69,  /* [4991] */
    (xdc_Char)0x6d,  /* [4992] */
    (xdc_Char)0x65,  /* [4993] */
    (xdc_Char)0x72,  /* [4994] */
    (xdc_Char)0x20,  /* [4995] */
    (xdc_Char)0x63,  /* [4996] */
    (xdc_Char)0x61,  /* [4997] */
    (xdc_Char)0x6e,  /* [4998] */
    (xdc_Char)0x6e,  /* [4999] */
    (xdc_Char)0x6f,  /* [5000] */
    (xdc_Char)0x74,  /* [5001] */
    (xdc_Char)0x20,  /* [5002] */
    (xdc_Char)0x73,  /* [5003] */
    (xdc_Char)0x75,  /* [5004] */
    (xdc_Char)0x70,  /* [5005] */
    (xdc_Char)0x70,  /* [5006] */
    (xdc_Char)0x6f,  /* [5007] */
    (xdc_Char)0x72,  /* [5008] */
    (xdc_Char)0x74,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x72,  /* [5011] */
    (xdc_Char)0x65,  /* [5012] */
    (xdc_Char)0x71,  /* [5013] */
    (xdc_Char)0x75,  /* [5014] */
    (xdc_Char)0x65,  /* [5015] */
    (xdc_Char)0x73,  /* [5016] */
    (xdc_Char)0x74,  /* [5017] */
    (xdc_Char)0x65,  /* [5018] */
    (xdc_Char)0x64,  /* [5019] */
    (xdc_Char)0x20,  /* [5020] */
    (xdc_Char)0x70,  /* [5021] */
    (xdc_Char)0x65,  /* [5022] */
    (xdc_Char)0x72,  /* [5023] */
    (xdc_Char)0x69,  /* [5024] */
    (xdc_Char)0x6f,  /* [5025] */
    (xdc_Char)0x64,  /* [5026] */
    (xdc_Char)0x20,  /* [5027] */
    (xdc_Char)0x25,  /* [5028] */
    (xdc_Char)0x64,  /* [5029] */
    (xdc_Char)0x0,  /* [5030] */
    (xdc_Char)0x72,  /* [5031] */
    (xdc_Char)0x65,  /* [5032] */
    (xdc_Char)0x71,  /* [5033] */
    (xdc_Char)0x75,  /* [5034] */
    (xdc_Char)0x65,  /* [5035] */
    (xdc_Char)0x73,  /* [5036] */
    (xdc_Char)0x74,  /* [5037] */
    (xdc_Char)0x65,  /* [5038] */
    (xdc_Char)0x64,  /* [5039] */
    (xdc_Char)0x20,  /* [5040] */
    (xdc_Char)0x73,  /* [5041] */
    (xdc_Char)0x69,  /* [5042] */
    (xdc_Char)0x7a,  /* [5043] */
    (xdc_Char)0x65,  /* [5044] */
    (xdc_Char)0x20,  /* [5045] */
    (xdc_Char)0x69,  /* [5046] */
    (xdc_Char)0x73,  /* [5047] */
    (xdc_Char)0x20,  /* [5048] */
    (xdc_Char)0x74,  /* [5049] */
    (xdc_Char)0x6f,  /* [5050] */
    (xdc_Char)0x6f,  /* [5051] */
    (xdc_Char)0x20,  /* [5052] */
    (xdc_Char)0x62,  /* [5053] */
    (xdc_Char)0x69,  /* [5054] */
    (xdc_Char)0x67,  /* [5055] */
    (xdc_Char)0x3a,  /* [5056] */
    (xdc_Char)0x20,  /* [5057] */
    (xdc_Char)0x68,  /* [5058] */
    (xdc_Char)0x61,  /* [5059] */
    (xdc_Char)0x6e,  /* [5060] */
    (xdc_Char)0x64,  /* [5061] */
    (xdc_Char)0x6c,  /* [5062] */
    (xdc_Char)0x65,  /* [5063] */
    (xdc_Char)0x3d,  /* [5064] */
    (xdc_Char)0x30,  /* [5065] */
    (xdc_Char)0x78,  /* [5066] */
    (xdc_Char)0x25,  /* [5067] */
    (xdc_Char)0x78,  /* [5068] */
    (xdc_Char)0x2c,  /* [5069] */
    (xdc_Char)0x20,  /* [5070] */
    (xdc_Char)0x73,  /* [5071] */
    (xdc_Char)0x69,  /* [5072] */
    (xdc_Char)0x7a,  /* [5073] */
    (xdc_Char)0x65,  /* [5074] */
    (xdc_Char)0x3d,  /* [5075] */
    (xdc_Char)0x25,  /* [5076] */
    (xdc_Char)0x75,  /* [5077] */
    (xdc_Char)0x0,  /* [5078] */
    (xdc_Char)0x6f,  /* [5079] */
    (xdc_Char)0x75,  /* [5080] */
    (xdc_Char)0x74,  /* [5081] */
    (xdc_Char)0x20,  /* [5082] */
    (xdc_Char)0x6f,  /* [5083] */
    (xdc_Char)0x66,  /* [5084] */
    (xdc_Char)0x20,  /* [5085] */
    (xdc_Char)0x6d,  /* [5086] */
    (xdc_Char)0x65,  /* [5087] */
    (xdc_Char)0x6d,  /* [5088] */
    (xdc_Char)0x6f,  /* [5089] */
    (xdc_Char)0x72,  /* [5090] */
    (xdc_Char)0x79,  /* [5091] */
    (xdc_Char)0x3a,  /* [5092] */
    (xdc_Char)0x20,  /* [5093] */
    (xdc_Char)0x68,  /* [5094] */
    (xdc_Char)0x61,  /* [5095] */
    (xdc_Char)0x6e,  /* [5096] */
    (xdc_Char)0x64,  /* [5097] */
    (xdc_Char)0x6c,  /* [5098] */
    (xdc_Char)0x65,  /* [5099] */
    (xdc_Char)0x3d,  /* [5100] */
    (xdc_Char)0x30,  /* [5101] */
    (xdc_Char)0x78,  /* [5102] */
    (xdc_Char)0x25,  /* [5103] */
    (xdc_Char)0x78,  /* [5104] */
    (xdc_Char)0x2c,  /* [5105] */
    (xdc_Char)0x20,  /* [5106] */
    (xdc_Char)0x73,  /* [5107] */
    (xdc_Char)0x69,  /* [5108] */
    (xdc_Char)0x7a,  /* [5109] */
    (xdc_Char)0x65,  /* [5110] */
    (xdc_Char)0x3d,  /* [5111] */
    (xdc_Char)0x25,  /* [5112] */
    (xdc_Char)0x75,  /* [5113] */
    (xdc_Char)0x0,  /* [5114] */
    (xdc_Char)0x45,  /* [5115] */
    (xdc_Char)0x5f,  /* [5116] */
    (xdc_Char)0x6e,  /* [5117] */
    (xdc_Char)0x6f,  /* [5118] */
    (xdc_Char)0x61,  /* [5119] */
    (xdc_Char)0x6c,  /* [5120] */
    (xdc_Char)0x74,  /* [5121] */
    (xdc_Char)0x63,  /* [5122] */
    (xdc_Char)0x6c,  /* [5123] */
    (xdc_Char)0x6b,  /* [5124] */
    (xdc_Char)0x3a,  /* [5125] */
    (xdc_Char)0x20,  /* [5126] */
    (xdc_Char)0x54,  /* [5127] */
    (xdc_Char)0x69,  /* [5128] */
    (xdc_Char)0x6d,  /* [5129] */
    (xdc_Char)0x65,  /* [5130] */
    (xdc_Char)0x72,  /* [5131] */
    (xdc_Char)0x20,  /* [5132] */
    (xdc_Char)0x64,  /* [5133] */
    (xdc_Char)0x6f,  /* [5134] */
    (xdc_Char)0x65,  /* [5135] */
    (xdc_Char)0x73,  /* [5136] */
    (xdc_Char)0x20,  /* [5137] */
    (xdc_Char)0x6e,  /* [5138] */
    (xdc_Char)0x6f,  /* [5139] */
    (xdc_Char)0x74,  /* [5140] */
    (xdc_Char)0x20,  /* [5141] */
    (xdc_Char)0x73,  /* [5142] */
    (xdc_Char)0x75,  /* [5143] */
    (xdc_Char)0x70,  /* [5144] */
    (xdc_Char)0x70,  /* [5145] */
    (xdc_Char)0x6f,  /* [5146] */
    (xdc_Char)0x72,  /* [5147] */
    (xdc_Char)0x74,  /* [5148] */
    (xdc_Char)0x20,  /* [5149] */
    (xdc_Char)0x61,  /* [5150] */
    (xdc_Char)0x6c,  /* [5151] */
    (xdc_Char)0x74,  /* [5152] */
    (xdc_Char)0x63,  /* [5153] */
    (xdc_Char)0x6c,  /* [5154] */
    (xdc_Char)0x6b,  /* [5155] */
    (xdc_Char)0x0,  /* [5156] */
    (xdc_Char)0x3c,  /* [5157] */
    (xdc_Char)0x2d,  /* [5158] */
    (xdc_Char)0x2d,  /* [5159] */
    (xdc_Char)0x20,  /* [5160] */
    (xdc_Char)0x63,  /* [5161] */
    (xdc_Char)0x6f,  /* [5162] */
    (xdc_Char)0x6e,  /* [5163] */
    (xdc_Char)0x73,  /* [5164] */
    (xdc_Char)0x74,  /* [5165] */
    (xdc_Char)0x72,  /* [5166] */
    (xdc_Char)0x75,  /* [5167] */
    (xdc_Char)0x63,  /* [5168] */
    (xdc_Char)0x74,  /* [5169] */
    (xdc_Char)0x3a,  /* [5170] */
    (xdc_Char)0x20,  /* [5171] */
    (xdc_Char)0x25,  /* [5172] */
    (xdc_Char)0x70,  /* [5173] */
    (xdc_Char)0x28,  /* [5174] */
    (xdc_Char)0x27,  /* [5175] */
    (xdc_Char)0x25,  /* [5176] */
    (xdc_Char)0x73,  /* [5177] */
    (xdc_Char)0x27,  /* [5178] */
    (xdc_Char)0x29,  /* [5179] */
    (xdc_Char)0x0,  /* [5180] */
    (xdc_Char)0x3c,  /* [5181] */
    (xdc_Char)0x2d,  /* [5182] */
    (xdc_Char)0x2d,  /* [5183] */
    (xdc_Char)0x20,  /* [5184] */
    (xdc_Char)0x63,  /* [5185] */
    (xdc_Char)0x72,  /* [5186] */
    (xdc_Char)0x65,  /* [5187] */
    (xdc_Char)0x61,  /* [5188] */
    (xdc_Char)0x74,  /* [5189] */
    (xdc_Char)0x65,  /* [5190] */
    (xdc_Char)0x3a,  /* [5191] */
    (xdc_Char)0x20,  /* [5192] */
    (xdc_Char)0x25,  /* [5193] */
    (xdc_Char)0x70,  /* [5194] */
    (xdc_Char)0x28,  /* [5195] */
    (xdc_Char)0x27,  /* [5196] */
    (xdc_Char)0x25,  /* [5197] */
    (xdc_Char)0x73,  /* [5198] */
    (xdc_Char)0x27,  /* [5199] */
    (xdc_Char)0x29,  /* [5200] */
    (xdc_Char)0x0,  /* [5201] */
    (xdc_Char)0x2d,  /* [5202] */
    (xdc_Char)0x2d,  /* [5203] */
    (xdc_Char)0x3e,  /* [5204] */
    (xdc_Char)0x20,  /* [5205] */
    (xdc_Char)0x64,  /* [5206] */
    (xdc_Char)0x65,  /* [5207] */
    (xdc_Char)0x73,  /* [5208] */
    (xdc_Char)0x74,  /* [5209] */
    (xdc_Char)0x72,  /* [5210] */
    (xdc_Char)0x75,  /* [5211] */
    (xdc_Char)0x63,  /* [5212] */
    (xdc_Char)0x74,  /* [5213] */
    (xdc_Char)0x3a,  /* [5214] */
    (xdc_Char)0x20,  /* [5215] */
    (xdc_Char)0x28,  /* [5216] */
    (xdc_Char)0x25,  /* [5217] */
    (xdc_Char)0x70,  /* [5218] */
    (xdc_Char)0x29,  /* [5219] */
    (xdc_Char)0x0,  /* [5220] */
    (xdc_Char)0x2d,  /* [5221] */
    (xdc_Char)0x2d,  /* [5222] */
    (xdc_Char)0x3e,  /* [5223] */
    (xdc_Char)0x20,  /* [5224] */
    (xdc_Char)0x64,  /* [5225] */
    (xdc_Char)0x65,  /* [5226] */
    (xdc_Char)0x6c,  /* [5227] */
    (xdc_Char)0x65,  /* [5228] */
    (xdc_Char)0x74,  /* [5229] */
    (xdc_Char)0x65,  /* [5230] */
    (xdc_Char)0x3a,  /* [5231] */
    (xdc_Char)0x20,  /* [5232] */
    (xdc_Char)0x28,  /* [5233] */
    (xdc_Char)0x25,  /* [5234] */
    (xdc_Char)0x70,  /* [5235] */
    (xdc_Char)0x29,  /* [5236] */
    (xdc_Char)0x0,  /* [5237] */
    (xdc_Char)0x45,  /* [5238] */
    (xdc_Char)0x52,  /* [5239] */
    (xdc_Char)0x52,  /* [5240] */
    (xdc_Char)0x4f,  /* [5241] */
    (xdc_Char)0x52,  /* [5242] */
    (xdc_Char)0x3a,  /* [5243] */
    (xdc_Char)0x20,  /* [5244] */
    (xdc_Char)0x25,  /* [5245] */
    (xdc_Char)0x24,  /* [5246] */
    (xdc_Char)0x46,  /* [5247] */
    (xdc_Char)0x25,  /* [5248] */
    (xdc_Char)0x24,  /* [5249] */
    (xdc_Char)0x53,  /* [5250] */
    (xdc_Char)0x0,  /* [5251] */
    (xdc_Char)0x57,  /* [5252] */
    (xdc_Char)0x41,  /* [5253] */
    (xdc_Char)0x52,  /* [5254] */
    (xdc_Char)0x4e,  /* [5255] */
    (xdc_Char)0x49,  /* [5256] */
    (xdc_Char)0x4e,  /* [5257] */
    (xdc_Char)0x47,  /* [5258] */
    (xdc_Char)0x3a,  /* [5259] */
    (xdc_Char)0x20,  /* [5260] */
    (xdc_Char)0x25,  /* [5261] */
    (xdc_Char)0x24,  /* [5262] */
    (xdc_Char)0x46,  /* [5263] */
    (xdc_Char)0x25,  /* [5264] */
    (xdc_Char)0x24,  /* [5265] */
    (xdc_Char)0x53,  /* [5266] */
    (xdc_Char)0x0,  /* [5267] */
    (xdc_Char)0x25,  /* [5268] */
    (xdc_Char)0x24,  /* [5269] */
    (xdc_Char)0x46,  /* [5270] */
    (xdc_Char)0x25,  /* [5271] */
    (xdc_Char)0x24,  /* [5272] */
    (xdc_Char)0x53,  /* [5273] */
    (xdc_Char)0x0,  /* [5274] */
    (xdc_Char)0x53,  /* [5275] */
    (xdc_Char)0x74,  /* [5276] */
    (xdc_Char)0x61,  /* [5277] */
    (xdc_Char)0x72,  /* [5278] */
    (xdc_Char)0x74,  /* [5279] */
    (xdc_Char)0x3a,  /* [5280] */
    (xdc_Char)0x20,  /* [5281] */
    (xdc_Char)0x25,  /* [5282] */
    (xdc_Char)0x24,  /* [5283] */
    (xdc_Char)0x53,  /* [5284] */
    (xdc_Char)0x0,  /* [5285] */
    (xdc_Char)0x53,  /* [5286] */
    (xdc_Char)0x74,  /* [5287] */
    (xdc_Char)0x6f,  /* [5288] */
    (xdc_Char)0x70,  /* [5289] */
    (xdc_Char)0x3a,  /* [5290] */
    (xdc_Char)0x20,  /* [5291] */
    (xdc_Char)0x25,  /* [5292] */
    (xdc_Char)0x24,  /* [5293] */
    (xdc_Char)0x53,  /* [5294] */
    (xdc_Char)0x0,  /* [5295] */
    (xdc_Char)0x53,  /* [5296] */
    (xdc_Char)0x74,  /* [5297] */
    (xdc_Char)0x61,  /* [5298] */
    (xdc_Char)0x72,  /* [5299] */
    (xdc_Char)0x74,  /* [5300] */
    (xdc_Char)0x49,  /* [5301] */
    (xdc_Char)0x6e,  /* [5302] */
    (xdc_Char)0x73,  /* [5303] */
    (xdc_Char)0x74,  /* [5304] */
    (xdc_Char)0x61,  /* [5305] */
    (xdc_Char)0x6e,  /* [5306] */
    (xdc_Char)0x63,  /* [5307] */
    (xdc_Char)0x65,  /* [5308] */
    (xdc_Char)0x3a,  /* [5309] */
    (xdc_Char)0x20,  /* [5310] */
    (xdc_Char)0x25,  /* [5311] */
    (xdc_Char)0x24,  /* [5312] */
    (xdc_Char)0x53,  /* [5313] */
    (xdc_Char)0x0,  /* [5314] */
    (xdc_Char)0x53,  /* [5315] */
    (xdc_Char)0x74,  /* [5316] */
    (xdc_Char)0x6f,  /* [5317] */
    (xdc_Char)0x70,  /* [5318] */
    (xdc_Char)0x49,  /* [5319] */
    (xdc_Char)0x6e,  /* [5320] */
    (xdc_Char)0x73,  /* [5321] */
    (xdc_Char)0x74,  /* [5322] */
    (xdc_Char)0x61,  /* [5323] */
    (xdc_Char)0x6e,  /* [5324] */
    (xdc_Char)0x63,  /* [5325] */
    (xdc_Char)0x65,  /* [5326] */
    (xdc_Char)0x3a,  /* [5327] */
    (xdc_Char)0x20,  /* [5328] */
    (xdc_Char)0x25,  /* [5329] */
    (xdc_Char)0x24,  /* [5330] */
    (xdc_Char)0x53,  /* [5331] */
    (xdc_Char)0x0,  /* [5332] */
    (xdc_Char)0x4c,  /* [5333] */
    (xdc_Char)0x57,  /* [5334] */
    (xdc_Char)0x5f,  /* [5335] */
    (xdc_Char)0x64,  /* [5336] */
    (xdc_Char)0x65,  /* [5337] */
    (xdc_Char)0x6c,  /* [5338] */
    (xdc_Char)0x61,  /* [5339] */
    (xdc_Char)0x79,  /* [5340] */
    (xdc_Char)0x65,  /* [5341] */
    (xdc_Char)0x64,  /* [5342] */
    (xdc_Char)0x3a,  /* [5343] */
    (xdc_Char)0x20,  /* [5344] */
    (xdc_Char)0x64,  /* [5345] */
    (xdc_Char)0x65,  /* [5346] */
    (xdc_Char)0x6c,  /* [5347] */
    (xdc_Char)0x61,  /* [5348] */
    (xdc_Char)0x79,  /* [5349] */
    (xdc_Char)0x3a,  /* [5350] */
    (xdc_Char)0x20,  /* [5351] */
    (xdc_Char)0x25,  /* [5352] */
    (xdc_Char)0x64,  /* [5353] */
    (xdc_Char)0x0,  /* [5354] */
    (xdc_Char)0x4c,  /* [5355] */
    (xdc_Char)0x4d,  /* [5356] */
    (xdc_Char)0x5f,  /* [5357] */
    (xdc_Char)0x74,  /* [5358] */
    (xdc_Char)0x69,  /* [5359] */
    (xdc_Char)0x63,  /* [5360] */
    (xdc_Char)0x6b,  /* [5361] */
    (xdc_Char)0x3a,  /* [5362] */
    (xdc_Char)0x20,  /* [5363] */
    (xdc_Char)0x74,  /* [5364] */
    (xdc_Char)0x69,  /* [5365] */
    (xdc_Char)0x63,  /* [5366] */
    (xdc_Char)0x6b,  /* [5367] */
    (xdc_Char)0x3a,  /* [5368] */
    (xdc_Char)0x20,  /* [5369] */
    (xdc_Char)0x25,  /* [5370] */
    (xdc_Char)0x64,  /* [5371] */
    (xdc_Char)0x0,  /* [5372] */
    (xdc_Char)0x4c,  /* [5373] */
    (xdc_Char)0x4d,  /* [5374] */
    (xdc_Char)0x5f,  /* [5375] */
    (xdc_Char)0x62,  /* [5376] */
    (xdc_Char)0x65,  /* [5377] */
    (xdc_Char)0x67,  /* [5378] */
    (xdc_Char)0x69,  /* [5379] */
    (xdc_Char)0x6e,  /* [5380] */
    (xdc_Char)0x3a,  /* [5381] */
    (xdc_Char)0x20,  /* [5382] */
    (xdc_Char)0x63,  /* [5383] */
    (xdc_Char)0x6c,  /* [5384] */
    (xdc_Char)0x6b,  /* [5385] */
    (xdc_Char)0x3a,  /* [5386] */
    (xdc_Char)0x20,  /* [5387] */
    (xdc_Char)0x30,  /* [5388] */
    (xdc_Char)0x78,  /* [5389] */
    (xdc_Char)0x25,  /* [5390] */
    (xdc_Char)0x78,  /* [5391] */
    (xdc_Char)0x2c,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x66,  /* [5394] */
    (xdc_Char)0x75,  /* [5395] */
    (xdc_Char)0x6e,  /* [5396] */
    (xdc_Char)0x63,  /* [5397] */
    (xdc_Char)0x3a,  /* [5398] */
    (xdc_Char)0x20,  /* [5399] */
    (xdc_Char)0x30,  /* [5400] */
    (xdc_Char)0x78,  /* [5401] */
    (xdc_Char)0x25,  /* [5402] */
    (xdc_Char)0x78,  /* [5403] */
    (xdc_Char)0x0,  /* [5404] */
    (xdc_Char)0x4c,  /* [5405] */
    (xdc_Char)0x4d,  /* [5406] */
    (xdc_Char)0x5f,  /* [5407] */
    (xdc_Char)0x70,  /* [5408] */
    (xdc_Char)0x6f,  /* [5409] */
    (xdc_Char)0x73,  /* [5410] */
    (xdc_Char)0x74,  /* [5411] */
    (xdc_Char)0x3a,  /* [5412] */
    (xdc_Char)0x20,  /* [5413] */
    (xdc_Char)0x65,  /* [5414] */
    (xdc_Char)0x76,  /* [5415] */
    (xdc_Char)0x65,  /* [5416] */
    (xdc_Char)0x6e,  /* [5417] */
    (xdc_Char)0x74,  /* [5418] */
    (xdc_Char)0x3a,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x30,  /* [5421] */
    (xdc_Char)0x78,  /* [5422] */
    (xdc_Char)0x25,  /* [5423] */
    (xdc_Char)0x78,  /* [5424] */
    (xdc_Char)0x2c,  /* [5425] */
    (xdc_Char)0x20,  /* [5426] */
    (xdc_Char)0x63,  /* [5427] */
    (xdc_Char)0x75,  /* [5428] */
    (xdc_Char)0x72,  /* [5429] */
    (xdc_Char)0x72,  /* [5430] */
    (xdc_Char)0x45,  /* [5431] */
    (xdc_Char)0x76,  /* [5432] */
    (xdc_Char)0x65,  /* [5433] */
    (xdc_Char)0x6e,  /* [5434] */
    (xdc_Char)0x74,  /* [5435] */
    (xdc_Char)0x73,  /* [5436] */
    (xdc_Char)0x3a,  /* [5437] */
    (xdc_Char)0x20,  /* [5438] */
    (xdc_Char)0x30,  /* [5439] */
    (xdc_Char)0x78,  /* [5440] */
    (xdc_Char)0x25,  /* [5441] */
    (xdc_Char)0x78,  /* [5442] */
    (xdc_Char)0x2c,  /* [5443] */
    (xdc_Char)0x20,  /* [5444] */
    (xdc_Char)0x65,  /* [5445] */
    (xdc_Char)0x76,  /* [5446] */
    (xdc_Char)0x65,  /* [5447] */
    (xdc_Char)0x6e,  /* [5448] */
    (xdc_Char)0x74,  /* [5449] */
    (xdc_Char)0x49,  /* [5450] */
    (xdc_Char)0x64,  /* [5451] */
    (xdc_Char)0x3a,  /* [5452] */
    (xdc_Char)0x20,  /* [5453] */
    (xdc_Char)0x30,  /* [5454] */
    (xdc_Char)0x78,  /* [5455] */
    (xdc_Char)0x25,  /* [5456] */
    (xdc_Char)0x78,  /* [5457] */
    (xdc_Char)0x0,  /* [5458] */
    (xdc_Char)0x4c,  /* [5459] */
    (xdc_Char)0x4d,  /* [5460] */
    (xdc_Char)0x5f,  /* [5461] */
    (xdc_Char)0x70,  /* [5462] */
    (xdc_Char)0x65,  /* [5463] */
    (xdc_Char)0x6e,  /* [5464] */
    (xdc_Char)0x64,  /* [5465] */
    (xdc_Char)0x3a,  /* [5466] */
    (xdc_Char)0x20,  /* [5467] */
    (xdc_Char)0x65,  /* [5468] */
    (xdc_Char)0x76,  /* [5469] */
    (xdc_Char)0x65,  /* [5470] */
    (xdc_Char)0x6e,  /* [5471] */
    (xdc_Char)0x74,  /* [5472] */
    (xdc_Char)0x3a,  /* [5473] */
    (xdc_Char)0x20,  /* [5474] */
    (xdc_Char)0x30,  /* [5475] */
    (xdc_Char)0x78,  /* [5476] */
    (xdc_Char)0x25,  /* [5477] */
    (xdc_Char)0x78,  /* [5478] */
    (xdc_Char)0x2c,  /* [5479] */
    (xdc_Char)0x20,  /* [5480] */
    (xdc_Char)0x63,  /* [5481] */
    (xdc_Char)0x75,  /* [5482] */
    (xdc_Char)0x72,  /* [5483] */
    (xdc_Char)0x72,  /* [5484] */
    (xdc_Char)0x45,  /* [5485] */
    (xdc_Char)0x76,  /* [5486] */
    (xdc_Char)0x65,  /* [5487] */
    (xdc_Char)0x6e,  /* [5488] */
    (xdc_Char)0x74,  /* [5489] */
    (xdc_Char)0x73,  /* [5490] */
    (xdc_Char)0x3a,  /* [5491] */
    (xdc_Char)0x20,  /* [5492] */
    (xdc_Char)0x30,  /* [5493] */
    (xdc_Char)0x78,  /* [5494] */
    (xdc_Char)0x25,  /* [5495] */
    (xdc_Char)0x78,  /* [5496] */
    (xdc_Char)0x2c,  /* [5497] */
    (xdc_Char)0x20,  /* [5498] */
    (xdc_Char)0x61,  /* [5499] */
    (xdc_Char)0x6e,  /* [5500] */
    (xdc_Char)0x64,  /* [5501] */
    (xdc_Char)0x4d,  /* [5502] */
    (xdc_Char)0x61,  /* [5503] */
    (xdc_Char)0x73,  /* [5504] */
    (xdc_Char)0x6b,  /* [5505] */
    (xdc_Char)0x3a,  /* [5506] */
    (xdc_Char)0x20,  /* [5507] */
    (xdc_Char)0x30,  /* [5508] */
    (xdc_Char)0x78,  /* [5509] */
    (xdc_Char)0x25,  /* [5510] */
    (xdc_Char)0x78,  /* [5511] */
    (xdc_Char)0x2c,  /* [5512] */
    (xdc_Char)0x20,  /* [5513] */
    (xdc_Char)0x6f,  /* [5514] */
    (xdc_Char)0x72,  /* [5515] */
    (xdc_Char)0x4d,  /* [5516] */
    (xdc_Char)0x61,  /* [5517] */
    (xdc_Char)0x73,  /* [5518] */
    (xdc_Char)0x6b,  /* [5519] */
    (xdc_Char)0x3a,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x30,  /* [5522] */
    (xdc_Char)0x78,  /* [5523] */
    (xdc_Char)0x25,  /* [5524] */
    (xdc_Char)0x78,  /* [5525] */
    (xdc_Char)0x2c,  /* [5526] */
    (xdc_Char)0x20,  /* [5527] */
    (xdc_Char)0x74,  /* [5528] */
    (xdc_Char)0x69,  /* [5529] */
    (xdc_Char)0x6d,  /* [5530] */
    (xdc_Char)0x65,  /* [5531] */
    (xdc_Char)0x6f,  /* [5532] */
    (xdc_Char)0x75,  /* [5533] */
    (xdc_Char)0x74,  /* [5534] */
    (xdc_Char)0x3a,  /* [5535] */
    (xdc_Char)0x20,  /* [5536] */
    (xdc_Char)0x25,  /* [5537] */
    (xdc_Char)0x64,  /* [5538] */
    (xdc_Char)0x0,  /* [5539] */
    (xdc_Char)0x4c,  /* [5540] */
    (xdc_Char)0x4d,  /* [5541] */
    (xdc_Char)0x5f,  /* [5542] */
    (xdc_Char)0x70,  /* [5543] */
    (xdc_Char)0x6f,  /* [5544] */
    (xdc_Char)0x73,  /* [5545] */
    (xdc_Char)0x74,  /* [5546] */
    (xdc_Char)0x3a,  /* [5547] */
    (xdc_Char)0x20,  /* [5548] */
    (xdc_Char)0x73,  /* [5549] */
    (xdc_Char)0x65,  /* [5550] */
    (xdc_Char)0x6d,  /* [5551] */
    (xdc_Char)0x3a,  /* [5552] */
    (xdc_Char)0x20,  /* [5553] */
    (xdc_Char)0x30,  /* [5554] */
    (xdc_Char)0x78,  /* [5555] */
    (xdc_Char)0x25,  /* [5556] */
    (xdc_Char)0x78,  /* [5557] */
    (xdc_Char)0x2c,  /* [5558] */
    (xdc_Char)0x20,  /* [5559] */
    (xdc_Char)0x63,  /* [5560] */
    (xdc_Char)0x6f,  /* [5561] */
    (xdc_Char)0x75,  /* [5562] */
    (xdc_Char)0x6e,  /* [5563] */
    (xdc_Char)0x74,  /* [5564] */
    (xdc_Char)0x3a,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x25,  /* [5567] */
    (xdc_Char)0x64,  /* [5568] */
    (xdc_Char)0x0,  /* [5569] */
    (xdc_Char)0x4c,  /* [5570] */
    (xdc_Char)0x4d,  /* [5571] */
    (xdc_Char)0x5f,  /* [5572] */
    (xdc_Char)0x70,  /* [5573] */
    (xdc_Char)0x65,  /* [5574] */
    (xdc_Char)0x6e,  /* [5575] */
    (xdc_Char)0x64,  /* [5576] */
    (xdc_Char)0x3a,  /* [5577] */
    (xdc_Char)0x20,  /* [5578] */
    (xdc_Char)0x73,  /* [5579] */
    (xdc_Char)0x65,  /* [5580] */
    (xdc_Char)0x6d,  /* [5581] */
    (xdc_Char)0x3a,  /* [5582] */
    (xdc_Char)0x20,  /* [5583] */
    (xdc_Char)0x30,  /* [5584] */
    (xdc_Char)0x78,  /* [5585] */
    (xdc_Char)0x25,  /* [5586] */
    (xdc_Char)0x78,  /* [5587] */
    (xdc_Char)0x2c,  /* [5588] */
    (xdc_Char)0x20,  /* [5589] */
    (xdc_Char)0x63,  /* [5590] */
    (xdc_Char)0x6f,  /* [5591] */
    (xdc_Char)0x75,  /* [5592] */
    (xdc_Char)0x6e,  /* [5593] */
    (xdc_Char)0x74,  /* [5594] */
    (xdc_Char)0x3a,  /* [5595] */
    (xdc_Char)0x20,  /* [5596] */
    (xdc_Char)0x25,  /* [5597] */
    (xdc_Char)0x64,  /* [5598] */
    (xdc_Char)0x2c,  /* [5599] */
    (xdc_Char)0x20,  /* [5600] */
    (xdc_Char)0x74,  /* [5601] */
    (xdc_Char)0x69,  /* [5602] */
    (xdc_Char)0x6d,  /* [5603] */
    (xdc_Char)0x65,  /* [5604] */
    (xdc_Char)0x6f,  /* [5605] */
    (xdc_Char)0x75,  /* [5606] */
    (xdc_Char)0x74,  /* [5607] */
    (xdc_Char)0x3a,  /* [5608] */
    (xdc_Char)0x20,  /* [5609] */
    (xdc_Char)0x25,  /* [5610] */
    (xdc_Char)0x64,  /* [5611] */
    (xdc_Char)0x0,  /* [5612] */
    (xdc_Char)0x4c,  /* [5613] */
    (xdc_Char)0x4d,  /* [5614] */
    (xdc_Char)0x5f,  /* [5615] */
    (xdc_Char)0x62,  /* [5616] */
    (xdc_Char)0x65,  /* [5617] */
    (xdc_Char)0x67,  /* [5618] */
    (xdc_Char)0x69,  /* [5619] */
    (xdc_Char)0x6e,  /* [5620] */
    (xdc_Char)0x3a,  /* [5621] */
    (xdc_Char)0x20,  /* [5622] */
    (xdc_Char)0x73,  /* [5623] */
    (xdc_Char)0x77,  /* [5624] */
    (xdc_Char)0x69,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x30,  /* [5628] */
    (xdc_Char)0x78,  /* [5629] */
    (xdc_Char)0x25,  /* [5630] */
    (xdc_Char)0x78,  /* [5631] */
    (xdc_Char)0x2c,  /* [5632] */
    (xdc_Char)0x20,  /* [5633] */
    (xdc_Char)0x66,  /* [5634] */
    (xdc_Char)0x75,  /* [5635] */
    (xdc_Char)0x6e,  /* [5636] */
    (xdc_Char)0x63,  /* [5637] */
    (xdc_Char)0x3a,  /* [5638] */
    (xdc_Char)0x20,  /* [5639] */
    (xdc_Char)0x30,  /* [5640] */
    (xdc_Char)0x78,  /* [5641] */
    (xdc_Char)0x25,  /* [5642] */
    (xdc_Char)0x78,  /* [5643] */
    (xdc_Char)0x2c,  /* [5644] */
    (xdc_Char)0x20,  /* [5645] */
    (xdc_Char)0x70,  /* [5646] */
    (xdc_Char)0x72,  /* [5647] */
    (xdc_Char)0x65,  /* [5648] */
    (xdc_Char)0x54,  /* [5649] */
    (xdc_Char)0x68,  /* [5650] */
    (xdc_Char)0x72,  /* [5651] */
    (xdc_Char)0x65,  /* [5652] */
    (xdc_Char)0x61,  /* [5653] */
    (xdc_Char)0x64,  /* [5654] */
    (xdc_Char)0x3a,  /* [5655] */
    (xdc_Char)0x20,  /* [5656] */
    (xdc_Char)0x25,  /* [5657] */
    (xdc_Char)0x64,  /* [5658] */
    (xdc_Char)0x0,  /* [5659] */
    (xdc_Char)0x4c,  /* [5660] */
    (xdc_Char)0x44,  /* [5661] */
    (xdc_Char)0x5f,  /* [5662] */
    (xdc_Char)0x65,  /* [5663] */
    (xdc_Char)0x6e,  /* [5664] */
    (xdc_Char)0x64,  /* [5665] */
    (xdc_Char)0x3a,  /* [5666] */
    (xdc_Char)0x20,  /* [5667] */
    (xdc_Char)0x73,  /* [5668] */
    (xdc_Char)0x77,  /* [5669] */
    (xdc_Char)0x69,  /* [5670] */
    (xdc_Char)0x3a,  /* [5671] */
    (xdc_Char)0x20,  /* [5672] */
    (xdc_Char)0x30,  /* [5673] */
    (xdc_Char)0x78,  /* [5674] */
    (xdc_Char)0x25,  /* [5675] */
    (xdc_Char)0x78,  /* [5676] */
    (xdc_Char)0x0,  /* [5677] */
    (xdc_Char)0x4c,  /* [5678] */
    (xdc_Char)0x4d,  /* [5679] */
    (xdc_Char)0x5f,  /* [5680] */
    (xdc_Char)0x70,  /* [5681] */
    (xdc_Char)0x6f,  /* [5682] */
    (xdc_Char)0x73,  /* [5683] */
    (xdc_Char)0x74,  /* [5684] */
    (xdc_Char)0x3a,  /* [5685] */
    (xdc_Char)0x20,  /* [5686] */
    (xdc_Char)0x73,  /* [5687] */
    (xdc_Char)0x77,  /* [5688] */
    (xdc_Char)0x69,  /* [5689] */
    (xdc_Char)0x3a,  /* [5690] */
    (xdc_Char)0x20,  /* [5691] */
    (xdc_Char)0x30,  /* [5692] */
    (xdc_Char)0x78,  /* [5693] */
    (xdc_Char)0x25,  /* [5694] */
    (xdc_Char)0x78,  /* [5695] */
    (xdc_Char)0x2c,  /* [5696] */
    (xdc_Char)0x20,  /* [5697] */
    (xdc_Char)0x66,  /* [5698] */
    (xdc_Char)0x75,  /* [5699] */
    (xdc_Char)0x6e,  /* [5700] */
    (xdc_Char)0x63,  /* [5701] */
    (xdc_Char)0x3a,  /* [5702] */
    (xdc_Char)0x20,  /* [5703] */
    (xdc_Char)0x30,  /* [5704] */
    (xdc_Char)0x78,  /* [5705] */
    (xdc_Char)0x25,  /* [5706] */
    (xdc_Char)0x78,  /* [5707] */
    (xdc_Char)0x2c,  /* [5708] */
    (xdc_Char)0x20,  /* [5709] */
    (xdc_Char)0x70,  /* [5710] */
    (xdc_Char)0x72,  /* [5711] */
    (xdc_Char)0x69,  /* [5712] */
    (xdc_Char)0x3a,  /* [5713] */
    (xdc_Char)0x20,  /* [5714] */
    (xdc_Char)0x25,  /* [5715] */
    (xdc_Char)0x64,  /* [5716] */
    (xdc_Char)0x0,  /* [5717] */
    (xdc_Char)0x4c,  /* [5718] */
    (xdc_Char)0x4d,  /* [5719] */
    (xdc_Char)0x5f,  /* [5720] */
    (xdc_Char)0x73,  /* [5721] */
    (xdc_Char)0x77,  /* [5722] */
    (xdc_Char)0x69,  /* [5723] */
    (xdc_Char)0x74,  /* [5724] */
    (xdc_Char)0x63,  /* [5725] */
    (xdc_Char)0x68,  /* [5726] */
    (xdc_Char)0x3a,  /* [5727] */
    (xdc_Char)0x20,  /* [5728] */
    (xdc_Char)0x6f,  /* [5729] */
    (xdc_Char)0x6c,  /* [5730] */
    (xdc_Char)0x64,  /* [5731] */
    (xdc_Char)0x74,  /* [5732] */
    (xdc_Char)0x73,  /* [5733] */
    (xdc_Char)0x6b,  /* [5734] */
    (xdc_Char)0x3a,  /* [5735] */
    (xdc_Char)0x20,  /* [5736] */
    (xdc_Char)0x30,  /* [5737] */
    (xdc_Char)0x78,  /* [5738] */
    (xdc_Char)0x25,  /* [5739] */
    (xdc_Char)0x78,  /* [5740] */
    (xdc_Char)0x2c,  /* [5741] */
    (xdc_Char)0x20,  /* [5742] */
    (xdc_Char)0x6f,  /* [5743] */
    (xdc_Char)0x6c,  /* [5744] */
    (xdc_Char)0x64,  /* [5745] */
    (xdc_Char)0x66,  /* [5746] */
    (xdc_Char)0x75,  /* [5747] */
    (xdc_Char)0x6e,  /* [5748] */
    (xdc_Char)0x63,  /* [5749] */
    (xdc_Char)0x3a,  /* [5750] */
    (xdc_Char)0x20,  /* [5751] */
    (xdc_Char)0x30,  /* [5752] */
    (xdc_Char)0x78,  /* [5753] */
    (xdc_Char)0x25,  /* [5754] */
    (xdc_Char)0x78,  /* [5755] */
    (xdc_Char)0x2c,  /* [5756] */
    (xdc_Char)0x20,  /* [5757] */
    (xdc_Char)0x6e,  /* [5758] */
    (xdc_Char)0x65,  /* [5759] */
    (xdc_Char)0x77,  /* [5760] */
    (xdc_Char)0x74,  /* [5761] */
    (xdc_Char)0x73,  /* [5762] */
    (xdc_Char)0x6b,  /* [5763] */
    (xdc_Char)0x3a,  /* [5764] */
    (xdc_Char)0x20,  /* [5765] */
    (xdc_Char)0x30,  /* [5766] */
    (xdc_Char)0x78,  /* [5767] */
    (xdc_Char)0x25,  /* [5768] */
    (xdc_Char)0x78,  /* [5769] */
    (xdc_Char)0x2c,  /* [5770] */
    (xdc_Char)0x20,  /* [5771] */
    (xdc_Char)0x6e,  /* [5772] */
    (xdc_Char)0x65,  /* [5773] */
    (xdc_Char)0x77,  /* [5774] */
    (xdc_Char)0x66,  /* [5775] */
    (xdc_Char)0x75,  /* [5776] */
    (xdc_Char)0x6e,  /* [5777] */
    (xdc_Char)0x63,  /* [5778] */
    (xdc_Char)0x3a,  /* [5779] */
    (xdc_Char)0x20,  /* [5780] */
    (xdc_Char)0x30,  /* [5781] */
    (xdc_Char)0x78,  /* [5782] */
    (xdc_Char)0x25,  /* [5783] */
    (xdc_Char)0x78,  /* [5784] */
    (xdc_Char)0x0,  /* [5785] */
    (xdc_Char)0x4c,  /* [5786] */
    (xdc_Char)0x4d,  /* [5787] */
    (xdc_Char)0x5f,  /* [5788] */
    (xdc_Char)0x73,  /* [5789] */
    (xdc_Char)0x6c,  /* [5790] */
    (xdc_Char)0x65,  /* [5791] */
    (xdc_Char)0x65,  /* [5792] */
    (xdc_Char)0x70,  /* [5793] */
    (xdc_Char)0x3a,  /* [5794] */
    (xdc_Char)0x20,  /* [5795] */
    (xdc_Char)0x74,  /* [5796] */
    (xdc_Char)0x73,  /* [5797] */
    (xdc_Char)0x6b,  /* [5798] */
    (xdc_Char)0x3a,  /* [5799] */
    (xdc_Char)0x20,  /* [5800] */
    (xdc_Char)0x30,  /* [5801] */
    (xdc_Char)0x78,  /* [5802] */
    (xdc_Char)0x25,  /* [5803] */
    (xdc_Char)0x78,  /* [5804] */
    (xdc_Char)0x2c,  /* [5805] */
    (xdc_Char)0x20,  /* [5806] */
    (xdc_Char)0x66,  /* [5807] */
    (xdc_Char)0x75,  /* [5808] */
    (xdc_Char)0x6e,  /* [5809] */
    (xdc_Char)0x63,  /* [5810] */
    (xdc_Char)0x3a,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x30,  /* [5813] */
    (xdc_Char)0x78,  /* [5814] */
    (xdc_Char)0x25,  /* [5815] */
    (xdc_Char)0x78,  /* [5816] */
    (xdc_Char)0x2c,  /* [5817] */
    (xdc_Char)0x20,  /* [5818] */
    (xdc_Char)0x74,  /* [5819] */
    (xdc_Char)0x69,  /* [5820] */
    (xdc_Char)0x6d,  /* [5821] */
    (xdc_Char)0x65,  /* [5822] */
    (xdc_Char)0x6f,  /* [5823] */
    (xdc_Char)0x75,  /* [5824] */
    (xdc_Char)0x74,  /* [5825] */
    (xdc_Char)0x3a,  /* [5826] */
    (xdc_Char)0x20,  /* [5827] */
    (xdc_Char)0x25,  /* [5828] */
    (xdc_Char)0x64,  /* [5829] */
    (xdc_Char)0x0,  /* [5830] */
    (xdc_Char)0x4c,  /* [5831] */
    (xdc_Char)0x44,  /* [5832] */
    (xdc_Char)0x5f,  /* [5833] */
    (xdc_Char)0x72,  /* [5834] */
    (xdc_Char)0x65,  /* [5835] */
    (xdc_Char)0x61,  /* [5836] */
    (xdc_Char)0x64,  /* [5837] */
    (xdc_Char)0x79,  /* [5838] */
    (xdc_Char)0x3a,  /* [5839] */
    (xdc_Char)0x20,  /* [5840] */
    (xdc_Char)0x74,  /* [5841] */
    (xdc_Char)0x73,  /* [5842] */
    (xdc_Char)0x6b,  /* [5843] */
    (xdc_Char)0x3a,  /* [5844] */
    (xdc_Char)0x20,  /* [5845] */
    (xdc_Char)0x30,  /* [5846] */
    (xdc_Char)0x78,  /* [5847] */
    (xdc_Char)0x25,  /* [5848] */
    (xdc_Char)0x78,  /* [5849] */
    (xdc_Char)0x2c,  /* [5850] */
    (xdc_Char)0x20,  /* [5851] */
    (xdc_Char)0x66,  /* [5852] */
    (xdc_Char)0x75,  /* [5853] */
    (xdc_Char)0x6e,  /* [5854] */
    (xdc_Char)0x63,  /* [5855] */
    (xdc_Char)0x3a,  /* [5856] */
    (xdc_Char)0x20,  /* [5857] */
    (xdc_Char)0x30,  /* [5858] */
    (xdc_Char)0x78,  /* [5859] */
    (xdc_Char)0x25,  /* [5860] */
    (xdc_Char)0x78,  /* [5861] */
    (xdc_Char)0x2c,  /* [5862] */
    (xdc_Char)0x20,  /* [5863] */
    (xdc_Char)0x70,  /* [5864] */
    (xdc_Char)0x72,  /* [5865] */
    (xdc_Char)0x69,  /* [5866] */
    (xdc_Char)0x3a,  /* [5867] */
    (xdc_Char)0x20,  /* [5868] */
    (xdc_Char)0x25,  /* [5869] */
    (xdc_Char)0x64,  /* [5870] */
    (xdc_Char)0x0,  /* [5871] */
    (xdc_Char)0x4c,  /* [5872] */
    (xdc_Char)0x44,  /* [5873] */
    (xdc_Char)0x5f,  /* [5874] */
    (xdc_Char)0x62,  /* [5875] */
    (xdc_Char)0x6c,  /* [5876] */
    (xdc_Char)0x6f,  /* [5877] */
    (xdc_Char)0x63,  /* [5878] */
    (xdc_Char)0x6b,  /* [5879] */
    (xdc_Char)0x3a,  /* [5880] */
    (xdc_Char)0x20,  /* [5881] */
    (xdc_Char)0x74,  /* [5882] */
    (xdc_Char)0x73,  /* [5883] */
    (xdc_Char)0x6b,  /* [5884] */
    (xdc_Char)0x3a,  /* [5885] */
    (xdc_Char)0x20,  /* [5886] */
    (xdc_Char)0x30,  /* [5887] */
    (xdc_Char)0x78,  /* [5888] */
    (xdc_Char)0x25,  /* [5889] */
    (xdc_Char)0x78,  /* [5890] */
    (xdc_Char)0x2c,  /* [5891] */
    (xdc_Char)0x20,  /* [5892] */
    (xdc_Char)0x66,  /* [5893] */
    (xdc_Char)0x75,  /* [5894] */
    (xdc_Char)0x6e,  /* [5895] */
    (xdc_Char)0x63,  /* [5896] */
    (xdc_Char)0x3a,  /* [5897] */
    (xdc_Char)0x20,  /* [5898] */
    (xdc_Char)0x30,  /* [5899] */
    (xdc_Char)0x78,  /* [5900] */
    (xdc_Char)0x25,  /* [5901] */
    (xdc_Char)0x78,  /* [5902] */
    (xdc_Char)0x0,  /* [5903] */
    (xdc_Char)0x4c,  /* [5904] */
    (xdc_Char)0x4d,  /* [5905] */
    (xdc_Char)0x5f,  /* [5906] */
    (xdc_Char)0x79,  /* [5907] */
    (xdc_Char)0x69,  /* [5908] */
    (xdc_Char)0x65,  /* [5909] */
    (xdc_Char)0x6c,  /* [5910] */
    (xdc_Char)0x64,  /* [5911] */
    (xdc_Char)0x3a,  /* [5912] */
    (xdc_Char)0x20,  /* [5913] */
    (xdc_Char)0x74,  /* [5914] */
    (xdc_Char)0x73,  /* [5915] */
    (xdc_Char)0x6b,  /* [5916] */
    (xdc_Char)0x3a,  /* [5917] */
    (xdc_Char)0x20,  /* [5918] */
    (xdc_Char)0x30,  /* [5919] */
    (xdc_Char)0x78,  /* [5920] */
    (xdc_Char)0x25,  /* [5921] */
    (xdc_Char)0x78,  /* [5922] */
    (xdc_Char)0x2c,  /* [5923] */
    (xdc_Char)0x20,  /* [5924] */
    (xdc_Char)0x66,  /* [5925] */
    (xdc_Char)0x75,  /* [5926] */
    (xdc_Char)0x6e,  /* [5927] */
    (xdc_Char)0x63,  /* [5928] */
    (xdc_Char)0x3a,  /* [5929] */
    (xdc_Char)0x20,  /* [5930] */
    (xdc_Char)0x30,  /* [5931] */
    (xdc_Char)0x78,  /* [5932] */
    (xdc_Char)0x25,  /* [5933] */
    (xdc_Char)0x78,  /* [5934] */
    (xdc_Char)0x2c,  /* [5935] */
    (xdc_Char)0x20,  /* [5936] */
    (xdc_Char)0x63,  /* [5937] */
    (xdc_Char)0x75,  /* [5938] */
    (xdc_Char)0x72,  /* [5939] */
    (xdc_Char)0x72,  /* [5940] */
    (xdc_Char)0x54,  /* [5941] */
    (xdc_Char)0x68,  /* [5942] */
    (xdc_Char)0x72,  /* [5943] */
    (xdc_Char)0x65,  /* [5944] */
    (xdc_Char)0x61,  /* [5945] */
    (xdc_Char)0x64,  /* [5946] */
    (xdc_Char)0x3a,  /* [5947] */
    (xdc_Char)0x20,  /* [5948] */
    (xdc_Char)0x25,  /* [5949] */
    (xdc_Char)0x64,  /* [5950] */
    (xdc_Char)0x0,  /* [5951] */
    (xdc_Char)0x4c,  /* [5952] */
    (xdc_Char)0x4d,  /* [5953] */
    (xdc_Char)0x5f,  /* [5954] */
    (xdc_Char)0x73,  /* [5955] */
    (xdc_Char)0x65,  /* [5956] */
    (xdc_Char)0x74,  /* [5957] */
    (xdc_Char)0x50,  /* [5958] */
    (xdc_Char)0x72,  /* [5959] */
    (xdc_Char)0x69,  /* [5960] */
    (xdc_Char)0x3a,  /* [5961] */
    (xdc_Char)0x20,  /* [5962] */
    (xdc_Char)0x74,  /* [5963] */
    (xdc_Char)0x73,  /* [5964] */
    (xdc_Char)0x6b,  /* [5965] */
    (xdc_Char)0x3a,  /* [5966] */
    (xdc_Char)0x20,  /* [5967] */
    (xdc_Char)0x30,  /* [5968] */
    (xdc_Char)0x78,  /* [5969] */
    (xdc_Char)0x25,  /* [5970] */
    (xdc_Char)0x78,  /* [5971] */
    (xdc_Char)0x2c,  /* [5972] */
    (xdc_Char)0x20,  /* [5973] */
    (xdc_Char)0x66,  /* [5974] */
    (xdc_Char)0x75,  /* [5975] */
    (xdc_Char)0x6e,  /* [5976] */
    (xdc_Char)0x63,  /* [5977] */
    (xdc_Char)0x3a,  /* [5978] */
    (xdc_Char)0x20,  /* [5979] */
    (xdc_Char)0x30,  /* [5980] */
    (xdc_Char)0x78,  /* [5981] */
    (xdc_Char)0x25,  /* [5982] */
    (xdc_Char)0x78,  /* [5983] */
    (xdc_Char)0x2c,  /* [5984] */
    (xdc_Char)0x20,  /* [5985] */
    (xdc_Char)0x6f,  /* [5986] */
    (xdc_Char)0x6c,  /* [5987] */
    (xdc_Char)0x64,  /* [5988] */
    (xdc_Char)0x50,  /* [5989] */
    (xdc_Char)0x72,  /* [5990] */
    (xdc_Char)0x69,  /* [5991] */
    (xdc_Char)0x3a,  /* [5992] */
    (xdc_Char)0x20,  /* [5993] */
    (xdc_Char)0x25,  /* [5994] */
    (xdc_Char)0x64,  /* [5995] */
    (xdc_Char)0x2c,  /* [5996] */
    (xdc_Char)0x20,  /* [5997] */
    (xdc_Char)0x6e,  /* [5998] */
    (xdc_Char)0x65,  /* [5999] */
    (xdc_Char)0x77,  /* [6000] */
    (xdc_Char)0x50,  /* [6001] */
    (xdc_Char)0x72,  /* [6002] */
    (xdc_Char)0x69,  /* [6003] */
    (xdc_Char)0x20,  /* [6004] */
    (xdc_Char)0x25,  /* [6005] */
    (xdc_Char)0x64,  /* [6006] */
    (xdc_Char)0x0,  /* [6007] */
    (xdc_Char)0x4c,  /* [6008] */
    (xdc_Char)0x44,  /* [6009] */
    (xdc_Char)0x5f,  /* [6010] */
    (xdc_Char)0x65,  /* [6011] */
    (xdc_Char)0x78,  /* [6012] */
    (xdc_Char)0x69,  /* [6013] */
    (xdc_Char)0x74,  /* [6014] */
    (xdc_Char)0x3a,  /* [6015] */
    (xdc_Char)0x20,  /* [6016] */
    (xdc_Char)0x74,  /* [6017] */
    (xdc_Char)0x73,  /* [6018] */
    (xdc_Char)0x6b,  /* [6019] */
    (xdc_Char)0x3a,  /* [6020] */
    (xdc_Char)0x20,  /* [6021] */
    (xdc_Char)0x30,  /* [6022] */
    (xdc_Char)0x78,  /* [6023] */
    (xdc_Char)0x25,  /* [6024] */
    (xdc_Char)0x78,  /* [6025] */
    (xdc_Char)0x2c,  /* [6026] */
    (xdc_Char)0x20,  /* [6027] */
    (xdc_Char)0x66,  /* [6028] */
    (xdc_Char)0x75,  /* [6029] */
    (xdc_Char)0x6e,  /* [6030] */
    (xdc_Char)0x63,  /* [6031] */
    (xdc_Char)0x3a,  /* [6032] */
    (xdc_Char)0x20,  /* [6033] */
    (xdc_Char)0x30,  /* [6034] */
    (xdc_Char)0x78,  /* [6035] */
    (xdc_Char)0x25,  /* [6036] */
    (xdc_Char)0x78,  /* [6037] */
    (xdc_Char)0x0,  /* [6038] */
    (xdc_Char)0x4c,  /* [6039] */
    (xdc_Char)0x4d,  /* [6040] */
    (xdc_Char)0x5f,  /* [6041] */
    (xdc_Char)0x73,  /* [6042] */
    (xdc_Char)0x65,  /* [6043] */
    (xdc_Char)0x74,  /* [6044] */
    (xdc_Char)0x41,  /* [6045] */
    (xdc_Char)0x66,  /* [6046] */
    (xdc_Char)0x66,  /* [6047] */
    (xdc_Char)0x69,  /* [6048] */
    (xdc_Char)0x6e,  /* [6049] */
    (xdc_Char)0x69,  /* [6050] */
    (xdc_Char)0x74,  /* [6051] */
    (xdc_Char)0x79,  /* [6052] */
    (xdc_Char)0x3a,  /* [6053] */
    (xdc_Char)0x20,  /* [6054] */
    (xdc_Char)0x74,  /* [6055] */
    (xdc_Char)0x73,  /* [6056] */
    (xdc_Char)0x6b,  /* [6057] */
    (xdc_Char)0x3a,  /* [6058] */
    (xdc_Char)0x20,  /* [6059] */
    (xdc_Char)0x30,  /* [6060] */
    (xdc_Char)0x78,  /* [6061] */
    (xdc_Char)0x25,  /* [6062] */
    (xdc_Char)0x78,  /* [6063] */
    (xdc_Char)0x2c,  /* [6064] */
    (xdc_Char)0x20,  /* [6065] */
    (xdc_Char)0x66,  /* [6066] */
    (xdc_Char)0x75,  /* [6067] */
    (xdc_Char)0x6e,  /* [6068] */
    (xdc_Char)0x63,  /* [6069] */
    (xdc_Char)0x3a,  /* [6070] */
    (xdc_Char)0x20,  /* [6071] */
    (xdc_Char)0x30,  /* [6072] */
    (xdc_Char)0x78,  /* [6073] */
    (xdc_Char)0x25,  /* [6074] */
    (xdc_Char)0x78,  /* [6075] */
    (xdc_Char)0x2c,  /* [6076] */
    (xdc_Char)0x20,  /* [6077] */
    (xdc_Char)0x6f,  /* [6078] */
    (xdc_Char)0x6c,  /* [6079] */
    (xdc_Char)0x64,  /* [6080] */
    (xdc_Char)0x43,  /* [6081] */
    (xdc_Char)0x6f,  /* [6082] */
    (xdc_Char)0x72,  /* [6083] */
    (xdc_Char)0x65,  /* [6084] */
    (xdc_Char)0x3a,  /* [6085] */
    (xdc_Char)0x20,  /* [6086] */
    (xdc_Char)0x25,  /* [6087] */
    (xdc_Char)0x64,  /* [6088] */
    (xdc_Char)0x2c,  /* [6089] */
    (xdc_Char)0x20,  /* [6090] */
    (xdc_Char)0x6f,  /* [6091] */
    (xdc_Char)0x6c,  /* [6092] */
    (xdc_Char)0x64,  /* [6093] */
    (xdc_Char)0x41,  /* [6094] */
    (xdc_Char)0x66,  /* [6095] */
    (xdc_Char)0x66,  /* [6096] */
    (xdc_Char)0x69,  /* [6097] */
    (xdc_Char)0x6e,  /* [6098] */
    (xdc_Char)0x69,  /* [6099] */
    (xdc_Char)0x74,  /* [6100] */
    (xdc_Char)0x79,  /* [6101] */
    (xdc_Char)0x20,  /* [6102] */
    (xdc_Char)0x25,  /* [6103] */
    (xdc_Char)0x64,  /* [6104] */
    (xdc_Char)0x2c,  /* [6105] */
    (xdc_Char)0x20,  /* [6106] */
    (xdc_Char)0x6e,  /* [6107] */
    (xdc_Char)0x65,  /* [6108] */
    (xdc_Char)0x77,  /* [6109] */
    (xdc_Char)0x41,  /* [6110] */
    (xdc_Char)0x66,  /* [6111] */
    (xdc_Char)0x66,  /* [6112] */
    (xdc_Char)0x69,  /* [6113] */
    (xdc_Char)0x6e,  /* [6114] */
    (xdc_Char)0x69,  /* [6115] */
    (xdc_Char)0x74,  /* [6116] */
    (xdc_Char)0x79,  /* [6117] */
    (xdc_Char)0x20,  /* [6118] */
    (xdc_Char)0x25,  /* [6119] */
    (xdc_Char)0x64,  /* [6120] */
    (xdc_Char)0x0,  /* [6121] */
    (xdc_Char)0x4c,  /* [6122] */
    (xdc_Char)0x44,  /* [6123] */
    (xdc_Char)0x5f,  /* [6124] */
    (xdc_Char)0x73,  /* [6125] */
    (xdc_Char)0x63,  /* [6126] */
    (xdc_Char)0x68,  /* [6127] */
    (xdc_Char)0x65,  /* [6128] */
    (xdc_Char)0x64,  /* [6129] */
    (xdc_Char)0x75,  /* [6130] */
    (xdc_Char)0x6c,  /* [6131] */
    (xdc_Char)0x65,  /* [6132] */
    (xdc_Char)0x3a,  /* [6133] */
    (xdc_Char)0x20,  /* [6134] */
    (xdc_Char)0x63,  /* [6135] */
    (xdc_Char)0x6f,  /* [6136] */
    (xdc_Char)0x72,  /* [6137] */
    (xdc_Char)0x65,  /* [6138] */
    (xdc_Char)0x49,  /* [6139] */
    (xdc_Char)0x64,  /* [6140] */
    (xdc_Char)0x3a,  /* [6141] */
    (xdc_Char)0x20,  /* [6142] */
    (xdc_Char)0x25,  /* [6143] */
    (xdc_Char)0x64,  /* [6144] */
    (xdc_Char)0x2c,  /* [6145] */
    (xdc_Char)0x20,  /* [6146] */
    (xdc_Char)0x77,  /* [6147] */
    (xdc_Char)0x6f,  /* [6148] */
    (xdc_Char)0x72,  /* [6149] */
    (xdc_Char)0x6b,  /* [6150] */
    (xdc_Char)0x46,  /* [6151] */
    (xdc_Char)0x6c,  /* [6152] */
    (xdc_Char)0x61,  /* [6153] */
    (xdc_Char)0x67,  /* [6154] */
    (xdc_Char)0x3a,  /* [6155] */
    (xdc_Char)0x20,  /* [6156] */
    (xdc_Char)0x25,  /* [6157] */
    (xdc_Char)0x64,  /* [6158] */
    (xdc_Char)0x2c,  /* [6159] */
    (xdc_Char)0x20,  /* [6160] */
    (xdc_Char)0x63,  /* [6161] */
    (xdc_Char)0x75,  /* [6162] */
    (xdc_Char)0x72,  /* [6163] */
    (xdc_Char)0x53,  /* [6164] */
    (xdc_Char)0x65,  /* [6165] */
    (xdc_Char)0x74,  /* [6166] */
    (xdc_Char)0x4c,  /* [6167] */
    (xdc_Char)0x6f,  /* [6168] */
    (xdc_Char)0x63,  /* [6169] */
    (xdc_Char)0x61,  /* [6170] */
    (xdc_Char)0x6c,  /* [6171] */
    (xdc_Char)0x3a,  /* [6172] */
    (xdc_Char)0x20,  /* [6173] */
    (xdc_Char)0x25,  /* [6174] */
    (xdc_Char)0x64,  /* [6175] */
    (xdc_Char)0x2c,  /* [6176] */
    (xdc_Char)0x20,  /* [6177] */
    (xdc_Char)0x63,  /* [6178] */
    (xdc_Char)0x75,  /* [6179] */
    (xdc_Char)0x72,  /* [6180] */
    (xdc_Char)0x53,  /* [6181] */
    (xdc_Char)0x65,  /* [6182] */
    (xdc_Char)0x74,  /* [6183] */
    (xdc_Char)0x58,  /* [6184] */
    (xdc_Char)0x3a,  /* [6185] */
    (xdc_Char)0x20,  /* [6186] */
    (xdc_Char)0x25,  /* [6187] */
    (xdc_Char)0x64,  /* [6188] */
    (xdc_Char)0x2c,  /* [6189] */
    (xdc_Char)0x20,  /* [6190] */
    (xdc_Char)0x63,  /* [6191] */
    (xdc_Char)0x75,  /* [6192] */
    (xdc_Char)0x72,  /* [6193] */
    (xdc_Char)0x4d,  /* [6194] */
    (xdc_Char)0x61,  /* [6195] */
    (xdc_Char)0x73,  /* [6196] */
    (xdc_Char)0x6b,  /* [6197] */
    (xdc_Char)0x4c,  /* [6198] */
    (xdc_Char)0x6f,  /* [6199] */
    (xdc_Char)0x63,  /* [6200] */
    (xdc_Char)0x61,  /* [6201] */
    (xdc_Char)0x6c,  /* [6202] */
    (xdc_Char)0x3a,  /* [6203] */
    (xdc_Char)0x20,  /* [6204] */
    (xdc_Char)0x25,  /* [6205] */
    (xdc_Char)0x64,  /* [6206] */
    (xdc_Char)0x0,  /* [6207] */
    (xdc_Char)0x4c,  /* [6208] */
    (xdc_Char)0x44,  /* [6209] */
    (xdc_Char)0x5f,  /* [6210] */
    (xdc_Char)0x6e,  /* [6211] */
    (xdc_Char)0x6f,  /* [6212] */
    (xdc_Char)0x57,  /* [6213] */
    (xdc_Char)0x6f,  /* [6214] */
    (xdc_Char)0x72,  /* [6215] */
    (xdc_Char)0x6b,  /* [6216] */
    (xdc_Char)0x3a,  /* [6217] */
    (xdc_Char)0x20,  /* [6218] */
    (xdc_Char)0x63,  /* [6219] */
    (xdc_Char)0x6f,  /* [6220] */
    (xdc_Char)0x72,  /* [6221] */
    (xdc_Char)0x65,  /* [6222] */
    (xdc_Char)0x49,  /* [6223] */
    (xdc_Char)0x64,  /* [6224] */
    (xdc_Char)0x3a,  /* [6225] */
    (xdc_Char)0x20,  /* [6226] */
    (xdc_Char)0x25,  /* [6227] */
    (xdc_Char)0x64,  /* [6228] */
    (xdc_Char)0x2c,  /* [6229] */
    (xdc_Char)0x20,  /* [6230] */
    (xdc_Char)0x63,  /* [6231] */
    (xdc_Char)0x75,  /* [6232] */
    (xdc_Char)0x72,  /* [6233] */
    (xdc_Char)0x53,  /* [6234] */
    (xdc_Char)0x65,  /* [6235] */
    (xdc_Char)0x74,  /* [6236] */
    (xdc_Char)0x4c,  /* [6237] */
    (xdc_Char)0x6f,  /* [6238] */
    (xdc_Char)0x63,  /* [6239] */
    (xdc_Char)0x61,  /* [6240] */
    (xdc_Char)0x6c,  /* [6241] */
    (xdc_Char)0x3a,  /* [6242] */
    (xdc_Char)0x20,  /* [6243] */
    (xdc_Char)0x25,  /* [6244] */
    (xdc_Char)0x64,  /* [6245] */
    (xdc_Char)0x2c,  /* [6246] */
    (xdc_Char)0x20,  /* [6247] */
    (xdc_Char)0x63,  /* [6248] */
    (xdc_Char)0x75,  /* [6249] */
    (xdc_Char)0x72,  /* [6250] */
    (xdc_Char)0x53,  /* [6251] */
    (xdc_Char)0x65,  /* [6252] */
    (xdc_Char)0x74,  /* [6253] */
    (xdc_Char)0x58,  /* [6254] */
    (xdc_Char)0x3a,  /* [6255] */
    (xdc_Char)0x20,  /* [6256] */
    (xdc_Char)0x25,  /* [6257] */
    (xdc_Char)0x64,  /* [6258] */
    (xdc_Char)0x2c,  /* [6259] */
    (xdc_Char)0x20,  /* [6260] */
    (xdc_Char)0x63,  /* [6261] */
    (xdc_Char)0x75,  /* [6262] */
    (xdc_Char)0x72,  /* [6263] */
    (xdc_Char)0x4d,  /* [6264] */
    (xdc_Char)0x61,  /* [6265] */
    (xdc_Char)0x73,  /* [6266] */
    (xdc_Char)0x6b,  /* [6267] */
    (xdc_Char)0x4c,  /* [6268] */
    (xdc_Char)0x6f,  /* [6269] */
    (xdc_Char)0x63,  /* [6270] */
    (xdc_Char)0x61,  /* [6271] */
    (xdc_Char)0x6c,  /* [6272] */
    (xdc_Char)0x3a,  /* [6273] */
    (xdc_Char)0x20,  /* [6274] */
    (xdc_Char)0x25,  /* [6275] */
    (xdc_Char)0x64,  /* [6276] */
    (xdc_Char)0x0,  /* [6277] */
    (xdc_Char)0x53,  /* [6278] */
    (xdc_Char)0x74,  /* [6279] */
    (xdc_Char)0x61,  /* [6280] */
    (xdc_Char)0x72,  /* [6281] */
    (xdc_Char)0x74,  /* [6282] */
    (xdc_Char)0x3a,  /* [6283] */
    (xdc_Char)0x20,  /* [6284] */
    (xdc_Char)0x25,  /* [6285] */
    (xdc_Char)0x24,  /* [6286] */
    (xdc_Char)0x53,  /* [6287] */
    (xdc_Char)0x20,  /* [6288] */
    (xdc_Char)0x0,  /* [6289] */
    (xdc_Char)0x53,  /* [6290] */
    (xdc_Char)0x74,  /* [6291] */
    (xdc_Char)0x6f,  /* [6292] */
    (xdc_Char)0x70,  /* [6293] */
    (xdc_Char)0x3a,  /* [6294] */
    (xdc_Char)0x20,  /* [6295] */
    (xdc_Char)0x25,  /* [6296] */
    (xdc_Char)0x24,  /* [6297] */
    (xdc_Char)0x53,  /* [6298] */
    (xdc_Char)0x20,  /* [6299] */
    (xdc_Char)0x0,  /* [6300] */
    (xdc_Char)0x53,  /* [6301] */
    (xdc_Char)0x74,  /* [6302] */
    (xdc_Char)0x61,  /* [6303] */
    (xdc_Char)0x72,  /* [6304] */
    (xdc_Char)0x74,  /* [6305] */
    (xdc_Char)0x49,  /* [6306] */
    (xdc_Char)0x6e,  /* [6307] */
    (xdc_Char)0x73,  /* [6308] */
    (xdc_Char)0x74,  /* [6309] */
    (xdc_Char)0x61,  /* [6310] */
    (xdc_Char)0x6e,  /* [6311] */
    (xdc_Char)0x63,  /* [6312] */
    (xdc_Char)0x65,  /* [6313] */
    (xdc_Char)0x3a,  /* [6314] */
    (xdc_Char)0x20,  /* [6315] */
    (xdc_Char)0x25,  /* [6316] */
    (xdc_Char)0x24,  /* [6317] */
    (xdc_Char)0x53,  /* [6318] */
    (xdc_Char)0x20,  /* [6319] */
    (xdc_Char)0x0,  /* [6320] */
    (xdc_Char)0x53,  /* [6321] */
    (xdc_Char)0x74,  /* [6322] */
    (xdc_Char)0x6f,  /* [6323] */
    (xdc_Char)0x70,  /* [6324] */
    (xdc_Char)0x49,  /* [6325] */
    (xdc_Char)0x6e,  /* [6326] */
    (xdc_Char)0x73,  /* [6327] */
    (xdc_Char)0x74,  /* [6328] */
    (xdc_Char)0x61,  /* [6329] */
    (xdc_Char)0x6e,  /* [6330] */
    (xdc_Char)0x63,  /* [6331] */
    (xdc_Char)0x65,  /* [6332] */
    (xdc_Char)0x3a,  /* [6333] */
    (xdc_Char)0x20,  /* [6334] */
    (xdc_Char)0x25,  /* [6335] */
    (xdc_Char)0x24,  /* [6336] */
    (xdc_Char)0x53,  /* [6337] */
    (xdc_Char)0x20,  /* [6338] */
    (xdc_Char)0x0,  /* [6339] */
    (xdc_Char)0x53,  /* [6340] */
    (xdc_Char)0x74,  /* [6341] */
    (xdc_Char)0x61,  /* [6342] */
    (xdc_Char)0x72,  /* [6343] */
    (xdc_Char)0x74,  /* [6344] */
    (xdc_Char)0x49,  /* [6345] */
    (xdc_Char)0x6e,  /* [6346] */
    (xdc_Char)0x73,  /* [6347] */
    (xdc_Char)0x74,  /* [6348] */
    (xdc_Char)0x61,  /* [6349] */
    (xdc_Char)0x6e,  /* [6350] */
    (xdc_Char)0x63,  /* [6351] */
    (xdc_Char)0x65,  /* [6352] */
    (xdc_Char)0x57,  /* [6353] */
    (xdc_Char)0x69,  /* [6354] */
    (xdc_Char)0x74,  /* [6355] */
    (xdc_Char)0x68,  /* [6356] */
    (xdc_Char)0x41,  /* [6357] */
    (xdc_Char)0x64,  /* [6358] */
    (xdc_Char)0x72,  /* [6359] */
    (xdc_Char)0x73,  /* [6360] */
    (xdc_Char)0x3a,  /* [6361] */
    (xdc_Char)0x20,  /* [6362] */
    (xdc_Char)0x25,  /* [6363] */
    (xdc_Char)0x24,  /* [6364] */
    (xdc_Char)0x53,  /* [6365] */
    (xdc_Char)0x0,  /* [6366] */
    (xdc_Char)0x53,  /* [6367] */
    (xdc_Char)0x74,  /* [6368] */
    (xdc_Char)0x6f,  /* [6369] */
    (xdc_Char)0x70,  /* [6370] */
    (xdc_Char)0x49,  /* [6371] */
    (xdc_Char)0x6e,  /* [6372] */
    (xdc_Char)0x73,  /* [6373] */
    (xdc_Char)0x74,  /* [6374] */
    (xdc_Char)0x61,  /* [6375] */
    (xdc_Char)0x6e,  /* [6376] */
    (xdc_Char)0x63,  /* [6377] */
    (xdc_Char)0x65,  /* [6378] */
    (xdc_Char)0x57,  /* [6379] */
    (xdc_Char)0x69,  /* [6380] */
    (xdc_Char)0x74,  /* [6381] */
    (xdc_Char)0x68,  /* [6382] */
    (xdc_Char)0x41,  /* [6383] */
    (xdc_Char)0x64,  /* [6384] */
    (xdc_Char)0x72,  /* [6385] */
    (xdc_Char)0x73,  /* [6386] */
    (xdc_Char)0x3a,  /* [6387] */
    (xdc_Char)0x20,  /* [6388] */
    (xdc_Char)0x25,  /* [6389] */
    (xdc_Char)0x24,  /* [6390] */
    (xdc_Char)0x53,  /* [6391] */
    (xdc_Char)0x0,  /* [6392] */
    (xdc_Char)0x53,  /* [6393] */
    (xdc_Char)0x74,  /* [6394] */
    (xdc_Char)0x61,  /* [6395] */
    (xdc_Char)0x72,  /* [6396] */
    (xdc_Char)0x74,  /* [6397] */
    (xdc_Char)0x49,  /* [6398] */
    (xdc_Char)0x6e,  /* [6399] */
    (xdc_Char)0x73,  /* [6400] */
    (xdc_Char)0x74,  /* [6401] */
    (xdc_Char)0x61,  /* [6402] */
    (xdc_Char)0x6e,  /* [6403] */
    (xdc_Char)0x63,  /* [6404] */
    (xdc_Char)0x65,  /* [6405] */
    (xdc_Char)0x57,  /* [6406] */
    (xdc_Char)0x69,  /* [6407] */
    (xdc_Char)0x74,  /* [6408] */
    (xdc_Char)0x68,  /* [6409] */
    (xdc_Char)0x53,  /* [6410] */
    (xdc_Char)0x74,  /* [6411] */
    (xdc_Char)0x72,  /* [6412] */
    (xdc_Char)0x3a,  /* [6413] */
    (xdc_Char)0x20,  /* [6414] */
    (xdc_Char)0x25,  /* [6415] */
    (xdc_Char)0x24,  /* [6416] */
    (xdc_Char)0x53,  /* [6417] */
    (xdc_Char)0x0,  /* [6418] */
    (xdc_Char)0x53,  /* [6419] */
    (xdc_Char)0x74,  /* [6420] */
    (xdc_Char)0x6f,  /* [6421] */
    (xdc_Char)0x70,  /* [6422] */
    (xdc_Char)0x49,  /* [6423] */
    (xdc_Char)0x6e,  /* [6424] */
    (xdc_Char)0x73,  /* [6425] */
    (xdc_Char)0x74,  /* [6426] */
    (xdc_Char)0x61,  /* [6427] */
    (xdc_Char)0x6e,  /* [6428] */
    (xdc_Char)0x63,  /* [6429] */
    (xdc_Char)0x65,  /* [6430] */
    (xdc_Char)0x57,  /* [6431] */
    (xdc_Char)0x69,  /* [6432] */
    (xdc_Char)0x74,  /* [6433] */
    (xdc_Char)0x68,  /* [6434] */
    (xdc_Char)0x53,  /* [6435] */
    (xdc_Char)0x74,  /* [6436] */
    (xdc_Char)0x72,  /* [6437] */
    (xdc_Char)0x3a,  /* [6438] */
    (xdc_Char)0x20,  /* [6439] */
    (xdc_Char)0x25,  /* [6440] */
    (xdc_Char)0x24,  /* [6441] */
    (xdc_Char)0x53,  /* [6442] */
    (xdc_Char)0x0,  /* [6443] */
    (xdc_Char)0x45,  /* [6444] */
    (xdc_Char)0x52,  /* [6445] */
    (xdc_Char)0x52,  /* [6446] */
    (xdc_Char)0x4f,  /* [6447] */
    (xdc_Char)0x52,  /* [6448] */
    (xdc_Char)0x3a,  /* [6449] */
    (xdc_Char)0x20,  /* [6450] */
    (xdc_Char)0x45,  /* [6451] */
    (xdc_Char)0x72,  /* [6452] */
    (xdc_Char)0x72,  /* [6453] */
    (xdc_Char)0x6f,  /* [6454] */
    (xdc_Char)0x72,  /* [6455] */
    (xdc_Char)0x43,  /* [6456] */
    (xdc_Char)0x6f,  /* [6457] */
    (xdc_Char)0x64,  /* [6458] */
    (xdc_Char)0x65,  /* [6459] */
    (xdc_Char)0x3a,  /* [6460] */
    (xdc_Char)0x30,  /* [6461] */
    (xdc_Char)0x78,  /* [6462] */
    (xdc_Char)0x25,  /* [6463] */
    (xdc_Char)0x78,  /* [6464] */
    (xdc_Char)0x0,  /* [6465] */
    (xdc_Char)0x45,  /* [6466] */
    (xdc_Char)0x52,  /* [6467] */
    (xdc_Char)0x52,  /* [6468] */
    (xdc_Char)0x4f,  /* [6469] */
    (xdc_Char)0x52,  /* [6470] */
    (xdc_Char)0x3a,  /* [6471] */
    (xdc_Char)0x20,  /* [6472] */
    (xdc_Char)0x45,  /* [6473] */
    (xdc_Char)0x72,  /* [6474] */
    (xdc_Char)0x72,  /* [6475] */
    (xdc_Char)0x6f,  /* [6476] */
    (xdc_Char)0x72,  /* [6477] */
    (xdc_Char)0x43,  /* [6478] */
    (xdc_Char)0x6f,  /* [6479] */
    (xdc_Char)0x64,  /* [6480] */
    (xdc_Char)0x65,  /* [6481] */
    (xdc_Char)0x3a,  /* [6482] */
    (xdc_Char)0x30,  /* [6483] */
    (xdc_Char)0x78,  /* [6484] */
    (xdc_Char)0x25,  /* [6485] */
    (xdc_Char)0x78,  /* [6486] */
    (xdc_Char)0x2e,  /* [6487] */
    (xdc_Char)0x20,  /* [6488] */
    (xdc_Char)0x25,  /* [6489] */
    (xdc_Char)0x24,  /* [6490] */
    (xdc_Char)0x53,  /* [6491] */
    (xdc_Char)0x0,  /* [6492] */
    (xdc_Char)0x48,  /* [6493] */
    (xdc_Char)0x57,  /* [6494] */
    (xdc_Char)0x20,  /* [6495] */
    (xdc_Char)0x45,  /* [6496] */
    (xdc_Char)0x52,  /* [6497] */
    (xdc_Char)0x52,  /* [6498] */
    (xdc_Char)0x4f,  /* [6499] */
    (xdc_Char)0x52,  /* [6500] */
    (xdc_Char)0x3a,  /* [6501] */
    (xdc_Char)0x20,  /* [6502] */
    (xdc_Char)0x45,  /* [6503] */
    (xdc_Char)0x72,  /* [6504] */
    (xdc_Char)0x72,  /* [6505] */
    (xdc_Char)0x6f,  /* [6506] */
    (xdc_Char)0x72,  /* [6507] */
    (xdc_Char)0x43,  /* [6508] */
    (xdc_Char)0x6f,  /* [6509] */
    (xdc_Char)0x64,  /* [6510] */
    (xdc_Char)0x65,  /* [6511] */
    (xdc_Char)0x3a,  /* [6512] */
    (xdc_Char)0x30,  /* [6513] */
    (xdc_Char)0x78,  /* [6514] */
    (xdc_Char)0x25,  /* [6515] */
    (xdc_Char)0x78,  /* [6516] */
    (xdc_Char)0x0,  /* [6517] */
    (xdc_Char)0x48,  /* [6518] */
    (xdc_Char)0x57,  /* [6519] */
    (xdc_Char)0x20,  /* [6520] */
    (xdc_Char)0x45,  /* [6521] */
    (xdc_Char)0x52,  /* [6522] */
    (xdc_Char)0x52,  /* [6523] */
    (xdc_Char)0x4f,  /* [6524] */
    (xdc_Char)0x52,  /* [6525] */
    (xdc_Char)0x3a,  /* [6526] */
    (xdc_Char)0x20,  /* [6527] */
    (xdc_Char)0x45,  /* [6528] */
    (xdc_Char)0x72,  /* [6529] */
    (xdc_Char)0x72,  /* [6530] */
    (xdc_Char)0x6f,  /* [6531] */
    (xdc_Char)0x72,  /* [6532] */
    (xdc_Char)0x43,  /* [6533] */
    (xdc_Char)0x6f,  /* [6534] */
    (xdc_Char)0x64,  /* [6535] */
    (xdc_Char)0x65,  /* [6536] */
    (xdc_Char)0x3a,  /* [6537] */
    (xdc_Char)0x30,  /* [6538] */
    (xdc_Char)0x78,  /* [6539] */
    (xdc_Char)0x25,  /* [6540] */
    (xdc_Char)0x78,  /* [6541] */
    (xdc_Char)0x2e,  /* [6542] */
    (xdc_Char)0x20,  /* [6543] */
    (xdc_Char)0x25,  /* [6544] */
    (xdc_Char)0x24,  /* [6545] */
    (xdc_Char)0x53,  /* [6546] */
    (xdc_Char)0x0,  /* [6547] */
    (xdc_Char)0x46,  /* [6548] */
    (xdc_Char)0x41,  /* [6549] */
    (xdc_Char)0x54,  /* [6550] */
    (xdc_Char)0x41,  /* [6551] */
    (xdc_Char)0x4c,  /* [6552] */
    (xdc_Char)0x20,  /* [6553] */
    (xdc_Char)0x45,  /* [6554] */
    (xdc_Char)0x52,  /* [6555] */
    (xdc_Char)0x52,  /* [6556] */
    (xdc_Char)0x4f,  /* [6557] */
    (xdc_Char)0x52,  /* [6558] */
    (xdc_Char)0x3a,  /* [6559] */
    (xdc_Char)0x20,  /* [6560] */
    (xdc_Char)0x45,  /* [6561] */
    (xdc_Char)0x72,  /* [6562] */
    (xdc_Char)0x72,  /* [6563] */
    (xdc_Char)0x6f,  /* [6564] */
    (xdc_Char)0x72,  /* [6565] */
    (xdc_Char)0x43,  /* [6566] */
    (xdc_Char)0x6f,  /* [6567] */
    (xdc_Char)0x64,  /* [6568] */
    (xdc_Char)0x65,  /* [6569] */
    (xdc_Char)0x3a,  /* [6570] */
    (xdc_Char)0x30,  /* [6571] */
    (xdc_Char)0x78,  /* [6572] */
    (xdc_Char)0x25,  /* [6573] */
    (xdc_Char)0x78,  /* [6574] */
    (xdc_Char)0x0,  /* [6575] */
    (xdc_Char)0x46,  /* [6576] */
    (xdc_Char)0x41,  /* [6577] */
    (xdc_Char)0x54,  /* [6578] */
    (xdc_Char)0x41,  /* [6579] */
    (xdc_Char)0x4c,  /* [6580] */
    (xdc_Char)0x20,  /* [6581] */
    (xdc_Char)0x45,  /* [6582] */
    (xdc_Char)0x52,  /* [6583] */
    (xdc_Char)0x52,  /* [6584] */
    (xdc_Char)0x4f,  /* [6585] */
    (xdc_Char)0x52,  /* [6586] */
    (xdc_Char)0x3a,  /* [6587] */
    (xdc_Char)0x20,  /* [6588] */
    (xdc_Char)0x45,  /* [6589] */
    (xdc_Char)0x72,  /* [6590] */
    (xdc_Char)0x72,  /* [6591] */
    (xdc_Char)0x6f,  /* [6592] */
    (xdc_Char)0x72,  /* [6593] */
    (xdc_Char)0x43,  /* [6594] */
    (xdc_Char)0x6f,  /* [6595] */
    (xdc_Char)0x64,  /* [6596] */
    (xdc_Char)0x65,  /* [6597] */
    (xdc_Char)0x3a,  /* [6598] */
    (xdc_Char)0x30,  /* [6599] */
    (xdc_Char)0x78,  /* [6600] */
    (xdc_Char)0x25,  /* [6601] */
    (xdc_Char)0x78,  /* [6602] */
    (xdc_Char)0x2e,  /* [6603] */
    (xdc_Char)0x20,  /* [6604] */
    (xdc_Char)0x25,  /* [6605] */
    (xdc_Char)0x24,  /* [6606] */
    (xdc_Char)0x53,  /* [6607] */
    (xdc_Char)0x0,  /* [6608] */
    (xdc_Char)0x43,  /* [6609] */
    (xdc_Char)0x52,  /* [6610] */
    (xdc_Char)0x49,  /* [6611] */
    (xdc_Char)0x54,  /* [6612] */
    (xdc_Char)0x49,  /* [6613] */
    (xdc_Char)0x43,  /* [6614] */
    (xdc_Char)0x41,  /* [6615] */
    (xdc_Char)0x4c,  /* [6616] */
    (xdc_Char)0x20,  /* [6617] */
    (xdc_Char)0x45,  /* [6618] */
    (xdc_Char)0x52,  /* [6619] */
    (xdc_Char)0x52,  /* [6620] */
    (xdc_Char)0x4f,  /* [6621] */
    (xdc_Char)0x52,  /* [6622] */
    (xdc_Char)0x3a,  /* [6623] */
    (xdc_Char)0x20,  /* [6624] */
    (xdc_Char)0x45,  /* [6625] */
    (xdc_Char)0x72,  /* [6626] */
    (xdc_Char)0x72,  /* [6627] */
    (xdc_Char)0x6f,  /* [6628] */
    (xdc_Char)0x72,  /* [6629] */
    (xdc_Char)0x43,  /* [6630] */
    (xdc_Char)0x6f,  /* [6631] */
    (xdc_Char)0x64,  /* [6632] */
    (xdc_Char)0x65,  /* [6633] */
    (xdc_Char)0x3a,  /* [6634] */
    (xdc_Char)0x30,  /* [6635] */
    (xdc_Char)0x78,  /* [6636] */
    (xdc_Char)0x25,  /* [6637] */
    (xdc_Char)0x78,  /* [6638] */
    (xdc_Char)0x0,  /* [6639] */
    (xdc_Char)0x43,  /* [6640] */
    (xdc_Char)0x52,  /* [6641] */
    (xdc_Char)0x49,  /* [6642] */
    (xdc_Char)0x54,  /* [6643] */
    (xdc_Char)0x49,  /* [6644] */
    (xdc_Char)0x43,  /* [6645] */
    (xdc_Char)0x41,  /* [6646] */
    (xdc_Char)0x4c,  /* [6647] */
    (xdc_Char)0x20,  /* [6648] */
    (xdc_Char)0x45,  /* [6649] */
    (xdc_Char)0x52,  /* [6650] */
    (xdc_Char)0x52,  /* [6651] */
    (xdc_Char)0x4f,  /* [6652] */
    (xdc_Char)0x52,  /* [6653] */
    (xdc_Char)0x3a,  /* [6654] */
    (xdc_Char)0x20,  /* [6655] */
    (xdc_Char)0x45,  /* [6656] */
    (xdc_Char)0x72,  /* [6657] */
    (xdc_Char)0x72,  /* [6658] */
    (xdc_Char)0x6f,  /* [6659] */
    (xdc_Char)0x72,  /* [6660] */
    (xdc_Char)0x43,  /* [6661] */
    (xdc_Char)0x6f,  /* [6662] */
    (xdc_Char)0x64,  /* [6663] */
    (xdc_Char)0x65,  /* [6664] */
    (xdc_Char)0x3a,  /* [6665] */
    (xdc_Char)0x30,  /* [6666] */
    (xdc_Char)0x78,  /* [6667] */
    (xdc_Char)0x25,  /* [6668] */
    (xdc_Char)0x78,  /* [6669] */
    (xdc_Char)0x2e,  /* [6670] */
    (xdc_Char)0x20,  /* [6671] */
    (xdc_Char)0x25,  /* [6672] */
    (xdc_Char)0x24,  /* [6673] */
    (xdc_Char)0x53,  /* [6674] */
    (xdc_Char)0x0,  /* [6675] */
    (xdc_Char)0x45,  /* [6676] */
    (xdc_Char)0x52,  /* [6677] */
    (xdc_Char)0x52,  /* [6678] */
    (xdc_Char)0x4f,  /* [6679] */
    (xdc_Char)0x52,  /* [6680] */
    (xdc_Char)0x3a,  /* [6681] */
    (xdc_Char)0x20,  /* [6682] */
    (xdc_Char)0x45,  /* [6683] */
    (xdc_Char)0x78,  /* [6684] */
    (xdc_Char)0x63,  /* [6685] */
    (xdc_Char)0x65,  /* [6686] */
    (xdc_Char)0x70,  /* [6687] */
    (xdc_Char)0x74,  /* [6688] */
    (xdc_Char)0x69,  /* [6689] */
    (xdc_Char)0x6f,  /* [6690] */
    (xdc_Char)0x6e,  /* [6691] */
    (xdc_Char)0x20,  /* [6692] */
    (xdc_Char)0x61,  /* [6693] */
    (xdc_Char)0x74,  /* [6694] */
    (xdc_Char)0x20,  /* [6695] */
    (xdc_Char)0x25,  /* [6696] */
    (xdc_Char)0x24,  /* [6697] */
    (xdc_Char)0x46,  /* [6698] */
    (xdc_Char)0x2e,  /* [6699] */
    (xdc_Char)0x0,  /* [6700] */
    (xdc_Char)0x45,  /* [6701] */
    (xdc_Char)0x52,  /* [6702] */
    (xdc_Char)0x52,  /* [6703] */
    (xdc_Char)0x4f,  /* [6704] */
    (xdc_Char)0x52,  /* [6705] */
    (xdc_Char)0x3a,  /* [6706] */
    (xdc_Char)0x20,  /* [6707] */
    (xdc_Char)0x55,  /* [6708] */
    (xdc_Char)0x6e,  /* [6709] */
    (xdc_Char)0x63,  /* [6710] */
    (xdc_Char)0x61,  /* [6711] */
    (xdc_Char)0x75,  /* [6712] */
    (xdc_Char)0x67,  /* [6713] */
    (xdc_Char)0x68,  /* [6714] */
    (xdc_Char)0x74,  /* [6715] */
    (xdc_Char)0x20,  /* [6716] */
    (xdc_Char)0x45,  /* [6717] */
    (xdc_Char)0x78,  /* [6718] */
    (xdc_Char)0x63,  /* [6719] */
    (xdc_Char)0x65,  /* [6720] */
    (xdc_Char)0x70,  /* [6721] */
    (xdc_Char)0x74,  /* [6722] */
    (xdc_Char)0x69,  /* [6723] */
    (xdc_Char)0x6f,  /* [6724] */
    (xdc_Char)0x6e,  /* [6725] */
    (xdc_Char)0x20,  /* [6726] */
    (xdc_Char)0x61,  /* [6727] */
    (xdc_Char)0x74,  /* [6728] */
    (xdc_Char)0x20,  /* [6729] */
    (xdc_Char)0x25,  /* [6730] */
    (xdc_Char)0x24,  /* [6731] */
    (xdc_Char)0x46,  /* [6732] */
    (xdc_Char)0x2e,  /* [6733] */
    (xdc_Char)0x0,  /* [6734] */
    (xdc_Char)0x45,  /* [6735] */
    (xdc_Char)0x52,  /* [6736] */
    (xdc_Char)0x52,  /* [6737] */
    (xdc_Char)0x4f,  /* [6738] */
    (xdc_Char)0x52,  /* [6739] */
    (xdc_Char)0x3a,  /* [6740] */
    (xdc_Char)0x20,  /* [6741] */
    (xdc_Char)0x4e,  /* [6742] */
    (xdc_Char)0x75,  /* [6743] */
    (xdc_Char)0x6c,  /* [6744] */
    (xdc_Char)0x6c,  /* [6745] */
    (xdc_Char)0x20,  /* [6746] */
    (xdc_Char)0x50,  /* [6747] */
    (xdc_Char)0x6f,  /* [6748] */
    (xdc_Char)0x69,  /* [6749] */
    (xdc_Char)0x6e,  /* [6750] */
    (xdc_Char)0x74,  /* [6751] */
    (xdc_Char)0x65,  /* [6752] */
    (xdc_Char)0x72,  /* [6753] */
    (xdc_Char)0x20,  /* [6754] */
    (xdc_Char)0x45,  /* [6755] */
    (xdc_Char)0x78,  /* [6756] */
    (xdc_Char)0x63,  /* [6757] */
    (xdc_Char)0x65,  /* [6758] */
    (xdc_Char)0x70,  /* [6759] */
    (xdc_Char)0x74,  /* [6760] */
    (xdc_Char)0x69,  /* [6761] */
    (xdc_Char)0x6f,  /* [6762] */
    (xdc_Char)0x6e,  /* [6763] */
    (xdc_Char)0x20,  /* [6764] */
    (xdc_Char)0x61,  /* [6765] */
    (xdc_Char)0x74,  /* [6766] */
    (xdc_Char)0x20,  /* [6767] */
    (xdc_Char)0x25,  /* [6768] */
    (xdc_Char)0x24,  /* [6769] */
    (xdc_Char)0x46,  /* [6770] */
    (xdc_Char)0x2e,  /* [6771] */
    (xdc_Char)0x0,  /* [6772] */
    (xdc_Char)0x45,  /* [6773] */
    (xdc_Char)0x52,  /* [6774] */
    (xdc_Char)0x52,  /* [6775] */
    (xdc_Char)0x4f,  /* [6776] */
    (xdc_Char)0x52,  /* [6777] */
    (xdc_Char)0x3a,  /* [6778] */
    (xdc_Char)0x20,  /* [6779] */
    (xdc_Char)0x55,  /* [6780] */
    (xdc_Char)0x6e,  /* [6781] */
    (xdc_Char)0x65,  /* [6782] */
    (xdc_Char)0x78,  /* [6783] */
    (xdc_Char)0x70,  /* [6784] */
    (xdc_Char)0x65,  /* [6785] */
    (xdc_Char)0x63,  /* [6786] */
    (xdc_Char)0x74,  /* [6787] */
    (xdc_Char)0x65,  /* [6788] */
    (xdc_Char)0x64,  /* [6789] */
    (xdc_Char)0x20,  /* [6790] */
    (xdc_Char)0x49,  /* [6791] */
    (xdc_Char)0x6e,  /* [6792] */
    (xdc_Char)0x74,  /* [6793] */
    (xdc_Char)0x65,  /* [6794] */
    (xdc_Char)0x72,  /* [6795] */
    (xdc_Char)0x72,  /* [6796] */
    (xdc_Char)0x75,  /* [6797] */
    (xdc_Char)0x70,  /* [6798] */
    (xdc_Char)0x74,  /* [6799] */
    (xdc_Char)0x20,  /* [6800] */
    (xdc_Char)0x61,  /* [6801] */
    (xdc_Char)0x74,  /* [6802] */
    (xdc_Char)0x20,  /* [6803] */
    (xdc_Char)0x25,  /* [6804] */
    (xdc_Char)0x24,  /* [6805] */
    (xdc_Char)0x46,  /* [6806] */
    (xdc_Char)0x2e,  /* [6807] */
    (xdc_Char)0x0,  /* [6808] */
    (xdc_Char)0x45,  /* [6809] */
    (xdc_Char)0x52,  /* [6810] */
    (xdc_Char)0x52,  /* [6811] */
    (xdc_Char)0x4f,  /* [6812] */
    (xdc_Char)0x52,  /* [6813] */
    (xdc_Char)0x3a,  /* [6814] */
    (xdc_Char)0x20,  /* [6815] */
    (xdc_Char)0x4d,  /* [6816] */
    (xdc_Char)0x65,  /* [6817] */
    (xdc_Char)0x6d,  /* [6818] */
    (xdc_Char)0x6f,  /* [6819] */
    (xdc_Char)0x72,  /* [6820] */
    (xdc_Char)0x79,  /* [6821] */
    (xdc_Char)0x20,  /* [6822] */
    (xdc_Char)0x41,  /* [6823] */
    (xdc_Char)0x63,  /* [6824] */
    (xdc_Char)0x63,  /* [6825] */
    (xdc_Char)0x65,  /* [6826] */
    (xdc_Char)0x73,  /* [6827] */
    (xdc_Char)0x73,  /* [6828] */
    (xdc_Char)0x20,  /* [6829] */
    (xdc_Char)0x46,  /* [6830] */
    (xdc_Char)0x61,  /* [6831] */
    (xdc_Char)0x75,  /* [6832] */
    (xdc_Char)0x6c,  /* [6833] */
    (xdc_Char)0x74,  /* [6834] */
    (xdc_Char)0x20,  /* [6835] */
    (xdc_Char)0x61,  /* [6836] */
    (xdc_Char)0x74,  /* [6837] */
    (xdc_Char)0x20,  /* [6838] */
    (xdc_Char)0x25,  /* [6839] */
    (xdc_Char)0x24,  /* [6840] */
    (xdc_Char)0x46,  /* [6841] */
    (xdc_Char)0x2e,  /* [6842] */
    (xdc_Char)0x20,  /* [6843] */
    (xdc_Char)0x5b,  /* [6844] */
    (xdc_Char)0x41,  /* [6845] */
    (xdc_Char)0x44,  /* [6846] */
    (xdc_Char)0x52,  /* [6847] */
    (xdc_Char)0x53,  /* [6848] */
    (xdc_Char)0x5d,  /* [6849] */
    (xdc_Char)0x30,  /* [6850] */
    (xdc_Char)0x78,  /* [6851] */
    (xdc_Char)0x25,  /* [6852] */
    (xdc_Char)0x78,  /* [6853] */
    (xdc_Char)0x0,  /* [6854] */
    (xdc_Char)0x45,  /* [6855] */
    (xdc_Char)0x52,  /* [6856] */
    (xdc_Char)0x52,  /* [6857] */
    (xdc_Char)0x4f,  /* [6858] */
    (xdc_Char)0x52,  /* [6859] */
    (xdc_Char)0x3a,  /* [6860] */
    (xdc_Char)0x20,  /* [6861] */
    (xdc_Char)0x53,  /* [6862] */
    (xdc_Char)0x65,  /* [6863] */
    (xdc_Char)0x63,  /* [6864] */
    (xdc_Char)0x75,  /* [6865] */
    (xdc_Char)0x72,  /* [6866] */
    (xdc_Char)0x69,  /* [6867] */
    (xdc_Char)0x74,  /* [6868] */
    (xdc_Char)0x79,  /* [6869] */
    (xdc_Char)0x20,  /* [6870] */
    (xdc_Char)0x45,  /* [6871] */
    (xdc_Char)0x78,  /* [6872] */
    (xdc_Char)0x63,  /* [6873] */
    (xdc_Char)0x65,  /* [6874] */
    (xdc_Char)0x70,  /* [6875] */
    (xdc_Char)0x74,  /* [6876] */
    (xdc_Char)0x69,  /* [6877] */
    (xdc_Char)0x6f,  /* [6878] */
    (xdc_Char)0x6e,  /* [6879] */
    (xdc_Char)0x20,  /* [6880] */
    (xdc_Char)0x61,  /* [6881] */
    (xdc_Char)0x74,  /* [6882] */
    (xdc_Char)0x20,  /* [6883] */
    (xdc_Char)0x25,  /* [6884] */
    (xdc_Char)0x24,  /* [6885] */
    (xdc_Char)0x46,  /* [6886] */
    (xdc_Char)0x2e,  /* [6887] */
    (xdc_Char)0x0,  /* [6888] */
    (xdc_Char)0x45,  /* [6889] */
    (xdc_Char)0x52,  /* [6890] */
    (xdc_Char)0x52,  /* [6891] */
    (xdc_Char)0x4f,  /* [6892] */
    (xdc_Char)0x52,  /* [6893] */
    (xdc_Char)0x3a,  /* [6894] */
    (xdc_Char)0x20,  /* [6895] */
    (xdc_Char)0x44,  /* [6896] */
    (xdc_Char)0x69,  /* [6897] */
    (xdc_Char)0x76,  /* [6898] */
    (xdc_Char)0x69,  /* [6899] */
    (xdc_Char)0x73,  /* [6900] */
    (xdc_Char)0x69,  /* [6901] */
    (xdc_Char)0x6f,  /* [6902] */
    (xdc_Char)0x6e,  /* [6903] */
    (xdc_Char)0x20,  /* [6904] */
    (xdc_Char)0x62,  /* [6905] */
    (xdc_Char)0x79,  /* [6906] */
    (xdc_Char)0x20,  /* [6907] */
    (xdc_Char)0x7a,  /* [6908] */
    (xdc_Char)0x65,  /* [6909] */
    (xdc_Char)0x72,  /* [6910] */
    (xdc_Char)0x6f,  /* [6911] */
    (xdc_Char)0x20,  /* [6912] */
    (xdc_Char)0x61,  /* [6913] */
    (xdc_Char)0x74,  /* [6914] */
    (xdc_Char)0x20,  /* [6915] */
    (xdc_Char)0x25,  /* [6916] */
    (xdc_Char)0x24,  /* [6917] */
    (xdc_Char)0x46,  /* [6918] */
    (xdc_Char)0x2e,  /* [6919] */
    (xdc_Char)0x0,  /* [6920] */
    (xdc_Char)0x45,  /* [6921] */
    (xdc_Char)0x52,  /* [6922] */
    (xdc_Char)0x52,  /* [6923] */
    (xdc_Char)0x4f,  /* [6924] */
    (xdc_Char)0x52,  /* [6925] */
    (xdc_Char)0x3a,  /* [6926] */
    (xdc_Char)0x20,  /* [6927] */
    (xdc_Char)0x4f,  /* [6928] */
    (xdc_Char)0x76,  /* [6929] */
    (xdc_Char)0x65,  /* [6930] */
    (xdc_Char)0x72,  /* [6931] */
    (xdc_Char)0x66,  /* [6932] */
    (xdc_Char)0x6c,  /* [6933] */
    (xdc_Char)0x6f,  /* [6934] */
    (xdc_Char)0x77,  /* [6935] */
    (xdc_Char)0x20,  /* [6936] */
    (xdc_Char)0x65,  /* [6937] */
    (xdc_Char)0x78,  /* [6938] */
    (xdc_Char)0x63,  /* [6939] */
    (xdc_Char)0x65,  /* [6940] */
    (xdc_Char)0x70,  /* [6941] */
    (xdc_Char)0x74,  /* [6942] */
    (xdc_Char)0x69,  /* [6943] */
    (xdc_Char)0x6f,  /* [6944] */
    (xdc_Char)0x6e,  /* [6945] */
    (xdc_Char)0x20,  /* [6946] */
    (xdc_Char)0x61,  /* [6947] */
    (xdc_Char)0x74,  /* [6948] */
    (xdc_Char)0x20,  /* [6949] */
    (xdc_Char)0x25,  /* [6950] */
    (xdc_Char)0x24,  /* [6951] */
    (xdc_Char)0x46,  /* [6952] */
    (xdc_Char)0x2e,  /* [6953] */
    (xdc_Char)0x0,  /* [6954] */
    (xdc_Char)0x45,  /* [6955] */
    (xdc_Char)0x52,  /* [6956] */
    (xdc_Char)0x52,  /* [6957] */
    (xdc_Char)0x4f,  /* [6958] */
    (xdc_Char)0x52,  /* [6959] */
    (xdc_Char)0x3a,  /* [6960] */
    (xdc_Char)0x20,  /* [6961] */
    (xdc_Char)0x49,  /* [6962] */
    (xdc_Char)0x6e,  /* [6963] */
    (xdc_Char)0x64,  /* [6964] */
    (xdc_Char)0x65,  /* [6965] */
    (xdc_Char)0x78,  /* [6966] */
    (xdc_Char)0x20,  /* [6967] */
    (xdc_Char)0x6f,  /* [6968] */
    (xdc_Char)0x75,  /* [6969] */
    (xdc_Char)0x74,  /* [6970] */
    (xdc_Char)0x20,  /* [6971] */
    (xdc_Char)0x6f,  /* [6972] */
    (xdc_Char)0x66,  /* [6973] */
    (xdc_Char)0x20,  /* [6974] */
    (xdc_Char)0x72,  /* [6975] */
    (xdc_Char)0x61,  /* [6976] */
    (xdc_Char)0x6e,  /* [6977] */
    (xdc_Char)0x67,  /* [6978] */
    (xdc_Char)0x65,  /* [6979] */
    (xdc_Char)0x20,  /* [6980] */
    (xdc_Char)0x61,  /* [6981] */
    (xdc_Char)0x74,  /* [6982] */
    (xdc_Char)0x20,  /* [6983] */
    (xdc_Char)0x25,  /* [6984] */
    (xdc_Char)0x24,  /* [6985] */
    (xdc_Char)0x46,  /* [6986] */
    (xdc_Char)0x2e,  /* [6987] */
    (xdc_Char)0x20,  /* [6988] */
    (xdc_Char)0x5b,  /* [6989] */
    (xdc_Char)0x49,  /* [6990] */
    (xdc_Char)0x4e,  /* [6991] */
    (xdc_Char)0x44,  /* [6992] */
    (xdc_Char)0x45,  /* [6993] */
    (xdc_Char)0x58,  /* [6994] */
    (xdc_Char)0x5d,  /* [6995] */
    (xdc_Char)0x30,  /* [6996] */
    (xdc_Char)0x78,  /* [6997] */
    (xdc_Char)0x25,  /* [6998] */
    (xdc_Char)0x78,  /* [6999] */
    (xdc_Char)0x0,  /* [7000] */
    (xdc_Char)0x45,  /* [7001] */
    (xdc_Char)0x52,  /* [7002] */
    (xdc_Char)0x52,  /* [7003] */
    (xdc_Char)0x4f,  /* [7004] */
    (xdc_Char)0x52,  /* [7005] */
    (xdc_Char)0x3a,  /* [7006] */
    (xdc_Char)0x20,  /* [7007] */
    (xdc_Char)0x41,  /* [7008] */
    (xdc_Char)0x74,  /* [7009] */
    (xdc_Char)0x74,  /* [7010] */
    (xdc_Char)0x65,  /* [7011] */
    (xdc_Char)0x6d,  /* [7012] */
    (xdc_Char)0x70,  /* [7013] */
    (xdc_Char)0x74,  /* [7014] */
    (xdc_Char)0x20,  /* [7015] */
    (xdc_Char)0x74,  /* [7016] */
    (xdc_Char)0x6f,  /* [7017] */
    (xdc_Char)0x20,  /* [7018] */
    (xdc_Char)0x61,  /* [7019] */
    (xdc_Char)0x63,  /* [7020] */
    (xdc_Char)0x63,  /* [7021] */
    (xdc_Char)0x65,  /* [7022] */
    (xdc_Char)0x73,  /* [7023] */
    (xdc_Char)0x73,  /* [7024] */
    (xdc_Char)0x20,  /* [7025] */
    (xdc_Char)0x66,  /* [7026] */
    (xdc_Char)0x65,  /* [7027] */
    (xdc_Char)0x61,  /* [7028] */
    (xdc_Char)0x74,  /* [7029] */
    (xdc_Char)0x75,  /* [7030] */
    (xdc_Char)0x72,  /* [7031] */
    (xdc_Char)0x65,  /* [7032] */
    (xdc_Char)0x20,  /* [7033] */
    (xdc_Char)0x74,  /* [7034] */
    (xdc_Char)0x68,  /* [7035] */
    (xdc_Char)0x61,  /* [7036] */
    (xdc_Char)0x74,  /* [7037] */
    (xdc_Char)0x20,  /* [7038] */
    (xdc_Char)0x69,  /* [7039] */
    (xdc_Char)0x73,  /* [7040] */
    (xdc_Char)0x20,  /* [7041] */
    (xdc_Char)0x6e,  /* [7042] */
    (xdc_Char)0x6f,  /* [7043] */
    (xdc_Char)0x74,  /* [7044] */
    (xdc_Char)0x20,  /* [7045] */
    (xdc_Char)0x69,  /* [7046] */
    (xdc_Char)0x6d,  /* [7047] */
    (xdc_Char)0x70,  /* [7048] */
    (xdc_Char)0x6c,  /* [7049] */
    (xdc_Char)0x65,  /* [7050] */
    (xdc_Char)0x6d,  /* [7051] */
    (xdc_Char)0x65,  /* [7052] */
    (xdc_Char)0x6e,  /* [7053] */
    (xdc_Char)0x74,  /* [7054] */
    (xdc_Char)0x65,  /* [7055] */
    (xdc_Char)0x64,  /* [7056] */
    (xdc_Char)0x20,  /* [7057] */
    (xdc_Char)0x61,  /* [7058] */
    (xdc_Char)0x74,  /* [7059] */
    (xdc_Char)0x20,  /* [7060] */
    (xdc_Char)0x25,  /* [7061] */
    (xdc_Char)0x24,  /* [7062] */
    (xdc_Char)0x46,  /* [7063] */
    (xdc_Char)0x2e,  /* [7064] */
    (xdc_Char)0x0,  /* [7065] */
    (xdc_Char)0x45,  /* [7066] */
    (xdc_Char)0x52,  /* [7067] */
    (xdc_Char)0x52,  /* [7068] */
    (xdc_Char)0x4f,  /* [7069] */
    (xdc_Char)0x52,  /* [7070] */
    (xdc_Char)0x3a,  /* [7071] */
    (xdc_Char)0x20,  /* [7072] */
    (xdc_Char)0x53,  /* [7073] */
    (xdc_Char)0x74,  /* [7074] */
    (xdc_Char)0x61,  /* [7075] */
    (xdc_Char)0x63,  /* [7076] */
    (xdc_Char)0x6b,  /* [7077] */
    (xdc_Char)0x20,  /* [7078] */
    (xdc_Char)0x4f,  /* [7079] */
    (xdc_Char)0x76,  /* [7080] */
    (xdc_Char)0x65,  /* [7081] */
    (xdc_Char)0x72,  /* [7082] */
    (xdc_Char)0x66,  /* [7083] */
    (xdc_Char)0x6c,  /* [7084] */
    (xdc_Char)0x6f,  /* [7085] */
    (xdc_Char)0x77,  /* [7086] */
    (xdc_Char)0x20,  /* [7087] */
    (xdc_Char)0x64,  /* [7088] */
    (xdc_Char)0x65,  /* [7089] */
    (xdc_Char)0x74,  /* [7090] */
    (xdc_Char)0x65,  /* [7091] */
    (xdc_Char)0x63,  /* [7092] */
    (xdc_Char)0x74,  /* [7093] */
    (xdc_Char)0x65,  /* [7094] */
    (xdc_Char)0x64,  /* [7095] */
    (xdc_Char)0x20,  /* [7096] */
    (xdc_Char)0x61,  /* [7097] */
    (xdc_Char)0x74,  /* [7098] */
    (xdc_Char)0x20,  /* [7099] */
    (xdc_Char)0x25,  /* [7100] */
    (xdc_Char)0x24,  /* [7101] */
    (xdc_Char)0x46,  /* [7102] */
    (xdc_Char)0x2e,  /* [7103] */
    (xdc_Char)0x0,  /* [7104] */
    (xdc_Char)0x45,  /* [7105] */
    (xdc_Char)0x52,  /* [7106] */
    (xdc_Char)0x52,  /* [7107] */
    (xdc_Char)0x4f,  /* [7108] */
    (xdc_Char)0x52,  /* [7109] */
    (xdc_Char)0x3a,  /* [7110] */
    (xdc_Char)0x20,  /* [7111] */
    (xdc_Char)0x49,  /* [7112] */
    (xdc_Char)0x6c,  /* [7113] */
    (xdc_Char)0x6c,  /* [7114] */
    (xdc_Char)0x65,  /* [7115] */
    (xdc_Char)0x67,  /* [7116] */
    (xdc_Char)0x61,  /* [7117] */
    (xdc_Char)0x6c,  /* [7118] */
    (xdc_Char)0x20,  /* [7119] */
    (xdc_Char)0x49,  /* [7120] */
    (xdc_Char)0x6e,  /* [7121] */
    (xdc_Char)0x73,  /* [7122] */
    (xdc_Char)0x74,  /* [7123] */
    (xdc_Char)0x72,  /* [7124] */
    (xdc_Char)0x75,  /* [7125] */
    (xdc_Char)0x63,  /* [7126] */
    (xdc_Char)0x74,  /* [7127] */
    (xdc_Char)0x69,  /* [7128] */
    (xdc_Char)0x6f,  /* [7129] */
    (xdc_Char)0x6e,  /* [7130] */
    (xdc_Char)0x20,  /* [7131] */
    (xdc_Char)0x65,  /* [7132] */
    (xdc_Char)0x78,  /* [7133] */
    (xdc_Char)0x65,  /* [7134] */
    (xdc_Char)0x63,  /* [7135] */
    (xdc_Char)0x75,  /* [7136] */
    (xdc_Char)0x74,  /* [7137] */
    (xdc_Char)0x65,  /* [7138] */
    (xdc_Char)0x64,  /* [7139] */
    (xdc_Char)0x20,  /* [7140] */
    (xdc_Char)0x61,  /* [7141] */
    (xdc_Char)0x74,  /* [7142] */
    (xdc_Char)0x20,  /* [7143] */
    (xdc_Char)0x25,  /* [7144] */
    (xdc_Char)0x24,  /* [7145] */
    (xdc_Char)0x46,  /* [7146] */
    (xdc_Char)0x2e,  /* [7147] */
    (xdc_Char)0x0,  /* [7148] */
    (xdc_Char)0x45,  /* [7149] */
    (xdc_Char)0x52,  /* [7150] */
    (xdc_Char)0x52,  /* [7151] */
    (xdc_Char)0x4f,  /* [7152] */
    (xdc_Char)0x52,  /* [7153] */
    (xdc_Char)0x3a,  /* [7154] */
    (xdc_Char)0x20,  /* [7155] */
    (xdc_Char)0x45,  /* [7156] */
    (xdc_Char)0x6e,  /* [7157] */
    (xdc_Char)0x74,  /* [7158] */
    (xdc_Char)0x72,  /* [7159] */
    (xdc_Char)0x79,  /* [7160] */
    (xdc_Char)0x20,  /* [7161] */
    (xdc_Char)0x50,  /* [7162] */
    (xdc_Char)0x6f,  /* [7163] */
    (xdc_Char)0x69,  /* [7164] */
    (xdc_Char)0x6e,  /* [7165] */
    (xdc_Char)0x74,  /* [7166] */
    (xdc_Char)0x20,  /* [7167] */
    (xdc_Char)0x4e,  /* [7168] */
    (xdc_Char)0x6f,  /* [7169] */
    (xdc_Char)0x74,  /* [7170] */
    (xdc_Char)0x20,  /* [7171] */
    (xdc_Char)0x46,  /* [7172] */
    (xdc_Char)0x6f,  /* [7173] */
    (xdc_Char)0x75,  /* [7174] */
    (xdc_Char)0x6e,  /* [7175] */
    (xdc_Char)0x64,  /* [7176] */
    (xdc_Char)0x20,  /* [7177] */
    (xdc_Char)0x61,  /* [7178] */
    (xdc_Char)0x74,  /* [7179] */
    (xdc_Char)0x20,  /* [7180] */
    (xdc_Char)0x25,  /* [7181] */
    (xdc_Char)0x24,  /* [7182] */
    (xdc_Char)0x46,  /* [7183] */
    (xdc_Char)0x2e,  /* [7184] */
    (xdc_Char)0x0,  /* [7185] */
    (xdc_Char)0x45,  /* [7186] */
    (xdc_Char)0x52,  /* [7187] */
    (xdc_Char)0x52,  /* [7188] */
    (xdc_Char)0x4f,  /* [7189] */
    (xdc_Char)0x52,  /* [7190] */
    (xdc_Char)0x3a,  /* [7191] */
    (xdc_Char)0x20,  /* [7192] */
    (xdc_Char)0x4d,  /* [7193] */
    (xdc_Char)0x6f,  /* [7194] */
    (xdc_Char)0x64,  /* [7195] */
    (xdc_Char)0x75,  /* [7196] */
    (xdc_Char)0x6c,  /* [7197] */
    (xdc_Char)0x65,  /* [7198] */
    (xdc_Char)0x20,  /* [7199] */
    (xdc_Char)0x6e,  /* [7200] */
    (xdc_Char)0x6f,  /* [7201] */
    (xdc_Char)0x74,  /* [7202] */
    (xdc_Char)0x20,  /* [7203] */
    (xdc_Char)0x66,  /* [7204] */
    (xdc_Char)0x6f,  /* [7205] */
    (xdc_Char)0x75,  /* [7206] */
    (xdc_Char)0x6e,  /* [7207] */
    (xdc_Char)0x64,  /* [7208] */
    (xdc_Char)0x20,  /* [7209] */
    (xdc_Char)0x61,  /* [7210] */
    (xdc_Char)0x74,  /* [7211] */
    (xdc_Char)0x20,  /* [7212] */
    (xdc_Char)0x25,  /* [7213] */
    (xdc_Char)0x24,  /* [7214] */
    (xdc_Char)0x46,  /* [7215] */
    (xdc_Char)0x2e,  /* [7216] */
    (xdc_Char)0x20,  /* [7217] */
    (xdc_Char)0x5b,  /* [7218] */
    (xdc_Char)0x4d,  /* [7219] */
    (xdc_Char)0x4f,  /* [7220] */
    (xdc_Char)0x44,  /* [7221] */
    (xdc_Char)0x55,  /* [7222] */
    (xdc_Char)0x4c,  /* [7223] */
    (xdc_Char)0x45,  /* [7224] */
    (xdc_Char)0x5f,  /* [7225] */
    (xdc_Char)0x49,  /* [7226] */
    (xdc_Char)0x44,  /* [7227] */
    (xdc_Char)0x5d,  /* [7228] */
    (xdc_Char)0x30,  /* [7229] */
    (xdc_Char)0x78,  /* [7230] */
    (xdc_Char)0x25,  /* [7231] */
    (xdc_Char)0x78,  /* [7232] */
    (xdc_Char)0x2e,  /* [7233] */
    (xdc_Char)0x0,  /* [7234] */
    (xdc_Char)0x45,  /* [7235] */
    (xdc_Char)0x52,  /* [7236] */
    (xdc_Char)0x52,  /* [7237] */
    (xdc_Char)0x4f,  /* [7238] */
    (xdc_Char)0x52,  /* [7239] */
    (xdc_Char)0x3a,  /* [7240] */
    (xdc_Char)0x20,  /* [7241] */
    (xdc_Char)0x46,  /* [7242] */
    (xdc_Char)0x6c,  /* [7243] */
    (xdc_Char)0x6f,  /* [7244] */
    (xdc_Char)0x61,  /* [7245] */
    (xdc_Char)0x74,  /* [7246] */
    (xdc_Char)0x69,  /* [7247] */
    (xdc_Char)0x6e,  /* [7248] */
    (xdc_Char)0x67,  /* [7249] */
    (xdc_Char)0x20,  /* [7250] */
    (xdc_Char)0x50,  /* [7251] */
    (xdc_Char)0x6f,  /* [7252] */
    (xdc_Char)0x69,  /* [7253] */
    (xdc_Char)0x6e,  /* [7254] */
    (xdc_Char)0x74,  /* [7255] */
    (xdc_Char)0x20,  /* [7256] */
    (xdc_Char)0x45,  /* [7257] */
    (xdc_Char)0x72,  /* [7258] */
    (xdc_Char)0x72,  /* [7259] */
    (xdc_Char)0x6f,  /* [7260] */
    (xdc_Char)0x72,  /* [7261] */
    (xdc_Char)0x20,  /* [7262] */
    (xdc_Char)0x61,  /* [7263] */
    (xdc_Char)0x74,  /* [7264] */
    (xdc_Char)0x20,  /* [7265] */
    (xdc_Char)0x25,  /* [7266] */
    (xdc_Char)0x24,  /* [7267] */
    (xdc_Char)0x46,  /* [7268] */
    (xdc_Char)0x2e,  /* [7269] */
    (xdc_Char)0x0,  /* [7270] */
    (xdc_Char)0x45,  /* [7271] */
    (xdc_Char)0x52,  /* [7272] */
    (xdc_Char)0x52,  /* [7273] */
    (xdc_Char)0x4f,  /* [7274] */
    (xdc_Char)0x52,  /* [7275] */
    (xdc_Char)0x3a,  /* [7276] */
    (xdc_Char)0x20,  /* [7277] */
    (xdc_Char)0x49,  /* [7278] */
    (xdc_Char)0x6e,  /* [7279] */
    (xdc_Char)0x76,  /* [7280] */
    (xdc_Char)0x61,  /* [7281] */
    (xdc_Char)0x6c,  /* [7282] */
    (xdc_Char)0x69,  /* [7283] */
    (xdc_Char)0x64,  /* [7284] */
    (xdc_Char)0x20,  /* [7285] */
    (xdc_Char)0x50,  /* [7286] */
    (xdc_Char)0x61,  /* [7287] */
    (xdc_Char)0x72,  /* [7288] */
    (xdc_Char)0x61,  /* [7289] */
    (xdc_Char)0x6d,  /* [7290] */
    (xdc_Char)0x65,  /* [7291] */
    (xdc_Char)0x74,  /* [7292] */
    (xdc_Char)0x65,  /* [7293] */
    (xdc_Char)0x72,  /* [7294] */
    (xdc_Char)0x20,  /* [7295] */
    (xdc_Char)0x61,  /* [7296] */
    (xdc_Char)0x74,  /* [7297] */
    (xdc_Char)0x20,  /* [7298] */
    (xdc_Char)0x25,  /* [7299] */
    (xdc_Char)0x24,  /* [7300] */
    (xdc_Char)0x46,  /* [7301] */
    (xdc_Char)0x2e,  /* [7302] */
    (xdc_Char)0x20,  /* [7303] */
    (xdc_Char)0x5b,  /* [7304] */
    (xdc_Char)0x50,  /* [7305] */
    (xdc_Char)0x61,  /* [7306] */
    (xdc_Char)0x72,  /* [7307] */
    (xdc_Char)0x61,  /* [7308] */
    (xdc_Char)0x6d,  /* [7309] */
    (xdc_Char)0x4e,  /* [7310] */
    (xdc_Char)0x75,  /* [7311] */
    (xdc_Char)0x6d,  /* [7312] */
    (xdc_Char)0x5d,  /* [7313] */
    (xdc_Char)0x25,  /* [7314] */
    (xdc_Char)0x64,  /* [7315] */
    (xdc_Char)0x20,  /* [7316] */
    (xdc_Char)0x5b,  /* [7317] */
    (xdc_Char)0x50,  /* [7318] */
    (xdc_Char)0x61,  /* [7319] */
    (xdc_Char)0x72,  /* [7320] */
    (xdc_Char)0x61,  /* [7321] */
    (xdc_Char)0x6d,  /* [7322] */
    (xdc_Char)0x56,  /* [7323] */
    (xdc_Char)0x61,  /* [7324] */
    (xdc_Char)0x6c,  /* [7325] */
    (xdc_Char)0x75,  /* [7326] */
    (xdc_Char)0x65,  /* [7327] */
    (xdc_Char)0x5d,  /* [7328] */
    (xdc_Char)0x30,  /* [7329] */
    (xdc_Char)0x78,  /* [7330] */
    (xdc_Char)0x25,  /* [7331] */
    (xdc_Char)0x78,  /* [7332] */
    (xdc_Char)0x0,  /* [7333] */
    (xdc_Char)0x57,  /* [7334] */
    (xdc_Char)0x41,  /* [7335] */
    (xdc_Char)0x52,  /* [7336] */
    (xdc_Char)0x4e,  /* [7337] */
    (xdc_Char)0x49,  /* [7338] */
    (xdc_Char)0x4e,  /* [7339] */
    (xdc_Char)0x47,  /* [7340] */
    (xdc_Char)0x3a,  /* [7341] */
    (xdc_Char)0x20,  /* [7342] */
    (xdc_Char)0x45,  /* [7343] */
    (xdc_Char)0x76,  /* [7344] */
    (xdc_Char)0x65,  /* [7345] */
    (xdc_Char)0x6e,  /* [7346] */
    (xdc_Char)0x74,  /* [7347] */
    (xdc_Char)0x43,  /* [7348] */
    (xdc_Char)0x6f,  /* [7349] */
    (xdc_Char)0x64,  /* [7350] */
    (xdc_Char)0x65,  /* [7351] */
    (xdc_Char)0x3a,  /* [7352] */
    (xdc_Char)0x30,  /* [7353] */
    (xdc_Char)0x78,  /* [7354] */
    (xdc_Char)0x25,  /* [7355] */
    (xdc_Char)0x78,  /* [7356] */
    (xdc_Char)0x0,  /* [7357] */
    (xdc_Char)0x57,  /* [7358] */
    (xdc_Char)0x41,  /* [7359] */
    (xdc_Char)0x52,  /* [7360] */
    (xdc_Char)0x4e,  /* [7361] */
    (xdc_Char)0x49,  /* [7362] */
    (xdc_Char)0x4e,  /* [7363] */
    (xdc_Char)0x47,  /* [7364] */
    (xdc_Char)0x3a,  /* [7365] */
    (xdc_Char)0x20,  /* [7366] */
    (xdc_Char)0x45,  /* [7367] */
    (xdc_Char)0x76,  /* [7368] */
    (xdc_Char)0x65,  /* [7369] */
    (xdc_Char)0x6e,  /* [7370] */
    (xdc_Char)0x74,  /* [7371] */
    (xdc_Char)0x43,  /* [7372] */
    (xdc_Char)0x6f,  /* [7373] */
    (xdc_Char)0x64,  /* [7374] */
    (xdc_Char)0x65,  /* [7375] */
    (xdc_Char)0x3a,  /* [7376] */
    (xdc_Char)0x30,  /* [7377] */
    (xdc_Char)0x78,  /* [7378] */
    (xdc_Char)0x25,  /* [7379] */
    (xdc_Char)0x78,  /* [7380] */
    (xdc_Char)0x2e,  /* [7381] */
    (xdc_Char)0x20,  /* [7382] */
    (xdc_Char)0x25,  /* [7383] */
    (xdc_Char)0x24,  /* [7384] */
    (xdc_Char)0x53,  /* [7385] */
    (xdc_Char)0x0,  /* [7386] */
    (xdc_Char)0x49,  /* [7387] */
    (xdc_Char)0x4e,  /* [7388] */
    (xdc_Char)0x46,  /* [7389] */
    (xdc_Char)0x4f,  /* [7390] */
    (xdc_Char)0x3a,  /* [7391] */
    (xdc_Char)0x20,  /* [7392] */
    (xdc_Char)0x45,  /* [7393] */
    (xdc_Char)0x76,  /* [7394] */
    (xdc_Char)0x65,  /* [7395] */
    (xdc_Char)0x6e,  /* [7396] */
    (xdc_Char)0x74,  /* [7397] */
    (xdc_Char)0x43,  /* [7398] */
    (xdc_Char)0x6f,  /* [7399] */
    (xdc_Char)0x64,  /* [7400] */
    (xdc_Char)0x65,  /* [7401] */
    (xdc_Char)0x3a,  /* [7402] */
    (xdc_Char)0x20,  /* [7403] */
    (xdc_Char)0x30,  /* [7404] */
    (xdc_Char)0x78,  /* [7405] */
    (xdc_Char)0x25,  /* [7406] */
    (xdc_Char)0x78,  /* [7407] */
    (xdc_Char)0x0,  /* [7408] */
    (xdc_Char)0x49,  /* [7409] */
    (xdc_Char)0x4e,  /* [7410] */
    (xdc_Char)0x46,  /* [7411] */
    (xdc_Char)0x4f,  /* [7412] */
    (xdc_Char)0x3a,  /* [7413] */
    (xdc_Char)0x20,  /* [7414] */
    (xdc_Char)0x45,  /* [7415] */
    (xdc_Char)0x76,  /* [7416] */
    (xdc_Char)0x65,  /* [7417] */
    (xdc_Char)0x6e,  /* [7418] */
    (xdc_Char)0x74,  /* [7419] */
    (xdc_Char)0x43,  /* [7420] */
    (xdc_Char)0x6f,  /* [7421] */
    (xdc_Char)0x64,  /* [7422] */
    (xdc_Char)0x65,  /* [7423] */
    (xdc_Char)0x3a,  /* [7424] */
    (xdc_Char)0x30,  /* [7425] */
    (xdc_Char)0x78,  /* [7426] */
    (xdc_Char)0x25,  /* [7427] */
    (xdc_Char)0x78,  /* [7428] */
    (xdc_Char)0x2e,  /* [7429] */
    (xdc_Char)0x20,  /* [7430] */
    (xdc_Char)0x20,  /* [7431] */
    (xdc_Char)0x25,  /* [7432] */
    (xdc_Char)0x24,  /* [7433] */
    (xdc_Char)0x53,  /* [7434] */
    (xdc_Char)0x0,  /* [7435] */
    (xdc_Char)0x44,  /* [7436] */
    (xdc_Char)0x45,  /* [7437] */
    (xdc_Char)0x54,  /* [7438] */
    (xdc_Char)0x41,  /* [7439] */
    (xdc_Char)0x49,  /* [7440] */
    (xdc_Char)0x4c,  /* [7441] */
    (xdc_Char)0x3a,  /* [7442] */
    (xdc_Char)0x20,  /* [7443] */
    (xdc_Char)0x45,  /* [7444] */
    (xdc_Char)0x76,  /* [7445] */
    (xdc_Char)0x65,  /* [7446] */
    (xdc_Char)0x6e,  /* [7447] */
    (xdc_Char)0x74,  /* [7448] */
    (xdc_Char)0x43,  /* [7449] */
    (xdc_Char)0x6f,  /* [7450] */
    (xdc_Char)0x64,  /* [7451] */
    (xdc_Char)0x65,  /* [7452] */
    (xdc_Char)0x3a,  /* [7453] */
    (xdc_Char)0x30,  /* [7454] */
    (xdc_Char)0x78,  /* [7455] */
    (xdc_Char)0x25,  /* [7456] */
    (xdc_Char)0x78,  /* [7457] */
    (xdc_Char)0x0,  /* [7458] */
    (xdc_Char)0x44,  /* [7459] */
    (xdc_Char)0x45,  /* [7460] */
    (xdc_Char)0x54,  /* [7461] */
    (xdc_Char)0x41,  /* [7462] */
    (xdc_Char)0x49,  /* [7463] */
    (xdc_Char)0x4c,  /* [7464] */
    (xdc_Char)0x3a,  /* [7465] */
    (xdc_Char)0x20,  /* [7466] */
    (xdc_Char)0x45,  /* [7467] */
    (xdc_Char)0x76,  /* [7468] */
    (xdc_Char)0x65,  /* [7469] */
    (xdc_Char)0x6e,  /* [7470] */
    (xdc_Char)0x74,  /* [7471] */
    (xdc_Char)0x43,  /* [7472] */
    (xdc_Char)0x6f,  /* [7473] */
    (xdc_Char)0x64,  /* [7474] */
    (xdc_Char)0x65,  /* [7475] */
    (xdc_Char)0x3a,  /* [7476] */
    (xdc_Char)0x30,  /* [7477] */
    (xdc_Char)0x78,  /* [7478] */
    (xdc_Char)0x25,  /* [7479] */
    (xdc_Char)0x78,  /* [7480] */
    (xdc_Char)0x2e,  /* [7481] */
    (xdc_Char)0x20,  /* [7482] */
    (xdc_Char)0x20,  /* [7483] */
    (xdc_Char)0x25,  /* [7484] */
    (xdc_Char)0x24,  /* [7485] */
    (xdc_Char)0x53,  /* [7486] */
    (xdc_Char)0x0,  /* [7487] */
    (xdc_Char)0x56,  /* [7488] */
    (xdc_Char)0x41,  /* [7489] */
    (xdc_Char)0x4c,  /* [7490] */
    (xdc_Char)0x55,  /* [7491] */
    (xdc_Char)0x45,  /* [7492] */
    (xdc_Char)0x3d,  /* [7493] */
    (xdc_Char)0x25,  /* [7494] */
    (xdc_Char)0x64,  /* [7495] */
    (xdc_Char)0x20,  /* [7496] */
    (xdc_Char)0x28,  /* [7497] */
    (xdc_Char)0x41,  /* [7498] */
    (xdc_Char)0x75,  /* [7499] */
    (xdc_Char)0x78,  /* [7500] */
    (xdc_Char)0x44,  /* [7501] */
    (xdc_Char)0x61,  /* [7502] */
    (xdc_Char)0x74,  /* [7503] */
    (xdc_Char)0x61,  /* [7504] */
    (xdc_Char)0x3d,  /* [7505] */
    (xdc_Char)0x25,  /* [7506] */
    (xdc_Char)0x64,  /* [7507] */
    (xdc_Char)0x2c,  /* [7508] */
    (xdc_Char)0x20,  /* [7509] */
    (xdc_Char)0x25,  /* [7510] */
    (xdc_Char)0x64,  /* [7511] */
    (xdc_Char)0x29,  /* [7512] */
    (xdc_Char)0x20,  /* [7513] */
    (xdc_Char)0x4b,  /* [7514] */
    (xdc_Char)0x65,  /* [7515] */
    (xdc_Char)0x79,  /* [7516] */
    (xdc_Char)0x3a,  /* [7517] */
    (xdc_Char)0x25,  /* [7518] */
    (xdc_Char)0x24,  /* [7519] */
    (xdc_Char)0x53,  /* [7520] */
    (xdc_Char)0x0,  /* [7521] */
    (xdc_Char)0x4c,  /* [7522] */
    (xdc_Char)0x4d,  /* [7523] */
    (xdc_Char)0x5f,  /* [7524] */
    (xdc_Char)0x62,  /* [7525] */
    (xdc_Char)0x65,  /* [7526] */
    (xdc_Char)0x67,  /* [7527] */
    (xdc_Char)0x69,  /* [7528] */
    (xdc_Char)0x6e,  /* [7529] */
    (xdc_Char)0x3a,  /* [7530] */
    (xdc_Char)0x20,  /* [7531] */
    (xdc_Char)0x68,  /* [7532] */
    (xdc_Char)0x77,  /* [7533] */
    (xdc_Char)0x69,  /* [7534] */
    (xdc_Char)0x3a,  /* [7535] */
    (xdc_Char)0x20,  /* [7536] */
    (xdc_Char)0x30,  /* [7537] */
    (xdc_Char)0x78,  /* [7538] */
    (xdc_Char)0x25,  /* [7539] */
    (xdc_Char)0x78,  /* [7540] */
    (xdc_Char)0x2c,  /* [7541] */
    (xdc_Char)0x20,  /* [7542] */
    (xdc_Char)0x66,  /* [7543] */
    (xdc_Char)0x75,  /* [7544] */
    (xdc_Char)0x6e,  /* [7545] */
    (xdc_Char)0x63,  /* [7546] */
    (xdc_Char)0x3a,  /* [7547] */
    (xdc_Char)0x20,  /* [7548] */
    (xdc_Char)0x30,  /* [7549] */
    (xdc_Char)0x78,  /* [7550] */
    (xdc_Char)0x25,  /* [7551] */
    (xdc_Char)0x78,  /* [7552] */
    (xdc_Char)0x2c,  /* [7553] */
    (xdc_Char)0x20,  /* [7554] */
    (xdc_Char)0x70,  /* [7555] */
    (xdc_Char)0x72,  /* [7556] */
    (xdc_Char)0x65,  /* [7557] */
    (xdc_Char)0x54,  /* [7558] */
    (xdc_Char)0x68,  /* [7559] */
    (xdc_Char)0x72,  /* [7560] */
    (xdc_Char)0x65,  /* [7561] */
    (xdc_Char)0x61,  /* [7562] */
    (xdc_Char)0x64,  /* [7563] */
    (xdc_Char)0x3a,  /* [7564] */
    (xdc_Char)0x20,  /* [7565] */
    (xdc_Char)0x25,  /* [7566] */
    (xdc_Char)0x64,  /* [7567] */
    (xdc_Char)0x2c,  /* [7568] */
    (xdc_Char)0x20,  /* [7569] */
    (xdc_Char)0x69,  /* [7570] */
    (xdc_Char)0x6e,  /* [7571] */
    (xdc_Char)0x74,  /* [7572] */
    (xdc_Char)0x4e,  /* [7573] */
    (xdc_Char)0x75,  /* [7574] */
    (xdc_Char)0x6d,  /* [7575] */
    (xdc_Char)0x3a,  /* [7576] */
    (xdc_Char)0x20,  /* [7577] */
    (xdc_Char)0x25,  /* [7578] */
    (xdc_Char)0x64,  /* [7579] */
    (xdc_Char)0x2c,  /* [7580] */
    (xdc_Char)0x20,  /* [7581] */
    (xdc_Char)0x69,  /* [7582] */
    (xdc_Char)0x72,  /* [7583] */
    (xdc_Char)0x70,  /* [7584] */
    (xdc_Char)0x3a,  /* [7585] */
    (xdc_Char)0x20,  /* [7586] */
    (xdc_Char)0x30,  /* [7587] */
    (xdc_Char)0x78,  /* [7588] */
    (xdc_Char)0x25,  /* [7589] */
    (xdc_Char)0x78,  /* [7590] */
    (xdc_Char)0x0,  /* [7591] */
    (xdc_Char)0x4c,  /* [7592] */
    (xdc_Char)0x44,  /* [7593] */
    (xdc_Char)0x5f,  /* [7594] */
    (xdc_Char)0x65,  /* [7595] */
    (xdc_Char)0x6e,  /* [7596] */
    (xdc_Char)0x64,  /* [7597] */
    (xdc_Char)0x3a,  /* [7598] */
    (xdc_Char)0x20,  /* [7599] */
    (xdc_Char)0x68,  /* [7600] */
    (xdc_Char)0x77,  /* [7601] */
    (xdc_Char)0x69,  /* [7602] */
    (xdc_Char)0x3a,  /* [7603] */
    (xdc_Char)0x20,  /* [7604] */
    (xdc_Char)0x30,  /* [7605] */
    (xdc_Char)0x78,  /* [7606] */
    (xdc_Char)0x25,  /* [7607] */
    (xdc_Char)0x78,  /* [7608] */
    (xdc_Char)0x0,  /* [7609] */
    (xdc_Char)0x4c,  /* [7610] */
    (xdc_Char)0x6f,  /* [7611] */
    (xdc_Char)0x67,  /* [7612] */
    (xdc_Char)0x67,  /* [7613] */
    (xdc_Char)0x65,  /* [7614] */
    (xdc_Char)0x72,  /* [7615] */
    (xdc_Char)0x53,  /* [7616] */
    (xdc_Char)0x74,  /* [7617] */
    (xdc_Char)0x6f,  /* [7618] */
    (xdc_Char)0x70,  /* [7619] */
    (xdc_Char)0x4d,  /* [7620] */
    (xdc_Char)0x6f,  /* [7621] */
    (xdc_Char)0x64,  /* [7622] */
    (xdc_Char)0x65,  /* [7623] */
    (xdc_Char)0x20,  /* [7624] */
    (xdc_Char)0x54,  /* [7625] */
    (xdc_Char)0x65,  /* [7626] */
    (xdc_Char)0x73,  /* [7627] */
    (xdc_Char)0x74,  /* [7628] */
    (xdc_Char)0x0,  /* [7629] */
    (xdc_Char)0x4c,  /* [7630] */
    (xdc_Char)0x53,  /* [7631] */
    (xdc_Char)0x5f,  /* [7632] */
    (xdc_Char)0x63,  /* [7633] */
    (xdc_Char)0x70,  /* [7634] */
    (xdc_Char)0x75,  /* [7635] */
    (xdc_Char)0x4c,  /* [7636] */
    (xdc_Char)0x6f,  /* [7637] */
    (xdc_Char)0x61,  /* [7638] */
    (xdc_Char)0x64,  /* [7639] */
    (xdc_Char)0x3a,  /* [7640] */
    (xdc_Char)0x20,  /* [7641] */
    (xdc_Char)0x25,  /* [7642] */
    (xdc_Char)0x64,  /* [7643] */
    (xdc_Char)0x25,  /* [7644] */
    (xdc_Char)0x25,  /* [7645] */
    (xdc_Char)0x0,  /* [7646] */
    (xdc_Char)0x4c,  /* [7647] */
    (xdc_Char)0x53,  /* [7648] */
    (xdc_Char)0x5f,  /* [7649] */
    (xdc_Char)0x68,  /* [7650] */
    (xdc_Char)0x77,  /* [7651] */
    (xdc_Char)0x69,  /* [7652] */
    (xdc_Char)0x4c,  /* [7653] */
    (xdc_Char)0x6f,  /* [7654] */
    (xdc_Char)0x61,  /* [7655] */
    (xdc_Char)0x64,  /* [7656] */
    (xdc_Char)0x3a,  /* [7657] */
    (xdc_Char)0x20,  /* [7658] */
    (xdc_Char)0x25,  /* [7659] */
    (xdc_Char)0x64,  /* [7660] */
    (xdc_Char)0x2c,  /* [7661] */
    (xdc_Char)0x25,  /* [7662] */
    (xdc_Char)0x64,  /* [7663] */
    (xdc_Char)0x0,  /* [7664] */
    (xdc_Char)0x4c,  /* [7665] */
    (xdc_Char)0x53,  /* [7666] */
    (xdc_Char)0x5f,  /* [7667] */
    (xdc_Char)0x73,  /* [7668] */
    (xdc_Char)0x77,  /* [7669] */
    (xdc_Char)0x69,  /* [7670] */
    (xdc_Char)0x4c,  /* [7671] */
    (xdc_Char)0x6f,  /* [7672] */
    (xdc_Char)0x61,  /* [7673] */
    (xdc_Char)0x64,  /* [7674] */
    (xdc_Char)0x3a,  /* [7675] */
    (xdc_Char)0x20,  /* [7676] */
    (xdc_Char)0x25,  /* [7677] */
    (xdc_Char)0x64,  /* [7678] */
    (xdc_Char)0x2c,  /* [7679] */
    (xdc_Char)0x25,  /* [7680] */
    (xdc_Char)0x64,  /* [7681] */
    (xdc_Char)0x0,  /* [7682] */
    (xdc_Char)0x4c,  /* [7683] */
    (xdc_Char)0x53,  /* [7684] */
    (xdc_Char)0x5f,  /* [7685] */
    (xdc_Char)0x74,  /* [7686] */
    (xdc_Char)0x61,  /* [7687] */
    (xdc_Char)0x73,  /* [7688] */
    (xdc_Char)0x6b,  /* [7689] */
    (xdc_Char)0x4c,  /* [7690] */
    (xdc_Char)0x6f,  /* [7691] */
    (xdc_Char)0x61,  /* [7692] */
    (xdc_Char)0x64,  /* [7693] */
    (xdc_Char)0x3a,  /* [7694] */
    (xdc_Char)0x20,  /* [7695] */
    (xdc_Char)0x30,  /* [7696] */
    (xdc_Char)0x78,  /* [7697] */
    (xdc_Char)0x25,  /* [7698] */
    (xdc_Char)0x78,  /* [7699] */
    (xdc_Char)0x2c,  /* [7700] */
    (xdc_Char)0x25,  /* [7701] */
    (xdc_Char)0x64,  /* [7702] */
    (xdc_Char)0x2c,  /* [7703] */
    (xdc_Char)0x25,  /* [7704] */
    (xdc_Char)0x64,  /* [7705] */
    (xdc_Char)0x2c,  /* [7706] */
    (xdc_Char)0x30,  /* [7707] */
    (xdc_Char)0x78,  /* [7708] */
    (xdc_Char)0x25,  /* [7709] */
    (xdc_Char)0x78,  /* [7710] */
    (xdc_Char)0x0,  /* [7711] */
    (xdc_Char)0x78,  /* [7712] */
    (xdc_Char)0x64,  /* [7713] */
    (xdc_Char)0x63,  /* [7714] */
    (xdc_Char)0x2e,  /* [7715] */
    (xdc_Char)0x0,  /* [7716] */
    (xdc_Char)0x72,  /* [7717] */
    (xdc_Char)0x75,  /* [7718] */
    (xdc_Char)0x6e,  /* [7719] */
    (xdc_Char)0x74,  /* [7720] */
    (xdc_Char)0x69,  /* [7721] */
    (xdc_Char)0x6d,  /* [7722] */
    (xdc_Char)0x65,  /* [7723] */
    (xdc_Char)0x2e,  /* [7724] */
    (xdc_Char)0x0,  /* [7725] */
    (xdc_Char)0x41,  /* [7726] */
    (xdc_Char)0x73,  /* [7727] */
    (xdc_Char)0x73,  /* [7728] */
    (xdc_Char)0x65,  /* [7729] */
    (xdc_Char)0x72,  /* [7730] */
    (xdc_Char)0x74,  /* [7731] */
    (xdc_Char)0x0,  /* [7732] */
    (xdc_Char)0x43,  /* [7733] */
    (xdc_Char)0x6f,  /* [7734] */
    (xdc_Char)0x72,  /* [7735] */
    (xdc_Char)0x65,  /* [7736] */
    (xdc_Char)0x0,  /* [7737] */
    (xdc_Char)0x44,  /* [7738] */
    (xdc_Char)0x65,  /* [7739] */
    (xdc_Char)0x66,  /* [7740] */
    (xdc_Char)0x61,  /* [7741] */
    (xdc_Char)0x75,  /* [7742] */
    (xdc_Char)0x6c,  /* [7743] */
    (xdc_Char)0x74,  /* [7744] */
    (xdc_Char)0x73,  /* [7745] */
    (xdc_Char)0x0,  /* [7746] */
    (xdc_Char)0x44,  /* [7747] */
    (xdc_Char)0x69,  /* [7748] */
    (xdc_Char)0x61,  /* [7749] */
    (xdc_Char)0x67,  /* [7750] */
    (xdc_Char)0x73,  /* [7751] */
    (xdc_Char)0x0,  /* [7752] */
    (xdc_Char)0x45,  /* [7753] */
    (xdc_Char)0x72,  /* [7754] */
    (xdc_Char)0x72,  /* [7755] */
    (xdc_Char)0x6f,  /* [7756] */
    (xdc_Char)0x72,  /* [7757] */
    (xdc_Char)0x0,  /* [7758] */
    (xdc_Char)0x47,  /* [7759] */
    (xdc_Char)0x61,  /* [7760] */
    (xdc_Char)0x74,  /* [7761] */
    (xdc_Char)0x65,  /* [7762] */
    (xdc_Char)0x0,  /* [7763] */
    (xdc_Char)0x4c,  /* [7764] */
    (xdc_Char)0x6f,  /* [7765] */
    (xdc_Char)0x67,  /* [7766] */
    (xdc_Char)0x0,  /* [7767] */
    (xdc_Char)0x4d,  /* [7768] */
    (xdc_Char)0x61,  /* [7769] */
    (xdc_Char)0x69,  /* [7770] */
    (xdc_Char)0x6e,  /* [7771] */
    (xdc_Char)0x0,  /* [7772] */
    (xdc_Char)0x4d,  /* [7773] */
    (xdc_Char)0x65,  /* [7774] */
    (xdc_Char)0x6d,  /* [7775] */
    (xdc_Char)0x6f,  /* [7776] */
    (xdc_Char)0x72,  /* [7777] */
    (xdc_Char)0x79,  /* [7778] */
    (xdc_Char)0x0,  /* [7779] */
    (xdc_Char)0x52,  /* [7780] */
    (xdc_Char)0x65,  /* [7781] */
    (xdc_Char)0x67,  /* [7782] */
    (xdc_Char)0x69,  /* [7783] */
    (xdc_Char)0x73,  /* [7784] */
    (xdc_Char)0x74,  /* [7785] */
    (xdc_Char)0x72,  /* [7786] */
    (xdc_Char)0x79,  /* [7787] */
    (xdc_Char)0x0,  /* [7788] */
    (xdc_Char)0x53,  /* [7789] */
    (xdc_Char)0x74,  /* [7790] */
    (xdc_Char)0x61,  /* [7791] */
    (xdc_Char)0x72,  /* [7792] */
    (xdc_Char)0x74,  /* [7793] */
    (xdc_Char)0x75,  /* [7794] */
    (xdc_Char)0x70,  /* [7795] */
    (xdc_Char)0x0,  /* [7796] */
    (xdc_Char)0x53,  /* [7797] */
    (xdc_Char)0x79,  /* [7798] */
    (xdc_Char)0x73,  /* [7799] */
    (xdc_Char)0x74,  /* [7800] */
    (xdc_Char)0x65,  /* [7801] */
    (xdc_Char)0x6d,  /* [7802] */
    (xdc_Char)0x0,  /* [7803] */
    (xdc_Char)0x53,  /* [7804] */
    (xdc_Char)0x79,  /* [7805] */
    (xdc_Char)0x73,  /* [7806] */
    (xdc_Char)0x4d,  /* [7807] */
    (xdc_Char)0x69,  /* [7808] */
    (xdc_Char)0x6e,  /* [7809] */
    (xdc_Char)0x0,  /* [7810] */
    (xdc_Char)0x54,  /* [7811] */
    (xdc_Char)0x65,  /* [7812] */
    (xdc_Char)0x78,  /* [7813] */
    (xdc_Char)0x74,  /* [7814] */
    (xdc_Char)0x0,  /* [7815] */
    (xdc_Char)0x54,  /* [7816] */
    (xdc_Char)0x69,  /* [7817] */
    (xdc_Char)0x6d,  /* [7818] */
    (xdc_Char)0x65,  /* [7819] */
    (xdc_Char)0x73,  /* [7820] */
    (xdc_Char)0x74,  /* [7821] */
    (xdc_Char)0x61,  /* [7822] */
    (xdc_Char)0x6d,  /* [7823] */
    (xdc_Char)0x70,  /* [7824] */
    (xdc_Char)0x0,  /* [7825] */
    (xdc_Char)0x54,  /* [7826] */
    (xdc_Char)0x79,  /* [7827] */
    (xdc_Char)0x70,  /* [7828] */
    (xdc_Char)0x65,  /* [7829] */
    (xdc_Char)0x73,  /* [7830] */
    (xdc_Char)0x0,  /* [7831] */
    (xdc_Char)0x74,  /* [7832] */
    (xdc_Char)0x69,  /* [7833] */
    (xdc_Char)0x2e,  /* [7834] */
    (xdc_Char)0x0,  /* [7835] */
    (xdc_Char)0x63,  /* [7836] */
    (xdc_Char)0x61,  /* [7837] */
    (xdc_Char)0x74,  /* [7838] */
    (xdc_Char)0x61,  /* [7839] */
    (xdc_Char)0x6c,  /* [7840] */
    (xdc_Char)0x6f,  /* [7841] */
    (xdc_Char)0x67,  /* [7842] */
    (xdc_Char)0x2e,  /* [7843] */
    (xdc_Char)0x0,  /* [7844] */
    (xdc_Char)0x61,  /* [7845] */
    (xdc_Char)0x72,  /* [7846] */
    (xdc_Char)0x6d,  /* [7847] */
    (xdc_Char)0x2e,  /* [7848] */
    (xdc_Char)0x0,  /* [7849] */
    (xdc_Char)0x63,  /* [7850] */
    (xdc_Char)0x6f,  /* [7851] */
    (xdc_Char)0x72,  /* [7852] */
    (xdc_Char)0x74,  /* [7853] */
    (xdc_Char)0x65,  /* [7854] */
    (xdc_Char)0x78,  /* [7855] */
    (xdc_Char)0x6d,  /* [7856] */
    (xdc_Char)0x34,  /* [7857] */
    (xdc_Char)0x2e,  /* [7858] */
    (xdc_Char)0x0,  /* [7859] */
    (xdc_Char)0x74,  /* [7860] */
    (xdc_Char)0x69,  /* [7861] */
    (xdc_Char)0x76,  /* [7862] */
    (xdc_Char)0x61,  /* [7863] */
    (xdc_Char)0x2e,  /* [7864] */
    (xdc_Char)0x0,  /* [7865] */
    (xdc_Char)0x63,  /* [7866] */
    (xdc_Char)0x65,  /* [7867] */
    (xdc_Char)0x2e,  /* [7868] */
    (xdc_Char)0x0,  /* [7869] */
    (xdc_Char)0x42,  /* [7870] */
    (xdc_Char)0x6f,  /* [7871] */
    (xdc_Char)0x6f,  /* [7872] */
    (xdc_Char)0x74,  /* [7873] */
    (xdc_Char)0x0,  /* [7874] */
    (xdc_Char)0x73,  /* [7875] */
    (xdc_Char)0x79,  /* [7876] */
    (xdc_Char)0x73,  /* [7877] */
    (xdc_Char)0x62,  /* [7878] */
    (xdc_Char)0x69,  /* [7879] */
    (xdc_Char)0x6f,  /* [7880] */
    (xdc_Char)0x73,  /* [7881] */
    (xdc_Char)0x2e,  /* [7882] */
    (xdc_Char)0x0,  /* [7883] */
    (xdc_Char)0x6b,  /* [7884] */
    (xdc_Char)0x6e,  /* [7885] */
    (xdc_Char)0x6c,  /* [7886] */
    (xdc_Char)0x2e,  /* [7887] */
    (xdc_Char)0x0,  /* [7888] */
    (xdc_Char)0x43,  /* [7889] */
    (xdc_Char)0x6c,  /* [7890] */
    (xdc_Char)0x6f,  /* [7891] */
    (xdc_Char)0x63,  /* [7892] */
    (xdc_Char)0x6b,  /* [7893] */
    (xdc_Char)0x0,  /* [7894] */
    (xdc_Char)0x49,  /* [7895] */
    (xdc_Char)0x64,  /* [7896] */
    (xdc_Char)0x6c,  /* [7897] */
    (xdc_Char)0x65,  /* [7898] */
    (xdc_Char)0x0,  /* [7899] */
    (xdc_Char)0x49,  /* [7900] */
    (xdc_Char)0x6e,  /* [7901] */
    (xdc_Char)0x74,  /* [7902] */
    (xdc_Char)0x72,  /* [7903] */
    (xdc_Char)0x69,  /* [7904] */
    (xdc_Char)0x6e,  /* [7905] */
    (xdc_Char)0x73,  /* [7906] */
    (xdc_Char)0x69,  /* [7907] */
    (xdc_Char)0x63,  /* [7908] */
    (xdc_Char)0x73,  /* [7909] */
    (xdc_Char)0x0,  /* [7910] */
    (xdc_Char)0x45,  /* [7911] */
    (xdc_Char)0x76,  /* [7912] */
    (xdc_Char)0x65,  /* [7913] */
    (xdc_Char)0x6e,  /* [7914] */
    (xdc_Char)0x74,  /* [7915] */
    (xdc_Char)0x0,  /* [7916] */
    (xdc_Char)0x51,  /* [7917] */
    (xdc_Char)0x75,  /* [7918] */
    (xdc_Char)0x65,  /* [7919] */
    (xdc_Char)0x75,  /* [7920] */
    (xdc_Char)0x65,  /* [7921] */
    (xdc_Char)0x0,  /* [7922] */
    (xdc_Char)0x53,  /* [7923] */
    (xdc_Char)0x65,  /* [7924] */
    (xdc_Char)0x6d,  /* [7925] */
    (xdc_Char)0x61,  /* [7926] */
    (xdc_Char)0x70,  /* [7927] */
    (xdc_Char)0x68,  /* [7928] */
    (xdc_Char)0x6f,  /* [7929] */
    (xdc_Char)0x72,  /* [7930] */
    (xdc_Char)0x65,  /* [7931] */
    (xdc_Char)0x0,  /* [7932] */
    (xdc_Char)0x53,  /* [7933] */
    (xdc_Char)0x77,  /* [7934] */
    (xdc_Char)0x69,  /* [7935] */
    (xdc_Char)0x0,  /* [7936] */
    (xdc_Char)0x54,  /* [7937] */
    (xdc_Char)0x61,  /* [7938] */
    (xdc_Char)0x73,  /* [7939] */
    (xdc_Char)0x6b,  /* [7940] */
    (xdc_Char)0x0,  /* [7941] */
    (xdc_Char)0x75,  /* [7942] */
    (xdc_Char)0x69,  /* [7943] */
    (xdc_Char)0x61,  /* [7944] */
    (xdc_Char)0x2e,  /* [7945] */
    (xdc_Char)0x0,  /* [7946] */
    (xdc_Char)0x65,  /* [7947] */
    (xdc_Char)0x76,  /* [7948] */
    (xdc_Char)0x65,  /* [7949] */
    (xdc_Char)0x6e,  /* [7950] */
    (xdc_Char)0x74,  /* [7951] */
    (xdc_Char)0x73,  /* [7952] */
    (xdc_Char)0x2e,  /* [7953] */
    (xdc_Char)0x0,  /* [7954] */
    (xdc_Char)0x44,  /* [7955] */
    (xdc_Char)0x76,  /* [7956] */
    (xdc_Char)0x74,  /* [7957] */
    (xdc_Char)0x54,  /* [7958] */
    (xdc_Char)0x79,  /* [7959] */
    (xdc_Char)0x70,  /* [7960] */
    (xdc_Char)0x65,  /* [7961] */
    (xdc_Char)0x73,  /* [7962] */
    (xdc_Char)0x0,  /* [7963] */
    (xdc_Char)0x55,  /* [7964] */
    (xdc_Char)0x49,  /* [7965] */
    (xdc_Char)0x41,  /* [7966] */
    (xdc_Char)0x42,  /* [7967] */
    (xdc_Char)0x65,  /* [7968] */
    (xdc_Char)0x6e,  /* [7969] */
    (xdc_Char)0x63,  /* [7970] */
    (xdc_Char)0x68,  /* [7971] */
    (xdc_Char)0x6d,  /* [7972] */
    (xdc_Char)0x61,  /* [7973] */
    (xdc_Char)0x72,  /* [7974] */
    (xdc_Char)0x6b,  /* [7975] */
    (xdc_Char)0x0,  /* [7976] */
    (xdc_Char)0x55,  /* [7977] */
    (xdc_Char)0x49,  /* [7978] */
    (xdc_Char)0x41,  /* [7979] */
    (xdc_Char)0x45,  /* [7980] */
    (xdc_Char)0x72,  /* [7981] */
    (xdc_Char)0x72,  /* [7982] */
    (xdc_Char)0x0,  /* [7983] */
    (xdc_Char)0x55,  /* [7984] */
    (xdc_Char)0x49,  /* [7985] */
    (xdc_Char)0x41,  /* [7986] */
    (xdc_Char)0x45,  /* [7987] */
    (xdc_Char)0x76,  /* [7988] */
    (xdc_Char)0x74,  /* [7989] */
    (xdc_Char)0x0,  /* [7990] */
    (xdc_Char)0x45,  /* [7991] */
    (xdc_Char)0x76,  /* [7992] */
    (xdc_Char)0x65,  /* [7993] */
    (xdc_Char)0x6e,  /* [7994] */
    (xdc_Char)0x74,  /* [7995] */
    (xdc_Char)0x48,  /* [7996] */
    (xdc_Char)0x64,  /* [7997] */
    (xdc_Char)0x72,  /* [7998] */
    (xdc_Char)0x0,  /* [7999] */
    (xdc_Char)0x51,  /* [8000] */
    (xdc_Char)0x75,  /* [8001] */
    (xdc_Char)0x65,  /* [8002] */
    (xdc_Char)0x75,  /* [8003] */
    (xdc_Char)0x65,  /* [8004] */
    (xdc_Char)0x44,  /* [8005] */
    (xdc_Char)0x65,  /* [8006] */
    (xdc_Char)0x73,  /* [8007] */
    (xdc_Char)0x63,  /* [8008] */
    (xdc_Char)0x72,  /* [8009] */
    (xdc_Char)0x69,  /* [8010] */
    (xdc_Char)0x70,  /* [8011] */
    (xdc_Char)0x74,  /* [8012] */
    (xdc_Char)0x6f,  /* [8013] */
    (xdc_Char)0x72,  /* [8014] */
    (xdc_Char)0x0,  /* [8015] */
    (xdc_Char)0x55,  /* [8016] */
    (xdc_Char)0x49,  /* [8017] */
    (xdc_Char)0x41,  /* [8018] */
    (xdc_Char)0x4d,  /* [8019] */
    (xdc_Char)0x65,  /* [8020] */
    (xdc_Char)0x74,  /* [8021] */
    (xdc_Char)0x61,  /* [8022] */
    (xdc_Char)0x44,  /* [8023] */
    (xdc_Char)0x61,  /* [8024] */
    (xdc_Char)0x74,  /* [8025] */
    (xdc_Char)0x61,  /* [8026] */
    (xdc_Char)0x0,  /* [8027] */
    (xdc_Char)0x68,  /* [8028] */
    (xdc_Char)0x61,  /* [8029] */
    (xdc_Char)0x6c,  /* [8030] */
    (xdc_Char)0x2e,  /* [8031] */
    (xdc_Char)0x0,  /* [8032] */
    (xdc_Char)0x48,  /* [8033] */
    (xdc_Char)0x77,  /* [8034] */
    (xdc_Char)0x69,  /* [8035] */
    (xdc_Char)0x0,  /* [8036] */
    (xdc_Char)0x54,  /* [8037] */
    (xdc_Char)0x69,  /* [8038] */
    (xdc_Char)0x6d,  /* [8039] */
    (xdc_Char)0x65,  /* [8040] */
    (xdc_Char)0x72,  /* [8041] */
    (xdc_Char)0x0,  /* [8042] */
    (xdc_Char)0x42,  /* [8043] */
    (xdc_Char)0x49,  /* [8044] */
    (xdc_Char)0x4f,  /* [8045] */
    (xdc_Char)0x53,  /* [8046] */
    (xdc_Char)0x0,  /* [8047] */
    (xdc_Char)0x67,  /* [8048] */
    (xdc_Char)0x61,  /* [8049] */
    (xdc_Char)0x74,  /* [8050] */
    (xdc_Char)0x65,  /* [8051] */
    (xdc_Char)0x73,  /* [8052] */
    (xdc_Char)0x2e,  /* [8053] */
    (xdc_Char)0x0,  /* [8054] */
    (xdc_Char)0x47,  /* [8055] */
    (xdc_Char)0x61,  /* [8056] */
    (xdc_Char)0x74,  /* [8057] */
    (xdc_Char)0x65,  /* [8058] */
    (xdc_Char)0x48,  /* [8059] */
    (xdc_Char)0x77,  /* [8060] */
    (xdc_Char)0x69,  /* [8061] */
    (xdc_Char)0x0,  /* [8062] */
    (xdc_Char)0x47,  /* [8063] */
    (xdc_Char)0x61,  /* [8064] */
    (xdc_Char)0x74,  /* [8065] */
    (xdc_Char)0x65,  /* [8066] */
    (xdc_Char)0x4d,  /* [8067] */
    (xdc_Char)0x75,  /* [8068] */
    (xdc_Char)0x74,  /* [8069] */
    (xdc_Char)0x65,  /* [8070] */
    (xdc_Char)0x78,  /* [8071] */
    (xdc_Char)0x0,  /* [8072] */
    (xdc_Char)0x66,  /* [8073] */
    (xdc_Char)0x61,  /* [8074] */
    (xdc_Char)0x6d,  /* [8075] */
    (xdc_Char)0x69,  /* [8076] */
    (xdc_Char)0x6c,  /* [8077] */
    (xdc_Char)0x79,  /* [8078] */
    (xdc_Char)0x2e,  /* [8079] */
    (xdc_Char)0x0,  /* [8080] */
    (xdc_Char)0x6d,  /* [8081] */
    (xdc_Char)0x33,  /* [8082] */
    (xdc_Char)0x2e,  /* [8083] */
    (xdc_Char)0x0,  /* [8084] */
    (xdc_Char)0x49,  /* [8085] */
    (xdc_Char)0x6e,  /* [8086] */
    (xdc_Char)0x74,  /* [8087] */
    (xdc_Char)0x72,  /* [8088] */
    (xdc_Char)0x69,  /* [8089] */
    (xdc_Char)0x6e,  /* [8090] */
    (xdc_Char)0x73,  /* [8091] */
    (xdc_Char)0x69,  /* [8092] */
    (xdc_Char)0x63,  /* [8093] */
    (xdc_Char)0x73,  /* [8094] */
    (xdc_Char)0x53,  /* [8095] */
    (xdc_Char)0x75,  /* [8096] */
    (xdc_Char)0x70,  /* [8097] */
    (xdc_Char)0x70,  /* [8098] */
    (xdc_Char)0x6f,  /* [8099] */
    (xdc_Char)0x72,  /* [8100] */
    (xdc_Char)0x74,  /* [8101] */
    (xdc_Char)0x0,  /* [8102] */
    (xdc_Char)0x54,  /* [8103] */
    (xdc_Char)0x61,  /* [8104] */
    (xdc_Char)0x73,  /* [8105] */
    (xdc_Char)0x6b,  /* [8106] */
    (xdc_Char)0x53,  /* [8107] */
    (xdc_Char)0x75,  /* [8108] */
    (xdc_Char)0x70,  /* [8109] */
    (xdc_Char)0x70,  /* [8110] */
    (xdc_Char)0x6f,  /* [8111] */
    (xdc_Char)0x72,  /* [8112] */
    (xdc_Char)0x74,  /* [8113] */
    (xdc_Char)0x0,  /* [8114] */
    (xdc_Char)0x68,  /* [8115] */
    (xdc_Char)0x65,  /* [8116] */
    (xdc_Char)0x61,  /* [8117] */
    (xdc_Char)0x70,  /* [8118] */
    (xdc_Char)0x73,  /* [8119] */
    (xdc_Char)0x2e,  /* [8120] */
    (xdc_Char)0x0,  /* [8121] */
    (xdc_Char)0x48,  /* [8122] */
    (xdc_Char)0x65,  /* [8123] */
    (xdc_Char)0x61,  /* [8124] */
    (xdc_Char)0x70,  /* [8125] */
    (xdc_Char)0x4d,  /* [8126] */
    (xdc_Char)0x65,  /* [8127] */
    (xdc_Char)0x6d,  /* [8128] */
    (xdc_Char)0x0,  /* [8129] */
    (xdc_Char)0x6c,  /* [8130] */
    (xdc_Char)0x6d,  /* [8131] */
    (xdc_Char)0x34,  /* [8132] */
    (xdc_Char)0x2e,  /* [8133] */
    (xdc_Char)0x0,  /* [8134] */
    (xdc_Char)0x54,  /* [8135] */
    (xdc_Char)0x69,  /* [8136] */
    (xdc_Char)0x6d,  /* [8137] */
    (xdc_Char)0x65,  /* [8138] */
    (xdc_Char)0x73,  /* [8139] */
    (xdc_Char)0x74,  /* [8140] */
    (xdc_Char)0x61,  /* [8141] */
    (xdc_Char)0x6d,  /* [8142] */
    (xdc_Char)0x70,  /* [8143] */
    (xdc_Char)0x50,  /* [8144] */
    (xdc_Char)0x72,  /* [8145] */
    (xdc_Char)0x6f,  /* [8146] */
    (xdc_Char)0x76,  /* [8147] */
    (xdc_Char)0x69,  /* [8148] */
    (xdc_Char)0x64,  /* [8149] */
    (xdc_Char)0x65,  /* [8150] */
    (xdc_Char)0x72,  /* [8151] */
    (xdc_Char)0x0,  /* [8152] */
    (xdc_Char)0x6c,  /* [8153] */
    (xdc_Char)0x6f,  /* [8154] */
    (xdc_Char)0x67,  /* [8155] */
    (xdc_Char)0x67,  /* [8156] */
    (xdc_Char)0x65,  /* [8157] */
    (xdc_Char)0x72,  /* [8158] */
    (xdc_Char)0x73,  /* [8159] */
    (xdc_Char)0x2e,  /* [8160] */
    (xdc_Char)0x0,  /* [8161] */
    (xdc_Char)0x4c,  /* [8162] */
    (xdc_Char)0x6f,  /* [8163] */
    (xdc_Char)0x67,  /* [8164] */
    (xdc_Char)0x67,  /* [8165] */
    (xdc_Char)0x65,  /* [8166] */
    (xdc_Char)0x72,  /* [8167] */
    (xdc_Char)0x53,  /* [8168] */
    (xdc_Char)0x74,  /* [8169] */
    (xdc_Char)0x6f,  /* [8170] */
    (xdc_Char)0x70,  /* [8171] */
    (xdc_Char)0x4d,  /* [8172] */
    (xdc_Char)0x6f,  /* [8173] */
    (xdc_Char)0x64,  /* [8174] */
    (xdc_Char)0x65,  /* [8175] */
    (xdc_Char)0x0,  /* [8176] */
    (xdc_Char)0x75,  /* [8177] */
    (xdc_Char)0x74,  /* [8178] */
    (xdc_Char)0x69,  /* [8179] */
    (xdc_Char)0x6c,  /* [8180] */
    (xdc_Char)0x73,  /* [8181] */
    (xdc_Char)0x2e,  /* [8182] */
    (xdc_Char)0x0,  /* [8183] */
    (xdc_Char)0x4c,  /* [8184] */
    (xdc_Char)0x6f,  /* [8185] */
    (xdc_Char)0x61,  /* [8186] */
    (xdc_Char)0x64,  /* [8187] */
    (xdc_Char)0x0,  /* [8188] */
    (xdc_Char)0x61,  /* [8189] */
    (xdc_Char)0x64,  /* [8190] */
    (xdc_Char)0x63,  /* [8191] */
    (xdc_Char)0x53,  /* [8192] */
    (xdc_Char)0x65,  /* [8193] */
    (xdc_Char)0x6d,  /* [8194] */
    (xdc_Char)0x0,  /* [8195] */
    (xdc_Char)0x55,  /* [8196] */
    (xdc_Char)0x41,  /* [8197] */
    (xdc_Char)0x52,  /* [8198] */
    (xdc_Char)0x54,  /* [8199] */
    (xdc_Char)0x53,  /* [8200] */
    (xdc_Char)0x65,  /* [8201] */
    (xdc_Char)0x6d,  /* [8202] */
    (xdc_Char)0x0,  /* [8203] */
    (xdc_Char)0x55,  /* [8204] */
    (xdc_Char)0x41,  /* [8205] */
    (xdc_Char)0x52,  /* [8206] */
    (xdc_Char)0x54,  /* [8207] */
    (xdc_Char)0x0,  /* [8208] */
    (xdc_Char)0x61,  /* [8209] */
    (xdc_Char)0x64,  /* [8210] */
    (xdc_Char)0x63,  /* [8211] */
    (xdc_Char)0x54,  /* [8212] */
    (xdc_Char)0x73,  /* [8213] */
    (xdc_Char)0x6b,  /* [8214] */
    (xdc_Char)0x0,  /* [8215] */
    (xdc_Char)0x74,  /* [8216] */
    (xdc_Char)0x69,  /* [8217] */
    (xdc_Char)0x2e,  /* [8218] */
    (xdc_Char)0x73,  /* [8219] */
    (xdc_Char)0x79,  /* [8220] */
    (xdc_Char)0x73,  /* [8221] */
    (xdc_Char)0x62,  /* [8222] */
    (xdc_Char)0x69,  /* [8223] */
    (xdc_Char)0x6f,  /* [8224] */
    (xdc_Char)0x73,  /* [8225] */
    (xdc_Char)0x2e,  /* [8226] */
    (xdc_Char)0x6b,  /* [8227] */
    (xdc_Char)0x6e,  /* [8228] */
    (xdc_Char)0x6c,  /* [8229] */
    (xdc_Char)0x2e,  /* [8230] */
    (xdc_Char)0x54,  /* [8231] */
    (xdc_Char)0x61,  /* [8232] */
    (xdc_Char)0x73,  /* [8233] */
    (xdc_Char)0x6b,  /* [8234] */
    (xdc_Char)0x2e,  /* [8235] */
    (xdc_Char)0x49,  /* [8236] */
    (xdc_Char)0x64,  /* [8237] */
    (xdc_Char)0x6c,  /* [8238] */
    (xdc_Char)0x65,  /* [8239] */
    (xdc_Char)0x54,  /* [8240] */
    (xdc_Char)0x61,  /* [8241] */
    (xdc_Char)0x73,  /* [8242] */
    (xdc_Char)0x6b,  /* [8243] */
    (xdc_Char)0x0,  /* [8244] */
    (xdc_Char)0x54,  /* [8245] */
    (xdc_Char)0x69,  /* [8246] */
    (xdc_Char)0x6d,  /* [8247] */
    (xdc_Char)0x65,  /* [8248] */
    (xdc_Char)0x72,  /* [8249] */
    (xdc_Char)0x5f,  /* [8250] */
    (xdc_Char)0x32,  /* [8251] */
    (xdc_Char)0x41,  /* [8252] */
    (xdc_Char)0x5f,  /* [8253] */
    (xdc_Char)0x49,  /* [8254] */
    (xdc_Char)0x4e,  /* [8255] */
    (xdc_Char)0x54,  /* [8256] */
    (xdc_Char)0x0,  /* [8257] */
    (xdc_Char)0x4c,  /* [8258] */
    (xdc_Char)0x6f,  /* [8259] */
    (xdc_Char)0x61,  /* [8260] */
    (xdc_Char)0x64,  /* [8261] */
    (xdc_Char)0x20,  /* [8262] */
    (xdc_Char)0x4c,  /* [8263] */
    (xdc_Char)0x6f,  /* [8264] */
    (xdc_Char)0x67,  /* [8265] */
    (xdc_Char)0x67,  /* [8266] */
    (xdc_Char)0x65,  /* [8267] */
    (xdc_Char)0x72,  /* [8268] */
    (xdc_Char)0x0,  /* [8269] */
    (xdc_Char)0x4d,  /* [8270] */
    (xdc_Char)0x61,  /* [8271] */
    (xdc_Char)0x69,  /* [8272] */
    (xdc_Char)0x6e,  /* [8273] */
    (xdc_Char)0x20,  /* [8274] */
    (xdc_Char)0x4c,  /* [8275] */
    (xdc_Char)0x6f,  /* [8276] */
    (xdc_Char)0x67,  /* [8277] */
    (xdc_Char)0x67,  /* [8278] */
    (xdc_Char)0x65,  /* [8279] */
    (xdc_Char)0x72,  /* [8280] */
    (xdc_Char)0x0,  /* [8281] */
    (xdc_Char)0x53,  /* [8282] */
    (xdc_Char)0x59,  /* [8283] */
    (xdc_Char)0x53,  /* [8284] */
    (xdc_Char)0x42,  /* [8285] */
    (xdc_Char)0x49,  /* [8286] */
    (xdc_Char)0x4f,  /* [8287] */
    (xdc_Char)0x53,  /* [8288] */
    (xdc_Char)0x20,  /* [8289] */
    (xdc_Char)0x53,  /* [8290] */
    (xdc_Char)0x79,  /* [8291] */
    (xdc_Char)0x73,  /* [8292] */
    (xdc_Char)0x74,  /* [8293] */
    (xdc_Char)0x65,  /* [8294] */
    (xdc_Char)0x6d,  /* [8295] */
    (xdc_Char)0x20,  /* [8296] */
    (xdc_Char)0x4c,  /* [8297] */
    (xdc_Char)0x6f,  /* [8298] */
    (xdc_Char)0x67,  /* [8299] */
    (xdc_Char)0x67,  /* [8300] */
    (xdc_Char)0x65,  /* [8301] */
    (xdc_Char)0x72,  /* [8302] */
    (xdc_Char)0x0,  /* [8303] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[66] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1e20,  /* left */
        (xdc_Bits16)0x1e25,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e2e,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e35,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e3a,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e43,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e49,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e4f,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e54,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e58,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e5d,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e64,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e6d,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e75,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e7c,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e83,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e88,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e92,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x1e98,  /* left */
        (xdc_Bits16)0x1e9c,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1ea5,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1eaa,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1eb4,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1eba,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1ebe,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x1e98,  /* left */
        (xdc_Bits16)0x1ec3,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1ecc,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1ed1,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1ed7,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1edc,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1ee7,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1eed,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1ef3,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1efd,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1f01,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x1e98,  /* left */
        (xdc_Bits16)0x1f06,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1f0b,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1f13,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1f1c,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1f29,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1f30,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1e25,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1f37,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1f40,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1f50,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1f5c,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1f61,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1f65,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1f6b,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1f70,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x1f77,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x1f7f,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1f89,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x1ea5,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x1f91,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1f61,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1f95,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1fa7,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1fb3,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8039,  /* left */
        (xdc_Bits16)0x1fba,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x1fc2,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x1fc7,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x1f65,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1fd9,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803e,  /* left */
        (xdc_Bits16)0x1fe2,  /* right */
    },  /* [63] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1ff1,  /* right */
    },  /* [64] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x1ff8,  /* right */
    },  /* [65] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x2070;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x42;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_hal_Timer_TimerProxy_Handle)ti_sysbios_hal_Timer_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Timer_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp)
{
    ti_sysbios_hal_Timer_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    offsetof(ti_sysbios_knl_Task_Object__, __name), /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module __mod, const ti_uia_runtime_IUIATransfer_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_IUIATransfer_Params), __eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module __mod, const xdc_runtime_IFilterLogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IFilterLogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IFilterLogger_Params), __eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module __mod, const ti_uia_runtime_ILoggerSnapshot_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), __eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32829;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_lm4_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    ti_sysbios_family_arm_lm4_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32822;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32817;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32818;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32813;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__ *)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Timer_Args__create *__args = __aa;
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Timer_Handle ti_sysbios_hal_Timer_create( xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Timer_construct(ti_sysbios_hal_Timer_Struct *__obj, xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Timer_destruct(ti_sysbios_hal_Timer_Struct *obj)
{
    ti_sysbios_hal_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Timer_delete(ti_sysbios_hal_Timer_Handle *instp)
{
    ti_sysbios_hal_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32826;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, ((ti_sysbios_knl_Task_Object__*)obj)->__name, 1);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIABenchmark SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIABenchmark_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32831;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    if (ti_uia_loggers_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_loggers_LoggerStopMode_Object__ *)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_uia_loggers_LoggerStopMode___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *__obj, const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), NULL);
    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    ti_uia_loggers_LoggerStopMode_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle UART = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle adcTsk = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle adcSem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle UARTSem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle Timer_2A_INT = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0]);

