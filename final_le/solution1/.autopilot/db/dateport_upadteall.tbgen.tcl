set moduleName dateport_upadteall
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {dateport_upadteall}
set C_modelType { void 0 }
set C_modelArgList { 
	{ C1_mapData float 32 regular {array 150 { 2 3 } 1 1 } {global 2}  }
	{ C1_dmapData float 32 regular {array 150 { 2 3 } 1 1 } {global 2}  }
	{ C1_bias float 32 regular {array 6 { 2 3 } 1 1 } {global 2}  }
	{ C1_dbias float 32 regular {array 6 { 2 3 } 1 1 } {global 2}  }
	{ C3_mapData float 32 regular {array 2400 { 1 0 } 1 1 } {global 2}  }
	{ C3_dmapData float 32 regular {array 2400 { 1 0 } 1 1 } {global 2}  }
	{ C3_bias float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ C3_dbias float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ C5_mapData float 32 regular {array 12000 { 2 3 } 1 1 } {global 2}  }
	{ C5_dmapData float 32 regular {array 12000 { 2 3 } 1 1 } {global 2}  }
	{ C5_bias float 32 regular {array 30 { 2 3 } 1 1 } {global 2}  }
	{ C5_dbias float 32 regular {array 30 { 2 3 } 1 1 } {global 2}  }
	{ output_wei float 32 regular {array 300 { 2 3 } 1 1 } {global 2}  }
	{ output_dwei float 32 regular {array 300 { 2 3 } 1 1 } {global 2}  }
	{ output_bias float 32 regular {array 10 { 2 3 } 1 1 } {global 2}  }
	{ output_dbias float 32 regular {array 10 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C1_mapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C1_dmapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C1_bias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C1_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C3_mapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C3_dmapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C3_bias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C3_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_mapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_dmapData", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_bias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "C5_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "output_wei", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "output_dwei", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "output_bias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} , 
 	{ "Name" : "output_dbias", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"extern" : 0} ]}
# RTL Port declarations: 
set portNum 90
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C1_mapData_address0 sc_out sc_lv 8 signal 0 } 
	{ C1_mapData_ce0 sc_out sc_logic 1 signal 0 } 
	{ C1_mapData_we0 sc_out sc_logic 1 signal 0 } 
	{ C1_mapData_d0 sc_out sc_lv 32 signal 0 } 
	{ C1_mapData_q0 sc_in sc_lv 32 signal 0 } 
	{ C1_dmapData_address0 sc_out sc_lv 8 signal 1 } 
	{ C1_dmapData_ce0 sc_out sc_logic 1 signal 1 } 
	{ C1_dmapData_we0 sc_out sc_logic 1 signal 1 } 
	{ C1_dmapData_d0 sc_out sc_lv 32 signal 1 } 
	{ C1_dmapData_q0 sc_in sc_lv 32 signal 1 } 
	{ C1_bias_address0 sc_out sc_lv 3 signal 2 } 
	{ C1_bias_ce0 sc_out sc_logic 1 signal 2 } 
	{ C1_bias_we0 sc_out sc_logic 1 signal 2 } 
	{ C1_bias_d0 sc_out sc_lv 32 signal 2 } 
	{ C1_bias_q0 sc_in sc_lv 32 signal 2 } 
	{ C1_dbias_address0 sc_out sc_lv 3 signal 3 } 
	{ C1_dbias_ce0 sc_out sc_logic 1 signal 3 } 
	{ C1_dbias_we0 sc_out sc_logic 1 signal 3 } 
	{ C1_dbias_d0 sc_out sc_lv 32 signal 3 } 
	{ C1_dbias_q0 sc_in sc_lv 32 signal 3 } 
	{ C3_mapData_address0 sc_out sc_lv 12 signal 4 } 
	{ C3_mapData_ce0 sc_out sc_logic 1 signal 4 } 
	{ C3_mapData_q0 sc_in sc_lv 32 signal 4 } 
	{ C3_mapData_address1 sc_out sc_lv 12 signal 4 } 
	{ C3_mapData_ce1 sc_out sc_logic 1 signal 4 } 
	{ C3_mapData_we1 sc_out sc_logic 1 signal 4 } 
	{ C3_mapData_d1 sc_out sc_lv 32 signal 4 } 
	{ C3_dmapData_address0 sc_out sc_lv 12 signal 5 } 
	{ C3_dmapData_ce0 sc_out sc_logic 1 signal 5 } 
	{ C3_dmapData_q0 sc_in sc_lv 32 signal 5 } 
	{ C3_dmapData_address1 sc_out sc_lv 12 signal 5 } 
	{ C3_dmapData_ce1 sc_out sc_logic 1 signal 5 } 
	{ C3_dmapData_we1 sc_out sc_logic 1 signal 5 } 
	{ C3_dmapData_d1 sc_out sc_lv 32 signal 5 } 
	{ C3_bias_address0 sc_out sc_lv 4 signal 6 } 
	{ C3_bias_ce0 sc_out sc_logic 1 signal 6 } 
	{ C3_bias_we0 sc_out sc_logic 1 signal 6 } 
	{ C3_bias_d0 sc_out sc_lv 32 signal 6 } 
	{ C3_bias_q0 sc_in sc_lv 32 signal 6 } 
	{ C3_dbias_address0 sc_out sc_lv 4 signal 7 } 
	{ C3_dbias_ce0 sc_out sc_logic 1 signal 7 } 
	{ C3_dbias_we0 sc_out sc_logic 1 signal 7 } 
	{ C3_dbias_d0 sc_out sc_lv 32 signal 7 } 
	{ C3_dbias_q0 sc_in sc_lv 32 signal 7 } 
	{ C5_mapData_address0 sc_out sc_lv 14 signal 8 } 
	{ C5_mapData_ce0 sc_out sc_logic 1 signal 8 } 
	{ C5_mapData_we0 sc_out sc_logic 1 signal 8 } 
	{ C5_mapData_d0 sc_out sc_lv 32 signal 8 } 
	{ C5_mapData_q0 sc_in sc_lv 32 signal 8 } 
	{ C5_dmapData_address0 sc_out sc_lv 14 signal 9 } 
	{ C5_dmapData_ce0 sc_out sc_logic 1 signal 9 } 
	{ C5_dmapData_we0 sc_out sc_logic 1 signal 9 } 
	{ C5_dmapData_d0 sc_out sc_lv 32 signal 9 } 
	{ C5_dmapData_q0 sc_in sc_lv 32 signal 9 } 
	{ C5_bias_address0 sc_out sc_lv 5 signal 10 } 
	{ C5_bias_ce0 sc_out sc_logic 1 signal 10 } 
	{ C5_bias_we0 sc_out sc_logic 1 signal 10 } 
	{ C5_bias_d0 sc_out sc_lv 32 signal 10 } 
	{ C5_bias_q0 sc_in sc_lv 32 signal 10 } 
	{ C5_dbias_address0 sc_out sc_lv 5 signal 11 } 
	{ C5_dbias_ce0 sc_out sc_logic 1 signal 11 } 
	{ C5_dbias_we0 sc_out sc_logic 1 signal 11 } 
	{ C5_dbias_d0 sc_out sc_lv 32 signal 11 } 
	{ C5_dbias_q0 sc_in sc_lv 32 signal 11 } 
	{ output_wei_address0 sc_out sc_lv 9 signal 12 } 
	{ output_wei_ce0 sc_out sc_logic 1 signal 12 } 
	{ output_wei_we0 sc_out sc_logic 1 signal 12 } 
	{ output_wei_d0 sc_out sc_lv 32 signal 12 } 
	{ output_wei_q0 sc_in sc_lv 32 signal 12 } 
	{ output_dwei_address0 sc_out sc_lv 9 signal 13 } 
	{ output_dwei_ce0 sc_out sc_logic 1 signal 13 } 
	{ output_dwei_we0 sc_out sc_logic 1 signal 13 } 
	{ output_dwei_d0 sc_out sc_lv 32 signal 13 } 
	{ output_dwei_q0 sc_in sc_lv 32 signal 13 } 
	{ output_bias_address0 sc_out sc_lv 4 signal 14 } 
	{ output_bias_ce0 sc_out sc_logic 1 signal 14 } 
	{ output_bias_we0 sc_out sc_logic 1 signal 14 } 
	{ output_bias_d0 sc_out sc_lv 32 signal 14 } 
	{ output_bias_q0 sc_in sc_lv 32 signal 14 } 
	{ output_dbias_address0 sc_out sc_lv 4 signal 15 } 
	{ output_dbias_ce0 sc_out sc_logic 1 signal 15 } 
	{ output_dbias_we0 sc_out sc_logic 1 signal 15 } 
	{ output_dbias_d0 sc_out sc_lv 32 signal 15 } 
	{ output_dbias_q0 sc_in sc_lv 32 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C1_mapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "C1_mapData", "role": "address0" }} , 
 	{ "name": "C1_mapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_mapData", "role": "ce0" }} , 
 	{ "name": "C1_mapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_mapData", "role": "we0" }} , 
 	{ "name": "C1_mapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_mapData", "role": "d0" }} , 
 	{ "name": "C1_mapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_mapData", "role": "q0" }} , 
 	{ "name": "C1_dmapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "address0" }} , 
 	{ "name": "C1_dmapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "ce0" }} , 
 	{ "name": "C1_dmapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "we0" }} , 
 	{ "name": "C1_dmapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "d0" }} , 
 	{ "name": "C1_dmapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dmapData", "role": "q0" }} , 
 	{ "name": "C1_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "C1_bias", "role": "address0" }} , 
 	{ "name": "C1_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_bias", "role": "ce0" }} , 
 	{ "name": "C1_bias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_bias", "role": "we0" }} , 
 	{ "name": "C1_bias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_bias", "role": "d0" }} , 
 	{ "name": "C1_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_bias", "role": "q0" }} , 
 	{ "name": "C1_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "C1_dbias", "role": "address0" }} , 
 	{ "name": "C1_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dbias", "role": "ce0" }} , 
 	{ "name": "C1_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1_dbias", "role": "we0" }} , 
 	{ "name": "C1_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dbias", "role": "d0" }} , 
 	{ "name": "C1_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1_dbias", "role": "q0" }} , 
 	{ "name": "C3_mapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "C3_mapData", "role": "address0" }} , 
 	{ "name": "C3_mapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_mapData", "role": "ce0" }} , 
 	{ "name": "C3_mapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_mapData", "role": "q0" }} , 
 	{ "name": "C3_mapData_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "C3_mapData", "role": "address1" }} , 
 	{ "name": "C3_mapData_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_mapData", "role": "ce1" }} , 
 	{ "name": "C3_mapData_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_mapData", "role": "we1" }} , 
 	{ "name": "C3_mapData_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_mapData", "role": "d1" }} , 
 	{ "name": "C3_dmapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "address0" }} , 
 	{ "name": "C3_dmapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "ce0" }} , 
 	{ "name": "C3_dmapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "q0" }} , 
 	{ "name": "C3_dmapData_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "address1" }} , 
 	{ "name": "C3_dmapData_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "ce1" }} , 
 	{ "name": "C3_dmapData_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "we1" }} , 
 	{ "name": "C3_dmapData_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dmapData", "role": "d1" }} , 
 	{ "name": "C3_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C3_bias", "role": "address0" }} , 
 	{ "name": "C3_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_bias", "role": "ce0" }} , 
 	{ "name": "C3_bias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_bias", "role": "we0" }} , 
 	{ "name": "C3_bias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_bias", "role": "d0" }} , 
 	{ "name": "C3_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_bias", "role": "q0" }} , 
 	{ "name": "C3_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C3_dbias", "role": "address0" }} , 
 	{ "name": "C3_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dbias", "role": "ce0" }} , 
 	{ "name": "C3_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3_dbias", "role": "we0" }} , 
 	{ "name": "C3_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dbias", "role": "d0" }} , 
 	{ "name": "C3_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3_dbias", "role": "q0" }} , 
 	{ "name": "C5_mapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "C5_mapData", "role": "address0" }} , 
 	{ "name": "C5_mapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_mapData", "role": "ce0" }} , 
 	{ "name": "C5_mapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_mapData", "role": "we0" }} , 
 	{ "name": "C5_mapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_mapData", "role": "d0" }} , 
 	{ "name": "C5_mapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_mapData", "role": "q0" }} , 
 	{ "name": "C5_dmapData_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "address0" }} , 
 	{ "name": "C5_dmapData_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "ce0" }} , 
 	{ "name": "C5_dmapData_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "we0" }} , 
 	{ "name": "C5_dmapData_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "d0" }} , 
 	{ "name": "C5_dmapData_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dmapData", "role": "q0" }} , 
 	{ "name": "C5_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_bias", "role": "address0" }} , 
 	{ "name": "C5_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_bias", "role": "ce0" }} , 
 	{ "name": "C5_bias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_bias", "role": "we0" }} , 
 	{ "name": "C5_bias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_bias", "role": "d0" }} , 
 	{ "name": "C5_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_bias", "role": "q0" }} , 
 	{ "name": "C5_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "C5_dbias", "role": "address0" }} , 
 	{ "name": "C5_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dbias", "role": "ce0" }} , 
 	{ "name": "C5_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5_dbias", "role": "we0" }} , 
 	{ "name": "C5_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dbias", "role": "d0" }} , 
 	{ "name": "C5_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5_dbias", "role": "q0" }} , 
 	{ "name": "output_wei_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "output_wei", "role": "address0" }} , 
 	{ "name": "output_wei_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_wei", "role": "ce0" }} , 
 	{ "name": "output_wei_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_wei", "role": "we0" }} , 
 	{ "name": "output_wei_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_wei", "role": "d0" }} , 
 	{ "name": "output_wei_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_wei", "role": "q0" }} , 
 	{ "name": "output_dwei_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "output_dwei", "role": "address0" }} , 
 	{ "name": "output_dwei_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dwei", "role": "ce0" }} , 
 	{ "name": "output_dwei_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dwei", "role": "we0" }} , 
 	{ "name": "output_dwei_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dwei", "role": "d0" }} , 
 	{ "name": "output_dwei_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dwei", "role": "q0" }} , 
 	{ "name": "output_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_bias", "role": "address0" }} , 
 	{ "name": "output_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_bias", "role": "ce0" }} , 
 	{ "name": "output_bias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_bias", "role": "we0" }} , 
 	{ "name": "output_bias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_bias", "role": "d0" }} , 
 	{ "name": "output_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_bias", "role": "q0" }} , 
 	{ "name": "output_dbias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_dbias", "role": "address0" }} , 
 	{ "name": "output_dbias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dbias", "role": "ce0" }} , 
 	{ "name": "output_dbias_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dbias", "role": "we0" }} , 
 	{ "name": "output_dbias_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dbias", "role": "d0" }} , 
 	{ "name": "output_dbias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_dbias", "role": "q0" }}  ]}
