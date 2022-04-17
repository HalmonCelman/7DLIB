################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/DLED_src/DLED.c \
../Core/Src/DLED_src/lldrivers.c 

OBJS += \
./Core/Src/DLED_src/DLED.o \
./Core/Src/DLED_src/lldrivers.o 

C_DEPS += \
./Core/Src/DLED_src/DLED.d \
./Core/Src/DLED_src/lldrivers.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/DLED_src/%.o Core/Src/DLED_src/%.su: ../Core/Src/DLED_src/%.c Core/Src/DLED_src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H725xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-DLED_src

clean-Core-2f-Src-2f-DLED_src:
	-$(RM) ./Core/Src/DLED_src/DLED.d ./Core/Src/DLED_src/DLED.o ./Core/Src/DLED_src/DLED.su ./Core/Src/DLED_src/lldrivers.d ./Core/Src/DLED_src/lldrivers.o ./Core/Src/DLED_src/lldrivers.su

.PHONY: clean-Core-2f-Src-2f-DLED_src

