// Developed by Smetaniuk on 22.09.2022

#include "abs.h"

double myCos(double angle, double epsilon) {
	angle = angle * (3.142 / 180.0);
	double sum = 1.0, fact = 1.0, powAngle = 1, previous = 1.0;
	double cosx;
	int counter = 1;
	do {
		fact = 2 * (double)counter * (2 * (double)counter - 1);
		powAngle = angle * angle;
		cosx = -((previous * powAngle) / fact);
		sum += cosx;
		previous = cosx;
		counter++;
	} while (epsilon <= abs(cosx));
	return sum;
}