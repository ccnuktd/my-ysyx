`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/11 09:14:39
// Design Name: 
// Module Name: encode83
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


module encode83(
    input logic [7:0] x,
    input logic ena,
    output logic [2:0] y,
    // idx为指示位，只要x中含1则为1
    output logic idx
    );

    always_comb begin
        if (ena) begin
            idx = 1;
            casez (x) 
                8'b1???????:    y = 3'b111;
                8'b01??????:    y = 3'b110;
                8'b001?????:    y = 3'b101;
                8'b0001????:    y = 3'b100;
                8'b00001???:    y = 3'b011;
                8'b000001??:    y = 3'b010;
                8'b0000001?:    y = 3'b001;
                8'b00000001:    y = 3'b000;
                default:    y = 3'b000;
            endcase
        end else begin
            idx = 0;
            y = 3'b000;
        end
    end
endmodule
