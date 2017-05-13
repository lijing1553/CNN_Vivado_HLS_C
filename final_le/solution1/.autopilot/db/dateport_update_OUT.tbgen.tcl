set moduleName dateport_update_OUT
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_update_OUT}
set C_modelType { void 0 }
set C_modelArgList { 
	{ output_d float 32 regular {array 10 { 1 3 } 1 1 } {global 0}  }
	{ output_dwei float 32 regular {array 300 { 2 3 } 1 1 } {global 2}  }
	{ C5_y float 32 regular {array 30 { 1 3 } 1 1 } {global 0}  }
	{ output_dbias float 32 regular {array 10 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "output_dwei", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "output_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_d_address0 sc_out sc_lv 4 signal 0 } 
	{ output_d_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_d_q0 sc_in sc_lv 32 signal 0 } 
	{ output_dwei_address0 sc_out sc_lv 9 signal 1 } 
	{ output_dwei_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_dwei_we0 sc_out sc_logic 1 signal 1 } 
	{ output_dwei_d0 sc_out sc_lv 32 signal 1 } 
	{ output_dwei_q0 sc_in sc_lv 32 signal 1 } 
	{ C5_y_address0 sc_out sc_lv 5 signal 2 } 
	{ C5_y_ce0 sc_out sc_logic 1 signal 2 } 
	{ C5_y_q0 sc_in sc_lv 32 signal 2 } 
	{ output_dbias_address0 sc_out sc_lv 4 signal 3 } 
	{ output_dbias_ce0 sc_out sc_logic 1 signal 3 } 
	{ output_dbias_we0 sc_out sc_logic 1 signal 3 } 
	{ output_dbias_d0 sc_out sc_lv 32 signal 3 } 
	{ output_dbias_q0 sc_in sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_d", "role": "address0" }} , 
 	{ "name": "output_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_d", "role": "ce0" }} , 
 	{ "name": "output_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_d", "role": "q0" }} , 
 	{ "name": "output_dwei_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "output_dwei", "role": "address0" }} , 
 	{ "name": "output_dwei_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dwei", "role": "ce0" }} , 
 	{ "name": "output_dwei_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dwei", "role": "we0" }} , 
 	{ "name": "output_dwei_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dwei", "role": "d0" }} , 
 	{ "name": "output_dwei_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dwei", "role": "q0" }} , 
 	{ "name": "C5_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_y", "role": "address0" }} , 
 	{ "name": "C5_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_y", "role": "ce0" }} , 
 	{ "name": "C5_y_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_y", "role": "q0" }} , 
 	{ "name": "output_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_dbias", "role": "address0" }} , 
 	{ "name": "output_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dbias", "role": "ce0" }} , 
 	{ "name": "output_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dbias", "role": "we0" }} , 
 	{ "name": "output_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dbias", "role": "d0" }} , 
 	{ "name": "output_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dbias", "role": "q0" }}  ]}
set Spec2ImplPortList { 
	output_d { ap_memory {  { output_d_address0 mem_address 1 4 }  { output_d_ce0 mem_ce 1 1 }  { output_d_q0 mem_dout 0 32 } } }
	output_dwei { ap_memory {  { output_dwei_address0 mem_address 1 9 }  { output_dwei_ce0 mem_ce 1 1 }  { output_dwei_we0 mem_we 1 1 }  { output_dwei_d0 mem_din 1 32 }  { output_dwei_q0 mem_dout 0 32 } } }
	C5_y { ap_memory {  { C5_y_address0 mem_address 1 5 }  { C5_y_ce0 mem_ce 1 1 }  { C5_y_q0 mem_dout 0 32 } } }
	output_dbias { ap_memory {  { output_dbias_address0 mem_address 1 4 }  { output_dbias_ce0 mem_ce 1 1 }  { output_dbias_we0 mem_we 1 1 }  { output_dbias_d0 mem_din 1 32 }  { output_dbias_q0 mem_dout 0 32 } } }
}
