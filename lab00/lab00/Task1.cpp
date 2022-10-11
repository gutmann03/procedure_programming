// Developed by Smetaniuk on 22.09.2022

/*
Tn - element of sequence.
Tn=1 = -x/n * Tn-1
*/

double mySum(int n, double x) {
	double sn = 1.0, el = 1.0;
	for (unsigned int k = 1; k <= static_cast<unsigned int>(n); k++) {
		el = (- x / static_cast<double>(k)) * el;
		sn += el;
	}
	return sn;
}