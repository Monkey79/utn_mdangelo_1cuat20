################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/alg_fondo/ejrc1_4.c \
../src/alg_fondo/ejrc1_8_nprim.c \
../src/alg_fondo/ejrc2_12_planilla.c \
../src/alg_fondo/ejrc2_13.c \
../src/alg_fondo/ejrc3_3_bisiesto.c 

OBJS += \
./src/alg_fondo/ejrc1_4.o \
./src/alg_fondo/ejrc1_8_nprim.o \
./src/alg_fondo/ejrc2_12_planilla.o \
./src/alg_fondo/ejrc2_13.o \
./src/alg_fondo/ejrc3_3_bisiesto.o 

C_DEPS += \
./src/alg_fondo/ejrc1_4.d \
./src/alg_fondo/ejrc1_8_nprim.d \
./src/alg_fondo/ejrc2_12_planilla.d \
./src/alg_fondo/ejrc2_13.d \
./src/alg_fondo/ejrc3_3_bisiesto.d 


# Each subdirectory must supply rules for building sources it contributes
src/alg_fondo/%.o: ../src/alg_fondo/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


