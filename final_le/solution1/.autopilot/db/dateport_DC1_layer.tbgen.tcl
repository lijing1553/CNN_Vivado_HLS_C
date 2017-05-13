set moduleName dateport_DC1_layer
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_DC1_layer}
set C_modelType { void 0 }
set C_modelArgList { 
	{ C1_bias float 32 regular {array 6 { 1 3 } 1 1 } {global 0}  }
	{ S2_d float 32 regular {array 1176 { 1 3 } 1 1 } {global 0}  }
	{ C1_v float 32 regular {array 4704 { 1 1 } 1 1 } {global 0}  }
	{ C1_d float 32 regular {array 4704 { 0 0 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C1_bias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "S2_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C1_v", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C1_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "WRITEONLY" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C1_bias_address0 sc_out sc_lv 3 signal 0 } 
	{ C1_bias_ce0 sc_out sc_logic 1 signal 0 } 
	{ C1_bias_q0 sc_in sc_lv 32 signal 0 } 
	{ S2_d_address0 sc_out sc_lv 11 signal 1 } 
	{ S2_d_ce0 sc_out sc_logic 1 signal 1 } 
	{ S2_d_q0 sc_in sc_lv 32 signal 1 } 
	{ C1_v_address0 sc_out sc_lv 13 signal 2 } 
	{ C1_v_ce0 sc_out sc_logic 1 signal 2 } 
	{ C1_v_q0 sc_in sc_lv 32 signal 2 } 
	{ C1_v_address1 sc_out sc_lv 13 signal 2 } 
	{ C1_v_ce1 sc_out sc_logic 1 signal 2 } 
	{ C1_v_q1 sc_in sc_lv 32 signal 2 } 
	{ C1_d_address0 sc_out sc_lv 13 signal 3 } 
	{ C1_d_ce0 sc_out sc_logic 1 signal 3 } 
	{ C1_d_we0 sc_out sc_logic 1 signal 3 } 
	{ C1_d_d0 sc_out sc_lv 32 signal 3 } 
	{ C1_d_address1 sc_out sc_lv 13 signal 3 } 
	{ C1_d_ce1 sc_out sc_logic 1 signal 3 } 
	{ C1_d_we1 sc_out sc_logic 1 signal 3 } 
	{ C1_d_d1 sc_out sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C1_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "C1_bias", "role": "address0" }} , 
 	{ "name": "C1_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_bias", "role": "ce0" }} , 
 	{ "name": "C1_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_bias", "role": "q0" }} , 
 	{ "name": "S2_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "S2_d", "role": "address0" }} , 
 	{ "name": "S2_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S2_d", "role": "ce0" }} , 
 	{ "name": "S2_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S2_d", "role": "q0" }} , 
 	{ "name": "C1_v_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_v", "role": "address0" }} , 
 	{ "name": "C1_v_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_v", "role": "ce0" }} , 
 	{ "name": "C1_v_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_v", "role": "q0" }} , 
 	{ "name": "C1_v_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_v", "role": "address1" }} , 
 	{ "name": "C1_v_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_v", "role": "ce1" }} , 
 	{ "name": "C1_v_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_v", "role": "q1" }} , 
 	{ "name": "C1_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_d", "role": "address0" }} , 
 	{ "name": "C1_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_d", "role": "ce0" }} , 
 	{ "name": "C1_d_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_d", "role": "we0" }} , 
 	{ "name": "C1_d_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_d", "role": "d0" }} , 
 	{ "name": "C1_d_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_d", "role": "address1" }} , 
 	{ "name": "C1_d_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_d", "role": "ce1" }} , 
 	{ "name": "C1_d_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_d", "role": "we1" }} , 
 	{ "name": "C1_d_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_d", "role": "d1" }}  ]}
set Spec2ImplPortList { 
	C1_bias { ap_memory {  { C1_bias_address0 mem_address 1 3 }  { C1_bias_ce0 mem_ce 1 1 }  { C1_bias_q0 mem_dout 0 32 } } }
	S2_d { ap_memory {  { S2_d_address0 mem_address 1 11 }  { S2_d_ce0 mem_ce 1 1 }  { S2_d_q0 mem_dout 0 32 } } }
	C1_v { ap_memory {  { C1_v_address0 mem_address 1 13 }  { C1_v_ce0 mem_ce 1 1 }  { C1_v_q0 mem_dout 0 32 }  { C1_v_address1 mem_address 1 13 }  { C1_v_ce1 mem_ce 1 1 }  { C1_v_q1 mem_dout 0 32 } } }
	C1_d { ap_memory {  { C1_d_address0 mem_address 1 13 }  { C1_d_ce0 mem_ce 1 1 }  { C1_d_we0 mem_we 1 1 }  { C1_d_d0 mem_din 1 32 }  { C1_d_address1 mem_address 1 13 }  { C1_d_ce1 mem_ce 1 1 }  { C1_d_we1 mem_we 1 1 }  { C1_d_d1 mem_din 1 32 } } }
}
