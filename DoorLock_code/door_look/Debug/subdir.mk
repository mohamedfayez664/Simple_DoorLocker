################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../delay.c \
../internal_eeprom.c \
../interrupt.c \
../keypad.c \
../lcd.c \
../main.c \
../motors.c \
../switches.c \
../timer.c 

OBJS += \
./delay.o \
./internal_eeprom.o \
./interrupt.o \
./keypad.o \
./lcd.o \
./main.o \
./motors.o \
./switches.o \
./timer.o 

C_DEPS += \
./delay.d \
./internal_eeprom.d \
./interrupt.d \
./keypad.d \
./lcd.d \
./main.d \
./motors.d \
./switches.d \
./timer.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O2 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


