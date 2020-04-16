################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ejercicios/ejrc1_clase2.c \
../src/ejercicios/ejrc1_clase3.c \
../src/ejercicios/ejrc1_clase6.c \
../src/ejercicios/ejrcA_clase2.c \
../src/ejercicios/ejrcB_clase2.c \
../src/ejercicios/ejrcC_clase2.c 

OBJS += \
./src/ejercicios/ejrc1_clase2.o \
./src/ejercicios/ejrc1_clase3.o \
./src/ejercicios/ejrc1_clase6.o \
./src/ejercicios/ejrcA_clase2.o \
./src/ejercicios/ejrcB_clase2.o \
./src/ejercicios/ejrcC_clase2.o 

C_DEPS += \
./src/ejercicios/ejrc1_clase2.d \
./src/ejercicios/ejrc1_clase3.d \
./src/ejercicios/ejrc1_clase6.d \
./src/ejercicios/ejrcA_clase2.d \
./src/ejercicios/ejrcB_clase2.d \
./src/ejercicios/ejrcC_clase2.d 


# Each subdirectory must supply rules for building sources it contributes
src/ejercicios/%.o: ../src/ejercicios/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


