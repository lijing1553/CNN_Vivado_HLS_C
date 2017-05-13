############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project final_le
set_top dateport
add_files Le_7/Lnet.h
add_files Le_7/Lnet.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source "./final_le/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
