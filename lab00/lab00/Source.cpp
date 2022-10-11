// Developed by Smetaniuk on 22.09.2022

#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"

using namespace std;

int main() {
	// Task 1
	{
		cout << "TASK 1" << endl;
		cout << "Sum of k=0 => n by ((-1)^k * x^k) / k!" << endl;
		double x = 1.3;
		for (int n = 10, j = 0; j < 5; n += 5, j++) {
			cout << "mySum(" << n << ", " << x << ") = " << mySum(n, x) << endl;
			x += 1.8;
		}
	}

	cout << endl << "---------------------------------------------------------------------------------------------------" << endl << endl;

	// Task 2
	{
		cout << "TASK 2" << endl;
		cout << "Calculating y = sin(x)" << endl;
		double eps = 0.0000001;
		cout.precision(10);
		for (int j = 0; j < 5; j++) {
			double k = 15.0 * (j + 1);
			cout << "mySin(" << k << ", " << eps << ") = " << mySin(k, eps) << endl
				 << "      lib sin(" << k << ") = " << sin(k * (3.142 / 180.0)) << endl << endl;
		}
	}

	cout << endl << "---------------------------------------------------------------------------------------------------" << endl << endl;

	// Task 3
	{
		cout << "TASK 3" << endl;
		cout << "Dividing natural nambers" << endl;
		int divisible = 7, divisor = 8;
		for (int j = 0; j < 5; j++) {
			cout << "divideWithTheRemainder(" << divisible << ", " << divisor << ") = " << divideWithTheRemainder(divisible, divisor) << endl
				 << "                       " << divisible << " % " << divisor << " = " << divisible % divisor << endl << endl;
			divisible += j * 2 + 1;
			divisor += 1;
		}
	}

	cout << endl << "---------------------------------------------------------------------------------------------------" << endl << endl;

	// Task 4
	{
		cout << "TASK 4" << endl;
		cout << "Greater common divisor" << endl;
		
		cout << "     GCD_Loop(" << 25 << ", " << 35 << ") = " << GCD_Loop(25, 35) << endl;
		cout << "GCD_Recursive(" << 25 << ", " << 35 << ") = " << GCD_Recursive(25, 35) << endl << endl;

		cout << "     GCD_Loop(" << 14 << ", " << 21 << ") = " << GCD_Loop(14, 21) << endl;
		cout << "GCD_Recursive(" << 14 << ", " << 21 << ") = " << GCD_Recursive(14, 21) << endl << endl;

		cout << "     GCD_Loop(" << 13 << ", " << 7 << ") = " << GCD_Loop(13, 7) << endl;
		cout << "GCD_Recursive(" << 13 << ", " << 7 << ") = " << GCD_Recursive(13, 7) << endl << endl;
	}

	cout << endl << "---------------------------------------------------------------------------------------------------" << endl << endl;

	// Task 5
	{
		cout << "TASK 5" << endl;
		cout << "Chebyshev polinom" << endl;
		double x = 2;
		for (int n = 2, j = 0; j < 5; n ++, j++) {
			cout << "funcChebyshev(" << n << ", " << x << ") = " << funcChebyshev(n, x) << endl;
			x += 1.8;
		}
	}

	cout << endl << "---------------------------------------------------------------------------------------------------" << endl;
}