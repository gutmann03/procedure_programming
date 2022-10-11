template <class T> T maxVal(T x) {
	x = 1;
	while (x > 0) {
		x += 1;
	}
	return x - 1;
}