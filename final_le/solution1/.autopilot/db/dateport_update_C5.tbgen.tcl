set moduleName dateport_update_C5
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_update_C5}
set C_modelType { void 0 }
set C_modelArgList { 
	{ S4_y float 32 regular {array 400 { 1 1 } 1 1 } {global 0}  }
	{ C5_dmapData float 32 regular {array 12000 { 2 3 } 1 1 } {global 2}  }
	{ C5_d float 32 regular {array 30 { 1 3 } 1 1 } {global 0}  }
	{ C5_dbias float 32 regular {array 30 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "S4_y", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C5_dmapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C5_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ S4_y_address0 sc_out sc_lv 9 signal 0 } 
	{ S4_y_ce0 sc_out sc_logic 1 signal 0 } 
	{ S4_y_q0 sc_in sc_lv 32 signal 0 } 
	{ S4_y_address1 sc_out sc_lv 9 signal 0 } 
	{ S4_y_ce1 sc_out sc_logic 1 signal 0 } 
	{ S4_y_q1 sc_in sc_lv 32 signal 0 } 
	{ C5_dmapData_address0 sc_out sc_lv 14 signal 1 } 
	{ C5_dmapData_ce0 sc_out sc_logic 1 signal 1 } 
	{ C5_dmapData_we0 sc_out sc_logic 1 signal 1 } 
	{ C5_dmapData_d0 sc_out sc_lv 32 signal 1 } 
	{ C5_dmapData_q0 sc_in sc_lv 32 signal 1 } 
	{ C5_d_address0 sc_out sc_lv 5 signal 2 } 
	{ C5_d_ce0 sc_out sc_logic 1 signal 2 } 
	{ C5_d_q0 sc_in sc_lv 32 signal 2 } 
	{ C5_dbias_address0 sc_out sc_lv 5 signal 3 } 
	{ C5_dbias_ce0 sc_out sc_logic 1 signal 3 } 
	{ C5_dbias_we0 sc_out sc_logic 1 signal 3 } 
	{ C5_dbias_d0 sc_out sc_lv 32 signal 3 } 
	{ C5_dbias_q0 sc_in sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "S4_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "S4_y", "role": "address0" }} , 
 	{ "name": "S4_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S4_y", "role": "ce0" }} , 
 	{ "name": "S4_y_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S4_y", "role": "q0" }} , 
 	{ "name": "S4_y_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "S4_y", "role": "address1" }} , 
 	{ "name": "S4_y_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S4_y", "role": "ce1" }} , 
 	{ "name": "S4_y_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S4_y", "role": "q1" }} , 
 	{ "name": "C5_dmapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "address0" }} , 
 	{ "name": "C5_dmapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "ce0" }} , 
 	{ "name": "C5_dmapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "we0" }} , 
 	{ "name": "C5_dmapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "d0" }} , 
 	{ "name": "C5_dmapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "q0" }} , 
 	{ "name": "C5_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_d", "role": "address0" }} , 
 	{ "name": "C5_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_d", "role": "ce0" }} , 
 	{ "name": "C5_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_d", "role": "q0" }} , 
 	{ "name": "C5_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_dbias", "role": "address0" }} , 
 	{ "name": "C5_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dbias", "role": "ce0" }} , 
 	{ "name": "C5_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dbias", "role": "we0" }} , 
 	{ "name": "C5_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dbias", "role": "d0" }} , 
 	{ "name": "C5_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dbias", "role": "q0" }}  ]}
set Spec2ImplPortList { 
	S4_y { ap_memory {  { S4_y_address0 mem_address 1 9 }  { S4_y_ce0 mem_ce 1 1 }  { S4_y_q0 mem_dout 0 32 }  { S4_y_address1 mem_address 1 9 }  { S4_y_ce1 mem_ce 1 1 }  { S4_y_q1 mem_dout 0 32 } } }
	C5_dmapData { ap_memory {  { C5_dmapData_address0 mem_address 1 14 }  { C5_dmapData_ce0 mem_ce 1 1 }  { C5_dmapData_we0 mem_we 1 1 }  { C5_dmapData_d0 mem_din 1 32 }  { C5_dmapData_q0 mem_dout 0 32 } } }
	C5_d { ap_memory {  { C5_d_address0 mem_address 1 5 }  { C5_d_ce0 mem_ce 1 1 }  { C5_d_q0 mem_dout 0 32 } } }
	C5_dbias { ap_memory {  { C5_dbias_address0 mem_address 1 5 }  { C5_dbias_ce0 mem_ce 1 1 }  { C5_dbias_we0 mem_we 1 1 }  { C5_dbias_d0 mem_din 1 32 }  { C5_dbias_q0 mem_dout 0 32 } } }
}
