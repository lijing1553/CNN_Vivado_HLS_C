set moduleName dateport_update_C1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_update_C1}
set C_modelType { void 0 }
set C_modelArgList { 
	{ inputimg float 32 regular {array 1024 { 1 1 } 1 1 }  }
	{ C1_d float 32 regular {array 4704 { 1 1 } 1 1 } {global 0}  }
	{ C1_dmapData float 32 regular {array 150 { 2 3 } 1 1 } {global 2}  }
	{ C1_dbias float 32 regular {array 6 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inputimg", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" } , 
 	{ "Name" : "C1_d", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"extern" : 0} , 
 	{ "Name" : "C1_dmapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C1_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ inputimg_address0 sc_out sc_lv 10 signal 0 } 
	{ inputimg_ce0 sc_out sc_logic 1 signal 0 } 
	{ inputimg_q0 sc_in sc_lv 32 signal 0 } 
	{ inputimg_address1 sc_out sc_lv 10 signal 0 } 
	{ inputimg_ce1 sc_out sc_logic 1 signal 0 } 
	{ inputimg_q1 sc_in sc_lv 32 signal 0 } 
	{ C1_d_address0 sc_out sc_lv 13 signal 1 } 
	{ C1_d_ce0 sc_out sc_logic 1 signal 1 } 
	{ C1_d_q0 sc_in sc_lv 32 signal 1 } 
	{ C1_d_address1 sc_out sc_lv 13 signal 1 } 
	{ C1_d_ce1 sc_out sc_logic 1 signal 1 } 
	{ C1_d_q1 sc_in sc_lv 32 signal 1 } 
	{ C1_dmapData_address0 sc_out sc_lv 8 signal 2 } 
	{ C1_dmapData_ce0 sc_out sc_logic 1 signal 2 } 
	{ C1_dmapData_we0 sc_out sc_logic 1 signal 2 } 
	{ C1_dmapData_d0 sc_out sc_lv 32 signal 2 } 
	{ C1_dmapData_q0 sc_in sc_lv 32 signal 2 } 
	{ C1_dbias_address0 sc_out sc_lv 3 signal 3 } 
	{ C1_dbias_ce0 sc_out sc_logic 1 signal 3 } 
	{ C1_dbias_we0 sc_out sc_logic 1 signal 3 } 
	{ C1_dbias_d0 sc_out sc_lv 32 signal 3 } 
	{ C1_dbias_q0 sc_in sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "inputimg_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "inputimg", "role": "address0" }} , 
 	{ "name": "inputimg_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputimg", "role": "ce0" }} , 
 	{ "name": "inputimg_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inputimg", "role": "q0" }} , 
 	{ "name": "inputimg_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "inputimg", "role": "address1" }} , 
 	{ "name": "inputimg_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputimg", "role": "ce1" }} , 
 	{ "name": "inputimg_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inputimg", "role": "q1" }} , 
 	{ "name": "C1_d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_d", "role": "address0" }} , 
 	{ "name": "C1_d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_d", "role": "ce0" }} , 
 	{ "name": "C1_d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_d", "role": "q0" }} , 
 	{ "name": "C1_d_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "C1_d", "role": "address1" }} , 
 	{ "name": "C1_d_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_d", "role": "ce1" }} , 
 	{ "name": "C1_d_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_d", "role": "q1" }} , 
 	{ "name": "C1_dmapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "address0" }} , 
 	{ "name": "C1_dmapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "ce0" }} , 
 	{ "name": "C1_dmapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "we0" }} , 
 	{ "name": "C1_dmapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "d0" }} , 
 	{ "name": "C1_dmapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "q0" }} , 
 	{ "name": "C1_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "C1_dbias", "role": "address0" }} , 
 	{ "name": "C1_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dbias", "role": "ce0" }} , 
 	{ "name": "C1_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dbias", "role": "we0" }} , 
 	{ "name": "C1_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dbias", "role": "d0" }} , 
 	{ "name": "C1_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dbias", "role": "q0" }}  ]}
set Spec2ImplPortList { 
	inputimg { ap_memory {  { inputimg_address0 mem_address 1 10 }  { inputimg_ce0 mem_ce 1 1 }  { inputimg_q0 mem_dout 0 32 }  { inputimg_address1 mem_address 1 10 }  { inputimg_ce1 mem_ce 1 1 }  { inputimg_q1 mem_dout 0 32 } } }
	C1_d { ap_memory {  { C1_d_address0 mem_address 1 13 }  { C1_d_ce0 mem_ce 1 1 }  { C1_d_q0 mem_dout 0 32 }  { C1_d_address1 mem_address 1 13 }  { C1_d_ce1 mem_ce 1 1 }  { C1_d_q1 mem_dout 0 32 } } }
	C1_dmapData { ap_memory {  { C1_dmapData_address0 mem_address 1 8 }  { C1_dmapData_ce0 mem_ce 1 1 }  { C1_dmapData_we0 mem_we 1 1 }  { C1_dmapData_d0 mem_din 1 32 }  { C1_dmapData_q0 mem_dout 0 32 } } }
	C1_dbias { ap_memory {  { C1_dbias_address0 mem_address 1 3 }  { C1_dbias_ce0 mem_ce 1 1 }  { C1_dbias_we0 mem_we 1 1 }  { C1_dbias_d0 mem_din 1 32 }  { C1_dbias_q0 mem_dout 0 32 } } }
}
