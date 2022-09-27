// Developed by Smetaniuk on 22.09.2022

#include <iostream>
#include <cmath>
#include "cos.h"
#include "pow.h"
#include "ln.h"



using namespace std;

int main() {
	cout.precision(15);
	cout << "y = cos(x)" << endl;
	{
		cout << "-inf < x < inf" << endl;
		double eps = 0.00000001;
		for (double k = -180.0; k < 180; k += 30) {
			cout << "myCos(" << k << ", "<< eps << ") = " << myCos(k, eps) << endl;
			cout << "         cos(" << k << ") = " << cos(k * 3.1415 / 180.0) << endl << endl;
		}
	}

	cout << endl << "-------------------------------------------------------------------" << endl << endl;

	cout << "y = k^x" << endl;
	{
		cout << "-inf < k < inf, -inf < x < inf (x from N)" << endl;
		for (double k = -15.0; k <= 45.0; k += 15.0) {
			for (int x = -5; x < 3; x++) {
				cout << "myPow(" << k << ", " << x << ") = " << myPow(k, x) << endl;
				cout << "  pow(" << k << ", " << x << ") = " << pow(k, x) << endl << endl;
			}
		}
		
	}

	cout << endl << "-------------------------------------------------------------------" << endl << endl;

	cout << "y = ln(x + 1)" << endl;
	{
		cout << "-1 < x < 1" << endl;
		double eps = 0.0000000001;
		for (double k = -0.99; k < 1; k += 0.12) {
			cout << "myLn(" << k << ", " << eps << ") = " << myLn(k, eps) << endl;
			cout << "    log(" << k << " + 1" << ") = " << log(k + 1.0) << endl << endl;
		}
	}
}