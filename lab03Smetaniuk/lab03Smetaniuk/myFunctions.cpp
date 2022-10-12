//
// Developed by Volodymyr Smetaniuk on 06.10.2022.
//

#include <cmath>

const double EULER_NUMBER = 2.7182818284590452354;

double gauss(double x, double eps) {
    double result(x), temp(x);
    int counter(1), fact(1);

    while (eps < fabs(temp)) {
        temp *= ((-1) * x * x * counter) / ((double)fact * (double)(counter + 2));
        fact += 1;
        counter += 2;
        result += temp;
    }

    return result;
}

double powExpFract(double power, double eps) {
    double result(1), fact(1), temp(1);

    if (power == 0.0) {
        return result;
    }

    while(temp > eps) {
        temp *= power / fact;
        fact += 1.0;
        result += temp;
    }

    return result;
}

double powExpWhole(int power) {
    double result(1);
    for (int i = 1; i <= power; i++) {
        result *= EULER_NUMBER;
    }

    return result;
}

double powExp(double power, double eps) {
    bool isNegative = power < 0;
    power = fabs(power);
    int wholePart = static_cast<int>(power);
    double fractionalPart = power - static_cast<double>(wholePart);
    double result(1);

    if (power == 0.0) {
        return result;
    }

    result = powExpWhole(wholePart) * powExpFract(fractionalPart, eps);

    return isNegative ? 1 / result : result;

}