`timescale 1ps/1ps
module keyboard_sim(
    output reg done
);

/* parameter */
parameter [31:0] clock_period = 10;

/* ps2_keyboard interface signals */
reg clk,clrn;
// wire [7:0] data;
// wire ready,overflow;
wire kbd_clk, kbd_data;
// reg nextdata_n;
// wire device_valid;

ps2_keyboard_model model(
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data)
);

// ps2_keyboard inst(
//     .clk(clk),
//     .clrn(clrn),
//     .ps2_clk(kbd_clk),
//     .ps2_data(kbd_data),
//     .nextdata_n(nextdata_n),

//     .data(data),
//     .ready(ready),
//     .overflow(overflow)
// );

// ps2_keyboard inst (
//     .clk          (clk),
//     .rst_n        (clrn),
//     .ps2_clk      (kbd_clk),
//     .ps2_data     (kbd_data),
//     .host_valid_n (nextdata_n), // host_valid_n = 0, host can receive data; if = 1, host not device_ready

//     .data          (data),
//     .overflow      (overflow), // fifo overflow
//     // .device_valid  (device_valid), // data is valid, exclude press continue
//     .device_ready  (ready)  // data is device_ready
// );

wire [7:0] seg0, seg1, seg2, seg3, seg4, seg5;

top top_inst (
    .clk      (clk),
    .rst_n    (clrn),
    .ps2_clk  (kbd_clk),
    .ps2_data (kbd_data),

    .seg0     (seg0),
    .seg1     (seg1),
    .seg2     (seg2),
    .seg3     (seg3),
    .seg4     (seg4),
    .seg5     (seg5)
);

initial begin /* clock driver */
    clk = 0;
    forever
        #(clock_period/2) clk = ~clk;
end

initial begin
    clrn = 1'b0;  #20;
    clrn = 1'b1;  #20;
    model.kbd_sendcode(8'h1C); // press 'A'
    // #20 nextdata_n =1'b0; #20 nextdata_n =1'b1;//read data
    #20 model.kbd_sendcode(8'hF0); // break code
    // #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
    #20 model.kbd_sendcode(8'h1C); // release 'A'
    // #20 nextdata_n =1'b0; #20 nextdata_n =1'b1; //read data
    #20 model.kbd_sendcode(8'h1B); // press 'S'
    #20 model.kbd_sendcode(8'h1B); // keep pressing 'S'
    #20 model.kbd_sendcode(8'h1B); // keep pressing 'S'
    // #20 nextdata_n =1'b0;//read data
    #20 model.kbd_sendcode(8'hF0); // break code
    #20 model.kbd_sendcode(8'h1B); // release 'S'
    #200;
    done =1;
    $finish;
end

endmodule