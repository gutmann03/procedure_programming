// Developed by Smetaniuk on 22.09.2022

#include "abs.h"

double myLn(double value, double eps) {
	double temp = -1.0, counter = 1.0, summ = 0.0, lnx = 1.0;
	while (abs(lnx) > eps) {
		temp *= -value;
		lnx = temp / counter;
		summ += lnx;
		counter += 1;
	} 
	return summ;
}