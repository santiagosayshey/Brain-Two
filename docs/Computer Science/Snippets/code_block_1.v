CHIP And16 {
    IN a[16], b[16];
    OUT out[16];

    PARTS:
    And(a=a[0], b=b[0], out=out[0]);
    // Repeat for a[1] through a[15] and b[1] through b[15]
}
