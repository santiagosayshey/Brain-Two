CHIP Or8Way {
    IN in[8];
    OUT out;

    PARTS:
    Or(a=in[0], b=in[1], out=out1);
    // More Or chips to combine in[2] through in[7]
    Or(a=out1, b=out2, out=out);
}
