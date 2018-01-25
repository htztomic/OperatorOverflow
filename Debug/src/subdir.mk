################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Operator\ Overflow.cpp 

OBJS += \
./src/Operator\ Overflow.o 

CPP_DEPS += \
./src/Operator\ Overflow.d 


# Each subdirectory must supply rules for building sources it contributes
src/Operator\ Overflow.o: ../src/Operator\ Overflow.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Operator Overflow.d" -MT"src/Operator\ Overflow.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


