`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/19 09:33:41
// Design Name: 
// Module Name: tb_alu
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


module tb_alu;
    // input
    logic [3:0]  A;
    logic [3:0]  B;
    logic [2:0]  shamt;
    //output
    logic [3:0]  S;
    logic        Z;
    logic        O;
    logic        C;

    task check_add;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultof, resultc, resultz;  //ALU的预期溢出，进位，零位

            if (shamt == 3'b000) begin
                {resultc, results} = A + B;
                resultof = (results[3] ^ A[3]) && (~A[3] ^ B[3]);
                resultz = (results == 0);

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
                assert(C == resultc) else $error("Assertion failed at time %0t: C is {%b}, but expected {%b}.", $time, C, resultc);
                assert(O == resultof) else $error("Assertion failed at time %0t: O is {%b}, but expected {%b}.", $time, O, resultof);
                assert(Z == resultz) else $error("Assertion failed at time %0t: Z is {%b}, but expected {%b}.", $time, Z, resultz);
            end
        end
    endtask

    task check_sub;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultof, resultc, resultz;  //ALU的预期溢出，进位，零位
            logic [3:0] B_com;
            if (shamt == 3'b001) begin
                B_com = (4'b1111) ^ B;
                {resultc, results} = A + B_com + 1'b1;
                resultof = (results[3] ^ A[3]) && (A[3] ^ B[3]);
                resultz = (results == 0);

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
                assert(C == resultc) else $error("Assertion failed at time %0t: C is {%b}, but expected {%b}.", $time, C, resultc);
                assert(O == resultof) else $error("Assertion failed at time %0t: O is {%b}, but expected {%b}.", $time, O, resultof);
                assert(Z == resultz) else $error("Assertion failed at time %0t: Z is {%b}, but expected {%b}.", $time, Z, resultz);
            end
        end
    endtask

    task check_not;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultz;  //ALU的预期零位

            if (shamt == 3'b010) begin
                results = ~A;
                resultz = (results == 0);

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
                assert(Z == resultz) else $error("Assertion failed at time %0t: Z is {%b}, but expected {%b}.", $time, Z, resultz);
            end
        end
    endtask

    task check_and;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultz;  //ALU的预期零位

            if (shamt == 3'b011) begin
                results = A & B;
                resultz = (results == 0);

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
                assert(Z == resultz) else $error("Assertion failed at time %0t: Z is {%b}, but expected {%b}.", $time, Z, resultz);
            end
        end
    endtask

    task check_or;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultz;  //ALU的预期零位

            if (shamt == 3'b100) begin
                results = A | B;
                resultz = (results == 0);

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
                assert(Z == resultz) else $error("Assertion failed at time %0t: Z is {%b}, but expected {%b}.", $time, Z, resultz);
            end
        end
    endtask

    task check_xor;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultz;  //ALU的预期零位

            if (shamt == 3'b101) begin
                results = A ^ B;
                resultz = (results == 0);

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
                assert(Z == resultz) else $error("Assertion failed at time %0t: Z is {%b}, but expected {%b}.", $time, Z, resultz);
            end
        end
    endtask

    task check_slt;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultz;  //ALU的预期零位

            if (shamt == 3'b110) begin
                results = {3'b0, $signed(A) < $signed(B)};

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
            end
        end
    endtask

    task check_equ;
        begin
            logic [3:0] results;  //ALU的结果预期正确输出
            logic       resultz;  //ALU的预期零位

            if (shamt == 3'b110) begin
                results = {3'b0, A == B};

                assert(S == results) else $error("Assertion failed at time %0t: S is {%b}, but expected {%b}.", $time, S, results);
            end
        end
    endtask

    top dut (A, B, shamt, S, Z, O, C);

    logic [5:0] i;
    logic [5:0] j;
    logic [3:0] k;

    initial begin
        for(k=0;k<=7;k=k+1) 
            for(i=0;i<=15;i=i+1)
                for(j=0;j<=15;j=j+1) begin
                    A = i;
                    B = j;
                    shamt = k;
                    case (shamt)
                        3'b000: #1 check_add();
                        3'b001: #1 check_sub();
                        3'b010: #1 check_not();
                        3'b011: #1 check_and();
                        3'b100: #1 check_or();
                        3'b101: #1 check_xor();
                        3'b110: #1 check_slt();
                        3'b111: #1 check_equ();
                    endcase
                    
                end
        $finish;
    end
    
endmodule
