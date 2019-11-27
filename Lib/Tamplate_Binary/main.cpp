#include <iostream>
#include <math.h>

using namespace std;

void binary(int n) {
    if (n / 2) {
        binary(n / 2);
    }
    cout << n % 2;
}

int decimal(long long n) {
    int decimalNumber = 0, i = 0, temp;
    while (n != 0) {
        temp = n % 10;
        n = n / 10;
        decimalNumber = temp * pow(2, 1);
        i++;
    }
    return decimalNumber;
}

int main() {
    int m;
    long long n;
    cin >> m;
    cin >> n;
    binary(m);
    cout << "\n" << decimal(n);

    return 0;
}