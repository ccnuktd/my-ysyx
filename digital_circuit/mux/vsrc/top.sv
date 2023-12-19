module top(
	input logic [1:0] Y,
	input logic [1:0] X0, X1, X2, X3,
	output logic [1:0] F	
);

	MuxKey #(4, 2, 2) u_mux2to4(F, Y, {
		2'b00, X0,
		2'b01, X1,
		2'b10, X2,
		2'b11, X3
	});

endmodule
