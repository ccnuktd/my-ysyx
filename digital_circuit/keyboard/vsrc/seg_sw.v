`timescale 1ps/1ps
module seg_sw (
    input        ena          ,
    input  [3:0] data         ,
    output [7:0] seg
);
    reg [7:0] dout;

    always @(*) begin
        case(data)
            4'h0:   dout = 8'b11111100;
            4'h1:   dout = 8'b01100000;
            4'h2:   dout = 8'b11011010;
            4'h3:   dout = 8'b11110010;
            4'h4:   dout = 8'b01100110;
            4'h5:   dout = 8'b10110110;
            4'h6:   dout = 8'b10111110;
            4'h7:   dout = 8'b11100000;
            4'h8:   dout = 8'b11111110;
            4'h9:   dout = 8'b11110110;
            4'hA:   dout = 8'b11101110;
            4'hB:   dout = 8'b00111110;
            4'hC:   dout = 8'b10011100;
            4'hD:   dout = 8'b01111010;
            4'hE:   dout = 8'b11011110;
            4'hF:   dout = 8'b10001110;
            default: dout = 0;
        endcase
    end

    assign seg = ena ? ~dout : 8'hFF;
endmodule
