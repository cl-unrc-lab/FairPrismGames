dtmc

module M

	x : [0..3];

	[] (x=0) -> (x'=1);
	[] (x=1) -> 0.5:(x'=0) + 0.3:(x'=2) + 0.2:(x'=3);
	[] (x=2) -> (x'=2);
	[] (x=3) -> (x'=3);

endmodule
