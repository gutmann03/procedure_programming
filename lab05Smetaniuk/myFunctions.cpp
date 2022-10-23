//
// Developed by Volodymyr Smetaniuk on 23.10.22.
//

#include <cassert>
#include <cstdlib>
#include <ctime>

void fillArray(double* coefficients, size_t size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
        coefficients[i] = (double)rand() * 0.000001;
    }
    return;
}

double sum(double* coefficients, size_t size, int sign) {
    double sum = 0;
    bool isNegativeFirst = size % 2 == 0;
    for(size_t i = 0; i < size; i++) {
        sum += isNegativeFirst ? sign * coefficients[i] : coefficients[i];
        isNegativeFirst = !isNegativeFirst;
    }
    return sum;
}

double Horner(double* coefficients, size_t size, double x) {
    double result = coefficients[0];
    for (int i = 1; i < size; ++i) result = result * x + coefficients[i];
    assert(((x == 1) || (x == -1)) ? (result == sum(coefficients, size, x)) : true);
    return result;
}
