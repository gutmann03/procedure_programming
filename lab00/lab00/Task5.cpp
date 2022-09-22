// Developed by Smetaniuk on 22.09.2022

double funcChebyshev(unsigned int n, double x) {
    double t1 = x;
    double t2 = 1.0;
    double tn = x;

    if (n == 0) {
        return t2;
    } else if (n == 1) {
        return t1;
    }

    for (unsigned int l = 2; l <= n; l++)
    {
        tn = (2.0 * x * t1) - t2;
        t2 = t1;
        t1 = tn;
    }
    return tn;
}