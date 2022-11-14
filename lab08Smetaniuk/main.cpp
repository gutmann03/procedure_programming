//
// developed by Volodymyr Smetaniuk on 14.11.22.
//

#include <iostream>
using namespace std;

void zet(double &y, double &x, unsigned int &k, unsigned int &steps){
    if (k>0){
        if (k%2==1){
            y*=x; k--;
        }
        else{
            x*=x; k/=2;
        }
        zet(y,x,k, ++steps);
    }
}

double power(double x, unsigned int n, unsigned int &steps){
    double y = 1;
    zet(y, x, n, steps);
    return y;
}

void fib(double &f1, double &f2, unsigned int n, unsigned int &steps){
    if (n >= 2){
        double f = f2; f2 += f1; f1 = f;
        fib(f1, f2, n-1, ++steps);
    }
}

double Fibonaci(unsigned int n, unsigned int &steps){
    double f0 = 0, f1 = 1;
    switch(n){
        case 0:
            return f0;break;
        case 1:
            return f1; break;
        default:
            fib(f0, f1, n, steps);
            return f1;
    }
}

// Code from lab07.
// This is 1x2 vector.
struct Vector {
    double _1, _2;
};

// This is 2x2 matrix.
struct Matrix {
    double _11, _12, _21, _22;
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
void quickFib(Matrix &start, Matrix &x, unsigned int &n, unsigned int &steps) {
    if (n > 0){
        if (n % 2 == 1){
            start = matrixMul(start, x);
            n--;
        }
        else{
            x = matrixMul(x, x);
            n /= 2;
        }
        quickFib(start, x, n, ++steps);
    }
}

double QuickRecursiveMatrixFibonaci(unsigned int n, unsigned int &steps){
    const Vector START_VECTOR = {1., 0.};
    switch(n){
        case 0:
            return START_VECTOR._2;
        case 1:
            return START_VECTOR._1;
        default:
            Matrix matrix = {1., 1.,
                             1., 0.};
            Matrix start = {1., 0.,
                            0., 1.};
            unsigned int i = n-1;
            quickFib(start, matrix, i, steps);
            Vector result = matrixMul(start, START_VECTOR);
            return result._1;
    }

}

int main() {
    {
        cout << "Task 1. Recursive Power." << endl;
        for(unsigned int i = 3; i <= 9; i++){
            for(int k = 2; k <= 5; k++){
                unsigned int steps = 0;
                cout << "Power(" << k << ", " << i << ") = " << power((double)k, i, steps) << endl;
                cout << "Steps: " << steps << endl << endl;
            }
            cout << endl;
        }
    }

    cout << endl;

    {
        cout << "Task 2. Recursive Fibonaci." << endl;
        for(unsigned int i = 0; i <= 20; i++){
            unsigned int steps = 0;
            cout << "Fibonaci(" << i << ") = " << Fibonaci(i, steps) << endl;
            cout << "Steps: " << steps << endl;
            cout << endl;
        }
    }

    cout<<endl;

    {
        cout << "Task 3. Quick power for fibonaci in matrix way." << endl;
        for (int i = 0; i <= 20; ++i) {
            unsigned int steps = 0;
            cout << "QuickRecursiveMatrixFibonaci(" << i << ") = " << QuickRecursiveMatrixFibonaci(i, steps) << endl;
            cout << "Steps: " << steps << endl << endl;
        }
    }

    return 0;
}
