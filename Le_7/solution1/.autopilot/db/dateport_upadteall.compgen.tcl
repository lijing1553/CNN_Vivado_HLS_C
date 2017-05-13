# This script segment is generated automatically by AutoPilot

set id 105
set name dateport_fsub_32ns_32ns_32_5_full_dsp
set corename simcore_fsub
set op fsub
set stage_num 5
set max_latency -1
set registered_input 1
set impl_style full_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fsub] == "ap_gen_simcore_fsub"} {
eval "ap_gen_simcore_fsub { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fsub, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fsub
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 107 \
    name C1_mapData \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C1_mapData \
    op interface \
    ports { C1_mapData_address0 { O 8 vector } C1_mapData_ce0 { O 1 bit } C1_mapData_we0 { O 1 bit } C1_mapData_d0 { O 32 vector } C1_mapData_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C1_mapData'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 108 \
    name C1_dmapData \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C1_dmapData \
    op interface \
    ports { C1_dmapData_address0 { O 8 vector } C1_dmapData_ce0 { O 1 bit } C1_dmapData_we0 { O 1 bit } C1_dmapData_d0 { O 32 vector } C1_dmapData_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C1_dmapData'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 109 \
    name C1_bias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C1_bias \
    op interface \
    ports { C1_bias_address0 { O 3 vector } C1_bias_ce0 { O 1 bit } C1_bias_we0 { O 1 bit } C1_bias_d0 { O 32 vector } C1_bias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C1_bias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 110 \
    name C1_dbias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C1_dbias \
    op interface \
    ports { C1_dbias_address0 { O 3 vector } C1_dbias_ce0 { O 1 bit } C1_dbias_we0 { O 1 bit } C1_dbias_d0 { O 32 vector } C1_dbias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C1_dbias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 111 \
    name C3_mapData \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C3_mapData \
    op interface \
    ports { C3_mapData_address0 { O 12 vector } C3_mapData_ce0 { O 1 bit } C3_mapData_we0 { O 1 bit } C3_mapData_d0 { O 32 vector } C3_mapData_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C3_mapData'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 112 \
    name C3_dmapData \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C3_dmapData \
    op interface \
    ports { C3_dmapData_address0 { O 12 vector } C3_dmapData_ce0 { O 1 bit } C3_dmapData_we0 { O 1 bit } C3_dmapData_d0 { O 32 vector } C3_dmapData_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C3_dmapData'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 113 \
    name C3_bias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C3_bias \
    op interface \
    ports { C3_bias_address0 { O 4 vector } C3_bias_ce0 { O 1 bit } C3_bias_we0 { O 1 bit } C3_bias_d0 { O 32 vector } C3_bias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C3_bias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 114 \
    name C3_dbias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C3_dbias \
    op interface \
    ports { C3_dbias_address0 { O 4 vector } C3_dbias_ce0 { O 1 bit } C3_dbias_we0 { O 1 bit } C3_dbias_d0 { O 32 vector } C3_dbias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C3_dbias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 115 \
    name C5_mapData \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C5_mapData \
    op interface \
    ports { C5_mapData_address0 { O 14 vector } C5_mapData_ce0 { O 1 bit } C5_mapData_we0 { O 1 bit } C5_mapData_d0 { O 32 vector } C5_mapData_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C5_mapData'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 116 \
    name C5_dmapData \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C5_dmapData \
    op interface \
    ports { C5_dmapData_address0 { O 14 vector } C5_dmapData_ce0 { O 1 bit } C5_dmapData_we0 { O 1 bit } C5_dmapData_d0 { O 32 vector } C5_dmapData_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C5_dmapData'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 117 \
    name C5_bias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C5_bias \
    op interface \
    ports { C5_bias_address0 { O 5 vector } C5_bias_ce0 { O 1 bit } C5_bias_we0 { O 1 bit } C5_bias_d0 { O 32 vector } C5_bias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C5_bias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name C5_dbias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C5_dbias \
    op interface \
    ports { C5_dbias_address0 { O 5 vector } C5_dbias_ce0 { O 1 bit } C5_dbias_we0 { O 1 bit } C5_dbias_d0 { O 32 vector } C5_dbias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C5_dbias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 119 \
    name output_wei \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename output_wei \
    op interface \
    ports { output_wei_address0 { O 9 vector } output_wei_ce0 { O 1 bit } output_wei_we0 { O 1 bit } output_wei_d0 { O 32 vector } output_wei_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_wei'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 120 \
    name output_dwei \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename output_dwei \
    op interface \
    ports { output_dwei_address0 { O 9 vector } output_dwei_ce0 { O 1 bit } output_dwei_we0 { O 1 bit } output_dwei_d0 { O 32 vector } output_dwei_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_dwei'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 121 \
    name output_bias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename output_bias \
    op interface \
    ports { output_bias_address0 { O 4 vector } output_bias_ce0 { O 1 bit } output_bias_we0 { O 1 bit } output_bias_d0 { O 32 vector } output_bias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_bias'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 122 \
    name output_dbias \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename output_dbias \
    op interface \
    ports { output_dbias_address0 { O 4 vector } output_dbias_ce0 { O 1 bit } output_dbias_we0 { O 1 bit } output_dbias_d0 { O 32 vector } output_dbias_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_dbias'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


