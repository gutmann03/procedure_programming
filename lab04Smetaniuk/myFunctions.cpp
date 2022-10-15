//
// Created by Volodymyr Smetaniuk on 15.10.22.
//

#include <cmath>

double ArithGeomAverage(double valueA, double valueB) {
    double previousValueA = valueA, previousValueB = valueB,
    An = sqrt(previousValueA * previousValueB), Bn = (previousValueA + previousValueB) / 2.0;

    while (An < previousValueB && An > previousValueA) {
        previousValueA = An;
        previousValueB = Bn;

        An = sqrt(previousValueA * previousValueB);
        Bn = (previousValueA + previousValueB) / 2.0;
    };

    return An;
}