set Spec2ImplPortList { 
	C1_mapData { ap_memory {  { C1_mapData_address0 mem_address 1 8 }  { C1_mapData_ce0 mem_ce 1 1 }  { C1_mapData_we0 mem_we 1 1 }  { C1_mapData_d0 mem_din 1 32 }  { C1_mapData_q0 mem_dout 0 32 } } }
	C1_dmapData { ap_memory {  { C1_dmapData_address0 mem_address 1 8 }  { C1_dmapData_ce0 mem_ce 1 1 }  { C1_dmapData_we0 mem_we 1 1 }  { C1_dmapData_d0 mem_din 1 32 }  { C1_dmapData_q0 mem_dout 0 32 } } }
	C1_bias { ap_memory {  { C1_bias_address0 mem_address 1 3 }  { C1_bias_ce0 mem_ce 1 1 }  { C1_bias_we0 mem_we 1 1 }  { C1_bias_d0 mem_din 1 32 }  { C1_bias_q0 mem_dout 0 32 } } }
	C1_dbias { ap_memory {  { C1_dbias_address0 mem_address 1 3 }  { C1_dbias_ce0 mem_ce 1 1 }  { C1_dbias_we0 mem_we 1 1 }  { C1_dbias_d0 mem_din 1 32 }  { C1_dbias_q0 mem_dout 0 32 } } }
	C3_mapData { ap_memory {  { C3_mapData_address0 mem_address 1 12 }  { C3_mapData_ce0 mem_ce 1 1 }  { C3_mapData_q0 mem_dout 0 32 }  { C3_mapData_address1 mem_address 1 12 }  { C3_mapData_ce1 mem_ce 1 1 }  { C3_mapData_we1 mem_we 1 1 }  { C3_mapData_d1 mem_din 1 32 } } }
	C3_dmapData { ap_memory {  { C3_dmapData_address0 mem_address 1 12 }  { C3_dmapData_ce0 mem_ce 1 1 }  { C3_dmapData_q0 mem_dout 0 32 }  { C3_dmapData_address1 mem_address 1 12 }  { C3_dmapData_ce1 mem_ce 1 1 }  { C3_dmapData_we1 mem_we 1 1 }  { C3_dmapData_d1 mem_din 1 32 } } }
	C3_bias { ap_memory {  { C3_bias_address0 mem_address 1 4 }  { C3_bias_ce0 mem_ce 1 1 }  { C3_bias_we0 mem_we 1 1 }  { C3_bias_d0 mem_din 1 32 }  { C3_bias_q0 mem_dout 0 32 } } }
	C3_dbias { ap_memory {  { C3_dbias_address0 mem_address 1 4 }  { C3_dbias_ce0 mem_ce 1 1 }  { C3_dbias_we0 mem_we 1 1 }  { C3_dbias_d0 mem_din 1 32 }  { C3_dbias_q0 mem_dout 0 32 } } }
	C5_mapData { ap_memory {  { C5_mapData_address0 mem_address 1 14 }  { C5_mapData_ce0 mem_ce 1 1 }  { C5_mapData_we0 mem_we 1 1 }  { C5_mapData_d0 mem_din 1 32 }  { C5_mapData_q0 mem_dout 0 32 } } }
	C5_dmapData { ap_memory {  { C5_dmapData_address0 mem_address 1 14 }  { C5_dmapData_ce0 mem_ce 1 1 }  { C5_dmapData_we0 mem_we 1 1 }  { C5_dmapData_d0 mem_din 1 32 }  { C5_dmapData_q0 mem_dout 0 32 } } }
	C5_bias { ap_memory {  { C5_bias_address0 mem_address 1 5 }  { C5_bias_ce0 mem_ce 1 1 }  { C5_bias_we0 mem_we 1 1 }  { C5_bias_d0 mem_din 1 32 }  { C5_bias_q0 mem_dout 0 32 } } }
	C5_dbias { ap_memory {  { C5_dbias_address0 mem_address 1 5 }  { C5_dbias_ce0 mem_ce 1 1 }  { C5_dbias_we0 mem_we 1 1 }  { C5_dbias_d0 mem_din 1 32 }  { C5_dbias_q0 mem_dout 0 32 } } }
	output_wei { ap_memory {  { output_wei_address0 mem_address 1 9 }  { output_wei_ce0 mem_ce 1 1 }  { output_wei_we0 mem_we 1 1 }  { output_wei_d0 mem_din 1 32 }  { output_wei_q0 mem_dout 0 32 } } }
	output_dwei { ap_memory {  { output_dwei_address0 mem_address 1 9 }  { output_dwei_ce0 mem_ce 1 1 }  { output_dwei_we0 mem_we 1 1 }  { output_dwei_d0 mem_din 1 32 }  { output_dwei_q0 mem_dout 0 32 } } }
	output_bias { ap_memory {  { output_bias_address0 mem_address 1 4 }  { output_bias_ce0 mem_ce 1 1 }  { output_bias_we0 mem_we 1 1 }  { output_bias_d0 mem_din 1 32 }  { output_bias_q0 mem_dout 0 32 } } }
	output_dbias { ap_memory {  { output_dbias_address0 mem_address 1 4 }  { output_dbias_ce0 mem_ce 1 1 }  { output_dbias_we0 mem_we 1 1 }  { output_dbias_d0 mem_din 1 32 }  { output_dbias_q0 mem_dout 0 32 } } }
}
