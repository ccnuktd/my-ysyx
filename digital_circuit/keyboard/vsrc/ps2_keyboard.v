`timescale 1ps/1ps
module ps2_keyboard (
    input wire clk          ,
    input wire rst_n        ,
    input wire ps2_clk      ,
    input wire ps2_data     ,
    input wire host_valid_n , // host_valid_n = 0, host can receive data; if = 1, host not device_ready

    output wire [7:0] data   ,
    output reg  overflow     , // fifo overflow
    // output reg  device_valid , // data is valid, exclude press continue
    output reg  device_ready   // data is device_ready
);
    wire sample;
    reg [1:0] ps2_clk_sync;

    reg [7:0] fifo[0:7]; // data fifo
    reg [2:0] w_point, r_point; // fifo's w_r point

    // reg not_release; // key is not release

    reg [3:0] count;
    reg [10:0] r_data;
    reg [7:0] last_data; // use to calculate release

    // generate sample signal
    always @(posedge clk) begin
        ps2_clk_sync <= {ps2_clk_sync[0], ps2_clk};
    end

    assign sample = ps2_clk_sync[1] & ~ps2_clk_sync[0];

    always @(posedge clk) begin
        if (~rst_n) begin
            ps2_clk_sync <= 0;
            // not_release <= 0;
            count <= 0;
            w_point <= 0;
            r_point <= 0;
            overflow <= 0;
            device_ready <= 0;
        end else begin
            // data send
            if (device_ready & ~host_valid_n) begin
                r_point <= r_point + 3'b1;
                // fifo is empty
                if (w_point == r_point + 3'b1) device_ready <= 0;
            end
            // data receive
            if (sample) begin
                if (count == 4'd10) begin
                    if (^r_data[9:1] & ~r_data[0] & ps2_data) begin
                        fifo[w_point] <= r_data[8:1];
                        w_point <= w_point + 3'b1;
                        device_ready <= 1;
                        overflow <= overflow | (w_point + 3'b1 == r_point);
                    end
                    count <= 0;
                end else begin
                    r_data[count] <= ps2_data;
                    count <= count + 4'b1;
                end
            end
        end
    end

    assign data = fifo[r_point];
    
endmodule