################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/commons/utn_commons.c 

OBJS += \
./src/commons/utn_commons.o 

C_DEPS += \
./src/commons/utn_commons.d 


# Each subdirectory must supply rules for building sources it contributes
src/commons/%.o: ../src/commons/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


