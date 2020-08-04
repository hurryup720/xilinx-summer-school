`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:  
// Design Name: GzYh001
// Module Name: dds_test
// Project Name: dds_test
// Target Devices: xc7z035ffg676-2
// Tool Versions: Vivado v2017.4 (64-bit)
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module dds_test(
        input clk,   //100MHz
        input reset,
        
        //单通道DDS输出
        output wire m_axis_data_tvalid,
        output wire [47:0] m_axis_data_tdata,
        output wire m_axis_phase_tvalid,
        output wire [31:0] m_axis_phase_tdata,
        
        //4通道DDS输出
        output wire m_axis_data_tvalid_m,
        output wire [47:0] m_axis_data_tdata_m,
        output wire m_axis_phase_tvalid_m,
        output wire [31:0] m_axis_phase_tdata_m,
        output wire [1:0] m_axis_data_tuser_m,
        output reg [19:0] m_dds_ch0_cosine,
        output reg [19:0] m_dds_ch0_sine,
        output reg [19:0] m_dds_ch1_cosine,
        output reg [19:0] m_dds_ch1_sine,
        output reg [19:0] m_dds_ch2_cosine,
        output reg [19:0] m_dds_ch2_sine,
        output reg [19:0] m_dds_ch3_cosine,
        output reg [19:0] m_dds_ch3_sine,
        output wire event_s_config_tlast_missing,
        output wire event_s_config_tlast_unexpected
               
    );
    
    //--------------------------------- 单通道DDS，正交sine和cosine输出 ----------------------
    //输出频率1MHz
    
    dds_compiler_0 dds_ip (
      .aclk(clk),                                // input wire aclk
      .m_axis_data_tvalid(m_axis_data_tvalid),    // output wire m_axis_data_tvalid
      .m_axis_data_tdata(m_axis_data_tdata),      // output wire [47 : 0] m_axis_data_tdata
      .m_axis_phase_tvalid(m_axis_phase_tvalid),  // output wire m_axis_phase_tvalid
      .m_axis_phase_tdata(m_axis_phase_tdata)    // output wire [31 : 0] m_axis_phase_tdata
    );
 
 //-------------------------------------- 4通道DDS配置 --------------------------------------
 //CH01----1MHz
 //CH02----2MHz
 //CH03----3MHz
 //CH04----4MHz 
 //------------------------------------------------------------------------------------------
 
 
 //通道PINC配置  
 reg s_axis_config_tvalid;
 wire s_axis_config_tready;
 reg s_axis_config_tlast;
 reg [31:0] s_axis_config_tdata;
 reg [3:0] cnt;
 always @(posedge clk or posedge reset)begin
    if(reset) begin
            cnt <= 4'd0;
            s_axis_config_tdata <= 32'h0;
            s_axis_config_tlast <= 1'b0;
            s_axis_config_tvalid <= 1'b0;
        end
    else begin
        case(cnt)
            4'd0: begin
                    s_axis_config_tdata <= 32'h0;
                    s_axis_config_tlast <= 1'b0;
                    s_axis_config_tvalid <= 1'b0;
                    cnt <= cnt + 1'b1;
                end
            4'd1: begin
                    s_axis_config_tvalid <= 1'b1;
                    if(s_axis_config_tready) begin
                        s_axis_config_tdata <= 32'h28F5C2; //CH0 PINC
                        cnt <= cnt + 1'b1;
                        end
                    else
                        cnt <= cnt;
                end
            4'd2: begin
                    if(s_axis_config_tready) begin
                        s_axis_config_tdata <= 32'h51EB85; //CH1 PINC
                        cnt <= cnt + 1'b1;
                        end
                    else
                        cnt <= cnt;
                end
            4'd3: begin
                    if(s_axis_config_tready) begin
                        s_axis_config_tdata <= 32'h7AE147; //CH2 PINC
                        cnt <= cnt + 1'b1;
                        end
                    else
                        cnt <= cnt;
                end
            4'd4: begin
                    if(s_axis_config_tready) begin
                        s_axis_config_tdata <= 32'hA3D70A; //CH3 PINC
                        s_axis_config_tlast <= 1'b1;
                        cnt <= cnt + 1'b1;
                        end
                    else
                        cnt <= cnt;
                end
            4'd5: begin
                    if(s_axis_config_tready) begin
                        s_axis_config_tdata <= 32'h0;
                        s_axis_config_tlast <= 1'b0;
                        s_axis_config_tvalid <= 1'b0;
                        cnt <= cnt + 1'b1;
                        end
                    else
                        cnt <= cnt;
                end
            4'd6: begin
                    cnt <= cnt;
                end     
        endcase
    end
 end
 
 //四通到DDS输出波形分离
 //注意：此处分离出的波形，由于4通道输出时，DDS有效时钟为Fsysclk/4=100M/4=25MHz,
 //故分离出的波形存在4倍过采样，可以通过25MHz时钟作进一步处理。
always @(posedge clk or posedge reset) begin
    if(reset) begin
            m_dds_ch0_cosine <= 20'd0;
            m_dds_ch0_sine <= 20'd0;
            m_dds_ch1_cosine <= 20'd0;
            m_dds_ch1_sine <= 20'd0;
            m_dds_ch2_cosine <= 20'd0;
            m_dds_ch2_sine <= 20'd0;
            m_dds_ch3_cosine <= 20'd0;
            m_dds_ch3_sine <= 20'd0;
        end
    else begin
            case(m_axis_data_tuser_m)
                2'b00: begin
                        m_dds_ch0_cosine <= m_axis_data_tdata_m[19:0]; //每个值重复4次
                        m_dds_ch0_sine <= m_axis_data_tdata_m[43:24];  //每个值重复4次
                    end
                2'b01: begin
                        m_dds_ch1_cosine <= m_axis_data_tdata_m[19:0];
                        m_dds_ch1_sine <= m_axis_data_tdata_m[43:24];
                    end
                2'b10: begin
                        m_dds_ch2_cosine <= m_axis_data_tdata_m[19:0];
                        m_dds_ch2_sine <= m_axis_data_tdata_m[43:24];
                    end
                2'b11: begin
                        m_dds_ch3_cosine <= m_axis_data_tdata_m[19:0];
                        m_dds_ch3_sine <= m_axis_data_tdata_m[43:24];
                    end
                
                
            endcase
        end
end
 
 
//4通道输出 DDS IP
    dds_compiler_1 dds_ip2 (
      .aclk(clk),                                                         // input wire aclk
      .s_axis_config_tvalid(s_axis_config_tvalid),                        // input wire s_axis_config_tvalid
      .s_axis_config_tready(s_axis_config_tready),                        // output wire s_axis_config_tready
      .s_axis_config_tdata(s_axis_config_tdata),                          // input wire [31 : 0] s_axis_config_tdata
      .s_axis_config_tlast(s_axis_config_tlast),                          // input wire s_axis_config_tlast
      .m_axis_data_tvalid(m_axis_data_tvalid_m),                          // output wire m_axis_data_tvalid
      .m_axis_data_tready(1'b1),                                         // input wire m_axis_data_tready
      .m_axis_data_tdata(m_axis_data_tdata_m),                            // output wire [47 : 0] m_axis_data_tdata
      .m_axis_data_tuser(m_axis_data_tuser_m),                            // output wire [1 : 0] m_axis_data_tuser
      .m_axis_phase_tvalid(m_axis_phase_tvalid_m),                        // output wire m_axis_phase_tvalid
      .m_axis_phase_tready(1'b1),                                        // input wire m_axis_phase_tready
      .m_axis_phase_tdata(m_axis_phase_tdata_m),                         // output wire [31 : 0] m_axis_phase_tdata
      .event_s_config_tlast_missing(event_s_config_tlast_missing),        // output wire event_s_config_tlast_missing
      .event_s_config_tlast_unexpected(event_s_config_tlast_unexpected)  // output wire event_s_config_tlast_unexpected
    );
    
endmodule
