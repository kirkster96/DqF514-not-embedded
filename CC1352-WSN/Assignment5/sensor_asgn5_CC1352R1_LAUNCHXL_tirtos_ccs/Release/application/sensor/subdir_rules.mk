################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
application/sensor/%.obj: ../application/sensor/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs1010/ccs/tools/compiler/ti-cgt-arm_20.2.3.LTS/bin/armcl" --cmd_file="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs/application/defines/sensor.opts"  -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=0 --include_path="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs" --include_path="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs/Release" --include_path="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs/application/sensor" --include_path="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs/application" --include_path="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs/software_stack/ti15_4stack/osal" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/apps" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/boards" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/osal_port" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/util" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/inc" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/stack/src" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/stack/tirtos/inc" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/common/heapmgr" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/services/saddr" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/services/sdata" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/hal/crypto" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/hal/platform" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/hal/rf" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/fh" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/high_level" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/inc" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/rom" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/inc/cc13xx" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/low_level/cc13xx" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/tracer" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/ti154stack/apps/sensor" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/devices/cc13x2_cc26x2" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/devices/cc13x2_cc26x2/inc" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/devices/cc13x2_cc26x2/driverlib" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/common/nv" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/common/cui" --include_path="C:/ti/simplelink_cc13x2_26x2_sdk_4_30_00_54/source/ti/posix/ccs" --include_path="C:/ti/ccs1010/ccs/tools/compiler/ti-cgt-arm_20.2.3.LTS/include" --define=LPSTK --define=TIMAC_ROM_IMAGE_BUILD --define=Board_EXCLUDE_NVS_EXTERNAL_FLASH --define=DeviceFamily_CC13X2 -g --c99 --plain_char=unsigned --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --embedded_constants=on --unaligned_access=on --enum_type=packed --wchar_t=16 --common=on --fp_reassoc=off --sat_reassoc=off --preproc_with_compile --preproc_dependency="application/sensor/$(basename $(<F)).d_raw" --include_path="C:/Users/kirk/workspace_v10/sensor_asgn5_CC1352R1_LAUNCHXL_tirtos_ccs/Release/syscfg" --obj_directory="application/sensor" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


