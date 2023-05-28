#include <iostream>
using namespace std;

// ham tinh gia tri da thuc theo phuong phap Horner
double hornerRecursive(double coeffs[], int n, double x) {
    // Tr??ng h?p c? s?: ?a th?c b?c 0
    if (n == 0) {
        return coeffs[0];
    }

    // Tinh gia tri da thuc
    double prev = hornerRecursive(coeffs, n - 1, x);

    // Ap dung cong thuc tinh gia tri
    return prev * x + coeffs[n];
}

int main() {
    double coeffs[] = { -7, 5, -3, 2 };
    int degree = sizeof(coeffs) / sizeof(coeffs[0]) - 1;
    double x = 2.5;

    double result = hornerRecursive(coeffs, degree, x);

    cout << "Gia tri da thuc tai x = " << x << " la " << result << endl;

    return 0;
}
