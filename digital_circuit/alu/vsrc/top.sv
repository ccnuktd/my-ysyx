`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/19 09:32:04
// Design Name: 
// Module Name: top
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


module top(
    input  logic [3:0]  A,
    input  logic [3:0]  B,
    input  logic [2:0]  shamt,
    output logic [3:0]  S,
    output logic        Z,
    output logic        O,
    output logic        C
    
);
    alu u_alu (.*);
endmodule
