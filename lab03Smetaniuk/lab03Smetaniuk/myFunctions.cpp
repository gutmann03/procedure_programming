//
// Developed by Volodymyr Smetaniuk on 06.10.2022.
//

#include <cmath>

double gauss(double x, double eps) {
	double result(x), temp(x);
	int counter(1), fact(1);

	while (eps < fabs(temp)) {
		temp *= ((-1) * x * x * counter) / ((double)fact * (double)(counter + 2));
		fact += 1;
		counter += 2;
		result += temp;
	}

	return result;
}