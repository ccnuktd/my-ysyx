`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/11 09:50:53
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
    input logic [7:0] x,
    input logic ena,
    output logic [2:0] y,
    output logic idx,
    output logic [6:0] h
);
    encode83 u_encode3(.x(x), .ena(ena), .y(y), .idx(idx));
		/* verilator lint_off WIDTHEXPAND */
    bcd7seg u_bcd7seg(.b(y), .h(h));
endmodule
