long switch_func(long x, long y) {
    long z = y;
    switch(x) {
        case 0:
            z = 5;
            break;
        case 1:
            z += 1;
        case 2:
            z -= 2;
            break;
        case 4:
        case 5:
            z *= 3;
            break;
        default:
            z = 1;
    }
    return z;
}