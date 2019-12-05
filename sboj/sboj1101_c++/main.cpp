#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double jc(double n) {
    double x = 1;
    for (int i = 1; i <= n; ++i) {
        x *= i;
    }
    return x;
}

double result(double a, double b) {
    double sum = 0, base = 1, flag = 1, index = 0;
    while (fabs(base) >= a) {
        base = flag * pow(b, index) / jc(index);
        sum += base;
        index += 2;
        flag = -flag;
    }
    return sum;
}

int main() {
    double e, x;
    cin >> e >> x;
    cout << "cos(" << setw(2) << x << ") = " << setw(6) << result(e, x);
    return 0;
}