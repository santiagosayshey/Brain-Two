	PARTS:
		Not(in=a, out=na);
		Not(in=b, out=nb);
		And(a=na, b=b, out=c);
		And(a=a, b=no, out=d);
		Or(a=c, b=d, out=out);
