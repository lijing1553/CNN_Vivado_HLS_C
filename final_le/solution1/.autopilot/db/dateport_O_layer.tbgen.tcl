set moduleName dateport_O_layer
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_O_layer}
set C_modelType { void 0 }
set C_modelArgList { 
	{ C5_y float 32 regular {array 30 { 1 3 } 1 1 } {global 0}  }
	{ output_wei float 32 regular {array 300 { 1 3 } 1 1 } {global 0}  }
	{ output_bias float 32 regular {array 10 { 1 3 } 1 1 } {global 0}  }
	{ output_y float 32 regular {array 10 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C5_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "output_wei", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "output_bias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "output_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "WRITEONLY" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C5_y_address0 sc_out sc_lv 5 signal 0 } 
	{ C5_y_ce0 sc_out sc_logic 1 signal 0 } 
	{ C5_y_q0 sc_in sc_lv 32 signal 0 } 
	{ output_wei_address0 sc_out sc_lv 9 signal 1 } 
	{ output_wei_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_wei_q0 sc_in sc_lv 32 signal 1 } 
	{ output_bias_address0 sc_out sc_lv 4 signal 2 } 
	{ output_bias_ce0 sc_out sc_logic 1 signal 2 } 
	{ output_bias_q0 sc_in sc_lv 32 signal 2 } 
	{ output_y_address0 sc_out sc_lv 4 signal 3 } 
	{ output_y_ce0 sc_out sc_logic 1 signal 3 } 
	{ output_y_we0 sc_out sc_logic 1 signal 3 } 
	{ output_y_d0 sc_out sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C5_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_y", "role": "address0" }} , 
 	{ "name": "C5_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_y", "role": "ce0" }} , 
 	{ "name": "C5_y_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_y", "role": "q0" }} , 
 	{ "name": "output_wei_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "output_wei", "role": "address0" }} , 
 	{ "name": "output_wei_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_wei", "role": "ce0" }} , 
 	{ "name": "output_wei_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_wei", "role": "q0" }} , 
 	{ "name": "output_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_bias", "role": "address0" }} , 
 	{ "name": "output_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_bias", "role": "ce0" }} , 
 	{ "name": "output_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_bias", "role": "q0" }} , 
 	{ "name": "output_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_y", "role": "address0" }} , 
 	{ "name": "output_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_y", "role": "ce0" }} , 
 	{ "name": "output_y_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_y", "role": "we0" }} , 
 	{ "name": "output_y_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_y", "role": "d0" }}  ]}
set Spec2ImplPortList { 
	C5_y { ap_memory {  { C5_y_address0 mem_address 1 5 }  { C5_y_ce0 mem_ce 1 1 }  { C5_y_q0 mem_dout 0 32 } } }
	output_wei { ap_memory {  { output_wei_address0 mem_address 1 9 }  { output_wei_ce0 mem_ce 1 1 }  { output_wei_q0 mem_dout 0 32 } } }
	output_bias { ap_memory {  { output_bias_address0 mem_address 1 4 }  { output_bias_ce0 mem_ce 1 1 }  { output_bias_q0 mem_dout 0 32 } } }
	output_y { ap_memory {  { output_y_address0 mem_address 1 4 }  { output_y_ce0 mem_ce 1 1 }  { output_y_we0 mem_we 1 1 }  { output_y_d0 mem_din 1 32 } } }
}
