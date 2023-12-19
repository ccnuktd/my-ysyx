`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/11 09:26:59
// Design Name: 
// Module Name: bcd7seg
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

/*
4'h0:   h = 7'b1000000;
4'h1:   h = 7'b1111001;
4'h2:   h = 7'b0100100;
4'h3:   h = 7'b0110000;
4'h4:   h = 7'b0011001;
4'h5:   h = 7'b0010010;
4'h6:   h = 7'b0000010;
4'h7:   h = 7'b1111000;
4'h8:   h = 7'b0000000;
4'h9:   h = 7'b0010000;
4'ha:   h = 7'b0001000;
4'hb:   h = 7'b0000011;
4'hc:   h = 7'b1000110;
4'hd:   h = 7'b0100001;
4'he:   h = 7'b0000110;
4'hf:   h = 7'b0001110;
*/

module bcd7seg(
    input logic [3:0] b,
    output logic [6:0] h
);
    always_comb begin
        case (b)
					4'h0:   h = 7'b1000000;
					4'h1:   h = 7'b1111001;
					4'h2:   h = 7'b0100100;
					4'h3:   h = 7'b0110000;
					4'h4:   h = 7'b0011001;
					4'h5:   h = 7'b0010010;
					4'h6:   h = 7'b0000010;
					4'h7:   h = 7'b1111000;
					4'h8:   h = 7'b0000000;
					4'h9:   h = 7'b0010000;
					4'ha:   h = 7'b0001000;
					4'hb:   h = 7'b0000011;
					4'hc:   h = 7'b1000110;
					4'hd:   h = 7'b0100001;
					4'he:   h = 7'b0000110;
					4'hf:   h = 7'b0001110;
        endcase
    end
endmodule
