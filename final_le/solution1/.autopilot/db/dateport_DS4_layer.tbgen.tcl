set moduleName dateport_DS4_layer
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_DS4_layer}
set C_modelType { void 0 }
set C_modelArgList { 
	{ S4_d float 32 regular {array 400 { 2 2 } 1 1 } {global 2}  }
	{ C5_d float 32 regular {array 30 { 1 3 } 1 1 } {global 0}  }
	{ C5_mapData float 32 regular {array 12000 { 1 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "S4_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C5_mapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ S4_d_address0 sc_out sc_lv 9 signal 0 } 
	{ S4_d_ce0 sc_out sc_logic 1 signal 0 } 
	{ S4_d_we0 sc_out sc_logic 1 signal 0 } 
	{ S4_d_d0 sc_out sc_lv 32 signal 0 } 
	{ S4_d_q0 sc_in sc_lv 32 signal 0 } 
	{ S4_d_address1 sc_out sc_lv 9 signal 0 } 
	{ S4_d_ce1 sc_out sc_logic 1 signal 0 } 
	{ S4_d_we1 sc_out sc_logic 1 signal 0 } 
	{ S4_d_d1 sc_out sc_lv 32 signal 0 } 
	{ S4_d_q1 sc_in sc_lv 32 signal 0 } 
	{ C5_d_address0 sc_out sc_lv 5 signal 1 } 
	{ C5_d_ce0 sc_out sc_logic 1 signal 1 } 
	{ C5_d_q0 sc_in sc_lv 32 signal 1 } 
	{ C5_mapData_address0 sc_out sc_lv 14 signal 2 } 
	{ C5_mapData_ce0 sc_out sc_logic 1 signal 2 } 
	{ C5_mapData_q0 sc_in sc_lv 32 signal 2 } 
	{ C5_mapData_address1 sc_out sc_lv 14 signal 2 } 
	{ C5_mapData_ce1 sc_out sc_logic 1 signal 2 } 
	{ C5_mapData_q1 sc_in sc_lv 32 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "S4_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "S4_d", "role": "address0" }} , 
 	{ "name": "S4_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S4_d", "role": "ce0" }} , 
 	{ "name": "S4_d_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S4_d", "role": "we0" }} , 
 	{ "name": "S4_d_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S4_d", "role": "d0" }} , 
 	{ "name": "S4_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S4_d", "role": "q0" }} , 
 	{ "name": "S4_d_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "S4_d", "role": "address1" }} , 
 	{ "name": "S4_d_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S4_d", "role": "ce1" }} , 
 	{ "name": "S4_d_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "S4_d", "role": "we1" }} , 
 	{ "name": "S4_d_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S4_d", "role": "d1" }} , 
 	{ "name": "S4_d_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "S4_d", "role": "q1" }} , 
 	{ "name": "C5_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_d", "role": "address0" }} , 
 	{ "name": "C5_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_d", "role": "ce0" }} , 
 	{ "name": "C5_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_d", "role": "q0" }} , 
 	{ "name": "C5_mapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "C5_mapData", "role": "address0" }} , 
 	{ "name": "C5_mapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_mapData", "role": "ce0" }} , 
 	{ "name": "C5_mapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_mapData", "role": "q0" }} , 
 	{ "name": "C5_mapData_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "C5_mapData", "role": "address1" }} , 
 	{ "name": "C5_mapData_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_mapData", "role": "ce1" }} , 
 	{ "name": "C5_mapData_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_mapData", "role": "q1" }}  ]}
set Spec2ImplPortList { 
	S4_d { ap_memory {  { S4_d_address0 mem_address 1 9 }  { S4_d_ce0 mem_ce 1 1 }  { S4_d_we0 mem_we 1 1 }  { S4_d_d0 mem_din 1 32 }  { S4_d_q0 mem_dout 0 32 }  { S4_d_address1 mem_address 1 9 }  { S4_d_ce1 mem_ce 1 1 }  { S4_d_we1 mem_we 1 1 }  { S4_d_d1 mem_din 1 32 }  { S4_d_q1 mem_dout 0 32 } } }
	C5_d { ap_memory {  { C5_d_address0 mem_address 1 5 }  { C5_d_ce0 mem_ce 1 1 }  { C5_d_q0 mem_dout 0 32 } } }
	C5_mapData { ap_memory {  { C5_mapData_address0 mem_address 1 14 }  { C5_mapData_ce0 mem_ce 1 1 }  { C5_mapData_q0 mem_dout 0 32 }  { C5_mapData_address1 mem_address 1 14 }  { C5_mapData_ce1 mem_ce 1 1 }  { C5_mapData_q1 mem_dout 0 32 } } }
}
