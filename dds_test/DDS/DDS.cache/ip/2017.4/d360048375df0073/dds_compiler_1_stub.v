// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.4 (win64) Build 2086221 Fri Dec 15 20:55:39 MST 2017
// Date        : Wed Dec 25 13:44:40 2019
// Host        : yfzx054 running 64-bit Service Pack 1  (build 7601)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ dds_compiler_1_stub.v
// Design      : dds_compiler_1
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z035ffg676-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dds_compiler_v6_0_15,Vivado 2017.4" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(aclk, s_axis_config_tvalid, 
  s_axis_config_tdata, s_axis_config_tlast, m_axis_data_tvalid, m_axis_data_tdata, 
  m_axis_phase_tvalid, m_axis_phase_tdata, event_s_config_tlast_missing, 
  event_s_config_tlast_unexpected)
/* synthesis syn_black_box black_box_pad_pin="aclk,s_axis_config_tvalid,s_axis_config_tdata[31:0],s_axis_config_tlast,m_axis_data_tvalid,m_axis_data_tdata[47:0],m_axis_phase_tvalid,m_axis_phase_tdata[31:0],event_s_config_tlast_missing,event_s_config_tlast_unexpected" */;
  input aclk;
  input s_axis_config_tvalid;
  input [31:0]s_axis_config_tdata;
  input s_axis_config_tlast;
  output m_axis_data_tvalid;
  output [47:0]m_axis_data_tdata;
  output m_axis_phase_tvalid;
  output [31:0]m_axis_phase_tdata;
  output event_s_config_tlast_missing;
  output event_s_config_tlast_unexpected;
endmodule
