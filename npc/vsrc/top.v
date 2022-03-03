module top(
	input a,
	input b,
	output f
);
	assign f = a ^ b;

	initial begin
		if ($test$plusargs("trace") != 0) begin
			$dumpfile("logs/vlt_dump.vcd");
			$dumpvars();
		end
	end

endmodule
