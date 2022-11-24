//
// Developed by Volodymyr Smetaniuk on 24.11.2022.
//

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

bool checkEndsOfLine(double aY, double bY) {
    if ((aY > 0 && bY > 0) || (aY < 0 && bY < 0)) {
        return false;
    }
    return true;
}

double dichotomy(double (*f)(double), double a, double b, const double eps) {
    // check for right values of function.
    assert(checkEndsOfLine(f(a), f(b)));

    bool risingFunc = f(a) < f(b);
    double middle = (a + b) / 2;
    double result = f(middle);

    while(eps < abs(result)) {
        if (risingFunc) {
            if (result < 0) {
                a = middle;
            } else {
                b = middle;
            }
        } else {
            if (result < 0) {
                b = middle;
            } else {
                a = middle;
            }
        }
        middle = (a + b) / 2;
        result = f(middle);
    }

    return middle;
}

double func1(double x){
    return sin(x) - x;
}

double func2(double x){
    return sin(x);
}

double func3(double x){
    return log(x) - 1;
}

double func4(double x){
    return exp(x) - 2 + x;
}

int main() {
    const double eps = 1e-6;
    {
        cout << "Task 1. Func sin(x) = x, [-1,1]." << endl;
        const double a(-1), b(1);
        cout << "Answer is: " << dichotomy(func1, a, b, eps) << endl;
    }
    cout << endl;
    {
        cout << "Task 2. Func sin(x) = 0, [PI-1, PI]." << endl;
        const double PI = 3.14159265359;
        const double a(PI-1.), b(PI);
        cout << "Answer is: " << dichotomy(func2, a, b, eps) << endl;
    }
    cout << endl;
    {
        cout << "Task 3. Func ln(x) = 1, [2,3]." << endl;
        const double a(2), b(3);
        cout << "Answer is: " << dichotomy(func3, a, b, eps) << endl;
    }
    cout << endl;
    {
        cout << "Task 4. Func exp(x) = 2-x, [0,2]." << endl;
        const double a(0), b(2);
        cout << "Answer is: " << dichotomy(func4, a, b, eps) << endl;
    }
    return 0;
}
