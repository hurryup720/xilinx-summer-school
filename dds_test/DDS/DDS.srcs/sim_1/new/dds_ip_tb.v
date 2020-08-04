`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2019/12/25 10:21:41
// Design Name: 
// Module Name: dds_ip_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module dds_ip_tb;

reg clk;
reg reset;
wire m_axis_data_tvalid;
wire [47:0] m_axis_data_tdata;
wire m_axis_phase_tvalid;
wire [31:0] m_axis_phase_tdata; 

wire m_axis_data_tvalid_m;
wire [47:0] m_axis_data_tdata_m;
wire m_axis_phase_tvalid_m;
wire [31:0] m_axis_phase_tdata_m;
wire [1:0] m_axis_data_tuser_m;
wire [19:0] m_dds_ch0_cosine;
wire [19:0] m_dds_ch0_sine;
wire [19:0] m_dds_ch1_cosine;
wire [19:0] m_dds_ch1_sine;
wire [19:0] m_dds_ch2_cosine;
wire [19:0] m_dds_ch2_sine;
wire [19:0] m_dds_ch3_cosine;
wire [19:0] m_dds_ch3_sine;
wire event_s_config_tlast_missing;
wire event_s_config_tlast_unexpected;

dds_test dut(
   .clk(clk),
   .reset(reset),
   .m_axis_data_tvalid(m_axis_data_tvalid),
   .m_axis_data_tdata(m_axis_data_tdata),
   .m_axis_phase_tvalid(m_axis_phase_tvalid),
   .m_axis_phase_tdata(m_axis_phase_tdata),
   
   .m_axis_data_tvalid_m(m_axis_data_tvalid_m),
   .m_axis_data_tdata_m(m_axis_data_tdata_m),
   .m_axis_phase_tvalid_m(m_axis_phase_tvalid_m),
   .m_axis_phase_tdata_m(m_axis_phase_tdata_m),
   .m_axis_data_tuser_m(m_axis_data_tuser_m),
   .m_dds_ch0_cosine(m_dds_ch0_cosine),
   .m_dds_ch0_sine(m_dds_ch0_sine),
   .m_dds_ch1_cosine(m_dds_ch1_cosine),
   .m_dds_ch1_sine(m_dds_ch1_sine),
   .m_dds_ch2_cosine(m_dds_ch2_cosine),
   .m_dds_ch2_sine(m_dds_ch2_sine),
   .m_dds_ch3_cosine(m_dds_ch3_cosine),
   .m_dds_ch3_sine(m_dds_ch3_sine),
   
   
   .event_s_config_tlast_missing(event_s_config_tlast_missing),
   .event_s_config_tlast_unexpected(event_s_config_tlast_unexpected)
   
    

);

initial begin
   #0 clk = 0; reset = 1'b1;
   #100 reset = 1'b0;
end

always #5 clk = ~clk;

endmodule
