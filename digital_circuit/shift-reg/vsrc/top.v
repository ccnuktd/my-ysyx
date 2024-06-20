module top (
    input wire clk          ,
    input wire [1:0] shamt  ,
    input wire [7:0] din    ,

    output reg [7:0] data
);
    // shamt=00 reset, 01 set din, 10 work, other stop
    
    always @(posedge clk) begin
        if (shamt == 2'b00) data <= 8'b0;
        else if (shamt == 2'b01) data <= din;
        else if (shamt == 2'b10) data <= {data[4] ^ data[3] ^ data[2] ^ data[0], data[7:1]};
        else data <= data;
    end

endmodule