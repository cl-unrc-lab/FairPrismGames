// Challenge 5 Model

dtmc

module dice

	x : [0..12] init 0;

	[] x=0 -> 0.5:(x'=1) + 0.5:(x'=2);
	[] x=1 -> 0.5:(x'=3) + 0.5:(x'=4);
	[] x=3 -> 0.5:(x'=1) + 0.5:(x'=7);
	[] x=7 -> (x'=7);
	[] x=4 -> 0.5:(x'=8) + 0.5:(x'=9);
	[] x=8 -> (x'=8);
	[] x=9 -> (x'=9);

	[] x=2 -> 0.5:(x'=5) + 0.5:(x'=6);
	[] x=5 -> 0.5:(x'=10) + 0.5:(x'=11);
	[] x=10 -> (x'=10);
	[] x=11 -> (x'=11);
	[] x=6 -> 0.5:(x'=2) + 0.5:(x'=12);
	[] x=12 -> (x'=12);

endmodule
