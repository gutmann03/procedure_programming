//
// Developed by Volodymyr Smetaniuk on 16.10.22.
//

#include <iostream>
#include "myFunctions.h"

using namespace std;

int main() {
    cout << "Task 1. Arithmetic and geometric average of two real numbers." << endl;
    double valA(1.0), valB(2.0);
    while (valB < 21.0) {
        cout << "AGV(" << valA << ", " << valB << ") = " << ArithGeomAverage(valA, valB) << endl;
        valA += 1.3;
        valB += 2.1;
    }
    return 0;
}
