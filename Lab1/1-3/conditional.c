/*
 * conditional(x, y, z): Return z if x is 0, return y otherwise.
 * - Ex) conditional(2, 4, 5) = 4, conditional(0, 1, 2) = 2
 */
int conditional(int x, int y, int z) {
	int a = x >> 31;
	x = (a ^ x) + ~a + 1;
	x = ~x + 1;
	x >>= 31;
	return ((~x) & z) + (x & y);
}
