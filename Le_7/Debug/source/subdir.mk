################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lnet.c 

OBJS += \
./source/Lnet.o 

C_DEPS += \
./source/Lnet.d 


# Each subdirectory must supply rules for building sources it contributes
source/Lnet.o: D:/vivado_hls/Le_7/Lnet.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DAESL_TB -D__llvm__ -D__llvm__ -IC:/Xilinx/Vivado_HLS/2015.2/win64/tools/auto_cc/include -IC:/Xilinx/Vivado_HLS/2015.2/include/ap_sysc -IC:/Xilinx/Vivado_HLS/2015.2/include -ID:/vivado_hls -IC:/Xilinx/Vivado_HLS/2015.2/include/etc -IC:/Xilinx/Vivado_HLS/2015.2/win64/tools/systemc/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


