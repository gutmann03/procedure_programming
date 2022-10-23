//
// Developed by Volodymyr Smetaniuk on 23.10.22.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "myFunctions.h"
using namespace std;

int main() {
    cout << "Task: check Horner function." << endl;
    {
        const size_t MAX_VALUE = 101;
        for (size_t size = 1; size <= MAX_VALUE; size += 10) {
            double value((double)rand() * 0.00000001);
            srand(time(NULL));
            double* coefficients = new double[size];
            fillArray(coefficients, size);
            cout << "Horner with coefficients array size = " << size << ", x = " << value << ": " << Horner(coefficients, size, value) << endl;
        }
    }

    cout << endl <<
    "First way to check Horner function is to set array\nof digits and take x = 10. So we'll receive\n"
    "array 'glued' to one number which is {n[0] n[1] ... n[k]}.\nExample:\n"
    "array = [1, 2, 3, 4, 5, 6, 7], x = 10: Horner() => 1234567" << endl;

    cout << endl <<
    "Another way tho check Horner function is to set array all of 0 and use any x.\n"
    "Anyway we must receive 0" << endl;
    return 0;
}
