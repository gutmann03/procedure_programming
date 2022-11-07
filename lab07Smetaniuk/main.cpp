//
// Developed by Volodymyr Smetaniuk on 07.11.2022.
//

#include <iostream>
using namespace std;

// This is 1x2 vector.
struct Vector {
    int _1, _2;
};

// This is 2x2 matrix.
struct Matrix {
    int _11, _12, _21, _22;
};

// Multiplying matrix with matrix.
Matrix matrixMul(Matrix x, Matrix y) {
    return Matrix {
            x._11*y._11 + x._12*y._21,
            x._11*y._12 + x._12*y._22,
            x._21*y._11 + x._22*y._21,
            x._21*y._12 + x._22*y._22
    };
}

// Multiplying matrix with vector.
Vector matrixMul(Matrix x, Vector y) {
    return Vector {
            x._11*y._1 + x._12*y._2,
            x._21*y._1 + x._22*y._2
    };
}

// Used quickPow as in previous lab work but with Matrix.
Matrix matrixQuickPower(Matrix x, int n) {
    Matrix temp = x,
    val = {1, 0,
           0, 1};

    while (n) {
        if (n % 2)
            val = matrixMul(val, temp);
        n = n >> 1;
        temp = matrixMul(temp, temp);
    }

    return val;
}

int main() {
    const Matrix START_MATRIX = {1, 1, 1, 0};
    const Vector START_VECTOR = {1, 0};

    cout << "start matrix:" << endl
            << "| " << START_MATRIX._11 << "\t" << START_MATRIX._12 << " |" << endl
            << "| " << START_MATRIX._21 << "\t" << START_MATRIX._22 << " |" << endl << endl;

    cout << "start vector:" << endl
         << "( " << START_VECTOR._1 << " " << START_VECTOR._2 << " )" << endl << endl;

    for (int i = 3; i < 22; ++i) {
        cout << "n = " << i << endl;
        int n = i-1;
        cout << "n-1 = " << n << endl;

        Vector result = matrixMul(matrixQuickPower(START_MATRIX, n), START_VECTOR);
        cout << "fib n-1: " << result._2 << endl << "fib n: " << result._1 << endl << endl;
    }

    return 0;
}
