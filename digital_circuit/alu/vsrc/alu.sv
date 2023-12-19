`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/19 08:49:32
// Design Name: 
// Module Name: alu
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


module alu(
    input  logic [3:0]  A,
    input  logic [3:0]  B,
    input  logic [2:0]  shamt,
    output logic [3:0]  S,
    output logic        Z,
    output logic        O,
    output logic        C
);

    localparam ALU_ADD = 3'b000;
    localparam ALU_SUB = 3'b001;
    localparam ALU_NOT = 3'b010;
    localparam ALU_AND = 3'b011;
    localparam ALU_OR  = 3'b100;
    localparam ALU_XOR = 3'b101;
    localparam ALU_SLT = 3'b110;
    localparam ALU_EQU = 3'b111;

    logic [3:0] com_B;
    logic [3:0] sum;

    always_latch begin
        com_B = 4'b1111 ^ B;
        case (shamt)
            ALU_ADD:    {C, S} = A + B;
            ALU_SUB:    {C, S} = A + com_B + 1'b1;
            ALU_NOT:    S = ~A;
            ALU_AND:    S = A & B;
            ALU_OR:     S = A | B;
            ALU_XOR:    S = A ^ B;
            ALU_SLT:    begin
                S = {3'b0, $signed(A) < $signed(B)};
            end
            ALU_EQU:    begin
                sum = A + com_B + 1'b1;
								/* verilator lint_off WIDTHEXPAND */
                S = (sum == 4'b0);
            end
        endcase
    end
    
    assign Z = ~(| S);
    assign O = (S[3] ^ A[3]) & (~shamt[0] ^ A[3] ^ B[3]);
endmodule
