//
// Created by Volodymyr Smetaniuk on 02.10.2022.
//

double myPower(double value, int power, int& steps) {
    double result = 1.0;
    for (int i = 1; i <= power; ++i) {
        result *= value;
        steps++;
    }
    return result;
}

double myRecPow(double value, int power, int& steps) {
    steps++;
    if (power == 0) {
        return 1.0;
    }
    if (power == 1) {
        return value;
    }
    return value * myRecPow(value, power - 1, steps);
}

double myQuickPow(double value, int power, int& steps) {
    double temp = value, ans = 1;
    while (power) {
        if (power % 2) ans = ans * temp;
        power = power >> 1;
        temp = temp * temp;
        steps++;
    }
    return ans;
}