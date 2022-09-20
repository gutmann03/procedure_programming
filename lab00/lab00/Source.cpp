#include <iostream>

double getEllByN(int k, int x) {
	double val = 1.0;
	for (int i = 1; i <= k; i++) {
		val *= -x / static_cast<double>(k);
	}
	return val;
}

double mySum(int n, int x) {
	double sn = 1.0;
	double sum = 0;
	for (unsigned int k = 1; k <= n; k++) {
		sum += getEllByN(k, x);
	}
	return sum;
}

int main() {
	std::cout << mySum(3, 2) << std::endl;
}