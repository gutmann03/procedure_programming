//
// Developed by Volodymyr Smetaniuk on 06.10.2022.
//

#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int main() {
    cout<<"Task 1. Check Gauss integral values from 0 to 10."<<endl;
    {
        const int iterations(10);
        const double epsilon(10e-7);
        for (int i = 0; i <= iterations; i++) {
            cout << "gauss(" << i << ", " << epsilon << ") = " << gauss((double)i, epsilon) << endl;
        }
    }

    cout << endl;

    {
        cout << "Take 2. Calculating exp as e^[x] * e^{x}, where [x] is whole part of power and {x} is fractional."
             << endl;
        const double epsilon(10e-7);
        double iter(-7.1);
        while (iter < 10.0) {
            cout << "          exp(" << iter << ") = " << exp(iter) << endl;
            cout << "powExp(" << iter << ", " << epsilon << ") = " << powExp(iter, epsilon) << endl << endl;
            iter += 0.4;
        }
    }

	return 0;
}