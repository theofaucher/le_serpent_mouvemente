################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include lib/middleware/MIDI/subdir.mk
-include lib/middleware/subdir.mk
-include lib/hal/src/Legacy/subdir.mk
-include lib/hal/src/subdir.mk
-include lib/bsp/trace/subdir.mk
-include lib/bsp/tft_pcd8544/subdir.mk
-include lib/bsp/tft_ili9341/subdir.mk
-include lib/bsp/lcd2x16/subdir.mk
-include lib/bsp/ir/subdir.mk
-include lib/bsp/iks01a1/lsm6ds3/subdir.mk
-include lib/bsp/iks01a1/lsm6ds0/subdir.mk
-include lib/bsp/iks01a1/lps25hb/subdir.mk
-include lib/bsp/iks01a1/lps22hb/subdir.mk
-include lib/bsp/iks01a1/lis3mdl/subdir.mk
-include lib/bsp/iks01a1/hts221/subdir.mk
-include lib/bsp/iks01a1/subdir.mk
-include lib/bsp/hx711/subdir.mk
-include lib/bsp/epaper/Fonts/subdir.mk
-include lib/bsp/epaper/subdir.mk
-include lib/bsp/dac_mcp4921/subdir.mk
-include lib/bsp/bmp180/subdir.mk
-include lib/bsp/VL53L0X/subdir.mk
-include lib/bsp/NFC03A1/lib_nfc/lib_pcd/subdir.mk
-include lib/bsp/NFC03A1/lib_nfc/lib_NDEF/subdir.mk
-include lib/bsp/NFC03A1/lib_nfc/common/subdir.mk
-include lib/bsp/NFC03A1/CR95HF/subdir.mk
-include lib/bsp/NFC03A1/subdir.mk
-include lib/bsp/MatrixLed/subdir.mk
-include lib/bsp/MatrixKeyboard/subdir.mk
-include lib/bsp/MPU6050/subdir.mk
-include lib/bsp/MLX90614/subdir.mk
-include lib/bsp/MCP23S17/subdir.mk
-include lib/bsp/MCP23017/subdir.mk
-include lib/bsp/HC-SR04/subdir.mk
-include lib/bsp/GPS/subdir.mk
-include lib/bsp/FingerprintReader/subdir.mk
-include lib/bsp/ESP8266/subdir.mk
-include lib/bsp/DriverLed_STP16CP05/subdir.mk
-include lib/bsp/DHT11/subdir.mk
-include lib/bsp/CapacitiveKeyboard/subdir.mk
-include lib/bsp/BH1750FVI/subdir.mk
-include lib/bsp/APDS9960/subdir.mk
-include lib/bsp/subdir.mk
-include lib/subdir.mk
-include appli/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := PROJET
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
PROJET.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
PROJET.list \

OBJCOPY_BIN += \
PROJET.bin \


# All Target
all: main-build

# Main-build Target
main-build: PROJET.elf secondary-outputs

# Tool invocations
PROJET.elf: $(OBJS) $(USER_OBJS) ..\lib\LinkerScript.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "PROJET.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"..\lib\LinkerScript.ld" -Wl,-Map="PROJET.map" -Wl,--gc-sections -static -Wl,--start-group -lc -lrdimon -Wl,--end-group -u_printf_float -specs=rdimon.specs  -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

PROJET.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "PROJET.list"
	@echo 'Finished building: $@'
	@echo ' '

PROJET.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "PROJET.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
