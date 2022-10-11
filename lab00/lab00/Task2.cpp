// Developed by Smetaniuk on 22.09.2022

double myAbs(double value) {
    return value < 0.0 ? -value : value;
}

double mySin(double x, double epsilon) {
    double denominator, sinx;
    x = x * (3.142 / 180.0);
    double temp = x;
    sinx = x;
    int i = 1;
    do {
        denominator = 2 * i * (2 * i + 1);
        temp = -temp * x * x / denominator;
        sinx = sinx + temp;
        i = i + 1;
    } while (epsilon <= myAbs(temp));
    return sinx;
}