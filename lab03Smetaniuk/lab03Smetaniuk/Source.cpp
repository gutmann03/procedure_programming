//
// Developed by Volodymyr Smetaniuk on 06.10.2022.
//

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
	const int iterations(10);
	const double epsilon(10e-7);
	for (int i = 0; i < iterations; i++) {
		cout << "gauss(" << i << ", " << epsilon << ") = " << gauss((double)i, epsilon) << endl;
	}

	return 0;
}