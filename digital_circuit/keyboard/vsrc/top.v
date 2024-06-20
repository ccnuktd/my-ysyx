module top(
    input clk      ,
    input rst_n    ,
    input ps2_clk  ,
    input ps2_data ,

    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5
);

reg host_valid_n;
wire overflow, device_ready;
reg [7:0] data;
reg [7:0] count; // counter

ps2_keyboard inst (
    .clk          (clk),
    .rst_n        (rst_n),
    .ps2_clk      (ps2_clk),
    .ps2_data     (ps2_data),
    .host_valid_n (host_valid_n), // host_valid_n = 0, host can receive data; if = 1, host not device_ready

    .data          (data),
    .overflow      (overflow), // fifo overflow
    .device_ready  (device_ready)  // data is device_ready
);

// construct host_valid_n
always @(posedge clk) begin
    if (~rst_n) host_valid_n <= 1;
    else begin
        host_valid_n <= ~device_ready;
    end
end

// recode data
reg [7:0] r_data;
always @(posedge clk) begin
    if (~rst_n) r_data <= 0;
    else if (~host_valid_n & device_ready) r_data <= data;
    else r_data <= r_data;
end

// FSM to detect long press
parameter [3:0] INIT = 4'd1, ERR = 4'd0, GET = 4'd2, RELEASE = 4'd4, FULL = 4'd8;
reg [3:0] state, next_state;


always @(posedge clk) begin
    if (~rst_n) state <= INIT;
    else if (~host_valid_n & device_ready) state <= next_state;
    else state <= state;
end

always @(*) begin
    case(state)
        ERR: begin
            if (data == 8'hF0) next_state = ERR;
            else next_state = GET;
        end
        INIT: begin
            if (data == 8'hF0) next_state = ERR;
            else next_state = GET;
        end
        GET: begin
            if (data == 8'hF0) next_state = RELEASE;
            else next_state = FULL;
        end
        RELEASE: begin
            if (data == 8'hF0) next_state = ERR;
            else next_state = INIT;
        end
        FULL: begin
            if (data == 8'hF0) next_state = RELEASE;
            else next_state = FULL;
        end
        default: next_state = ERR;
    endcase
end

always @(posedge clk) begin
    if (~rst_n) count <= 0;
    else if (~host_valid_n & (next_state == GET | next_state == RELEASE) & device_ready)  count <= count + 8'b1;
    else count <= count;
end

// display
reg [7:0] ascii_data, key_data;

lookup_table lookup_table_inst (
    .data         (r_data),
    .ascii_data   (ascii_data),
    .key_data     (key_data)
);

wire ena = (state == GET | state == FULL);

seg_sw inst0(
    .ena          (ena),
    .data         (key_data[3:0]),
    .seg          (seg0)
);

seg_sw inst1(
    .ena          (ena),
    .data         (key_data[7:4]),
    .seg          (seg1)
);

seg_sw inst2(
    .ena          (ena),
    .data         (ascii_data[3:0]),
    .seg          (seg2)
);

seg_sw inst3(
    .ena          (ena),
    .data         (ascii_data[7:4]),
    .seg          (seg3)
);

seg_sw inst4(
    .ena          (1'b1),
    .data         (count[3:0]),
    .seg          (seg4)
);

seg_sw inst5(
    .ena          (1'b1),
    .data         (count[7:4]),
    .seg          (seg5)
);
endmodule