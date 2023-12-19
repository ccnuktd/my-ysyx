`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/11 09:50:39
// Design Name: 
// Module Name: tb_top
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


module tb_top;
    // 83编码器
    // 注意这里是9位，但是u_top只是接受低8位
    logic [8:0] x;
    logic ena;
    logic [2:0] y;

    // 7段数码管
    logic idx;
    logic [6:0] h;

    integer i;

    initial begin
        ena = 0;
        for (x = 9'h0; x <= 8'hff; x = x + 1) begin
            assert(~idx && y == 3'b0) else $fatal("Assertion failed at time %0t: {idx, y} is {%x, %x}, but expected {0, 0}.", $time, idx, y);
        end
        ena = 1;
        for (x = 9'h0; x <= 8'hff; x = x + 1) begin
            
            for(i = 7; i >= 0; i = i - 1) begin
                if (x[i]) begin
                    assert(i == y) else $fatal("Assertion failed at time %0t: y is %x, but expected %x.", $time, y, i);
                    break;
                end
            end
        end
        $finish;
    end

    top u_top(.*);

endmodule
