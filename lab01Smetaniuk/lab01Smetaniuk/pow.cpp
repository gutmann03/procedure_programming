// Developed by Smetaniuk on 23.09.2022

double myPow(double value, int n) {
	double temp = 1.0;
	if (n >= 0) {
		for (int i = 1; i <= n; i++) {
			temp *= value;
		}
	} else {
		for (int i = -1; i >= n; i--) {
			temp /= value;
		}
	}
	return temp;
}