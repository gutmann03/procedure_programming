#include <iostream>
//#include "maxT.h"
using namespace std;

template <class T> T maxVal(T x) {
	x = 1;
	while (x > 0) {
		x += 1;
	}
	return x - 1;
}

int main() {
	int i(0);
	long long l(0);
	float f(0);
	double d(0);
	cout << "\n maxVal(int) = " << maxVal(i);
	cout << "\n maxVal(long) = " << maxVal(l);
	cout << "\n maxVal(float) = " << maxVal(f);
	cout << "\n maxVal(double) = " << maxVal(d);
	return 0;
}