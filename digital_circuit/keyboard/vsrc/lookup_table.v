`timescale 1ps/1ps
module lookup_table (
    input  [7:0] data         ,
    output reg [7:0] ascii_data   ,
    output [7:0] key_data
);

    always @(*) begin
        case(data)
            8'h45:  ascii_data = 8'h30;
            8'h16:  ascii_data = 8'h31;
            8'h1E:  ascii_data = 8'h32;
            8'h26:  ascii_data = 8'h33;
            8'h25:  ascii_data = 8'h34;
            8'h2E:  ascii_data = 8'h35;
            8'h36:  ascii_data = 8'h36;
            8'h3D:  ascii_data = 8'h37;
            8'h3E:  ascii_data = 8'h38;
            8'h46:  ascii_data = 8'h39;

            8'h1C:  ascii_data = 8'h61;
            8'h32:  ascii_data = 8'h62;
            8'h21:  ascii_data = 8'h63;
            8'h23:  ascii_data = 8'h64;
            8'h24:  ascii_data = 8'h65;
            8'h2B:  ascii_data = 8'h66;
            8'h34:  ascii_data = 8'h67;
            8'h33:  ascii_data = 8'h68;
            8'h43:  ascii_data = 8'h69;
            8'h3B:  ascii_data = 8'h6A;
            8'h42:  ascii_data = 8'h6B;
            8'h4B:  ascii_data = 8'h6C;
            8'h3A:  ascii_data = 8'h6D;
            8'h31:  ascii_data = 8'h6E;
            8'h44:  ascii_data = 8'h6F;
            8'h4D:  ascii_data = 8'h70;
            8'h15:  ascii_data = 8'h71;
            8'h2D:  ascii_data = 8'h72;
            8'h1B:  ascii_data = 8'h73;
            8'h2C:  ascii_data = 8'h74;
            8'h3C:  ascii_data = 8'h75;
            8'h2A:  ascii_data = 8'h76;
            8'h1D:  ascii_data = 8'h77;
            8'h22:  ascii_data = 8'h78;
            8'h35:  ascii_data = 8'h79;
            8'h1A:  ascii_data = 8'h7A;
            default: ascii_data = 0;
        endcase
    end

    assign key_data = data;
endmodule