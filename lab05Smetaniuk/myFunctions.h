//
// Developed by Volodymyr Smetaniuk on 23.10.22.
//

#pragma once

#include <cstdlib>

void fillArray(double* coefficients, size_t size);
double Horner(double* coefficients, size_t size, double x);
double sum(double* coefficients, size_t size, int sign = 1);
