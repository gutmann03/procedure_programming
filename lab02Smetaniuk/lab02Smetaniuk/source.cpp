//
// Created by Volodymyr Smetaniuk on 02.10.2022.
//

#include <iostream>
#include "myFunctions.h"
using namespace std;


int main() {
    cout << "Task 1. Iterable Power func and QuickPower func with seps counting." << endl;
    {
        double value = -15.3;
        while (value < 43.2) {
            for (int power = 0; power <= 6; power++) {
                int steps = 0;
                cout << "   myPower(" << value << ", " << power << ") = " << myPower(value, power, steps)
                     << "\tsteps number: " << steps << endl;
                steps = 0;
                cout << "myQuickPow(" << value << ", " << power << ") = " << myQuickPow(value, power, steps)
                     << "\tsteps number: " << steps << endl;
                cout << endl;
            }
            cout << endl;
            value += 7.5;
        }
    }

    cout << endl << endl;
    cout << "Task 2. Iterable Power func and Recursive Power func" << endl;
    {
        double value = -15.3;
        while (value < 43.2) {
            for (int power = 0; power <= 6; power++) {
                int steps = 0;
                cout << " myPower(" << value << ", " << power << ") = " << myPower(value, power, steps)
                     << "\tsteps number: " << steps << endl;
                steps = 0;
                cout << "myRecPow(" << value << ", " << power << ") = " << myRecPow(value, power, steps)
                     << "\tsteps number: " << steps << endl;
                cout << endl;
            }
            cout << endl;
            value += 7.5;
        }
    }
    cout << "Conclusion: iterable power takes as many steps as recursive, but takes less memory.\nrecursive method might be faster then iterable.";

    return 0;
}
