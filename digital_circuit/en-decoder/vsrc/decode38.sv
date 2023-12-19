`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/11 08:48:54
// Design Name: 
// Module Name: decode38
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


module decode38(
    input logic [2:0] x,
    input logic ena,
    output logic [7:0] y
    );
    integer i;

    always_comb begin
        if (ena) begin
            for (i = 0; i <= 7; i = i + 1) begin
                if (x == i) y[i] = 1;
                else y[i] = 0;
            end
        end else y = 8'b0;
    end
endmodule
