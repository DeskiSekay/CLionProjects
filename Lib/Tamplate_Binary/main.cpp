#include <iostream>
#include <math.h>

using namespace std;

//适用于直接输出二进制
void binary_1(int n) {
    if (n / 2) {
        binary_1(n / 2);
    }
    cout << n % 2;
}

//使用于需要使用二进制
int binary_2(int n) {
    long long binaryNumber = 0;
    int temp, i = 1;
    while (n != 0) {
        temp = n % 2;
        n = n / 2;
        binaryNumber = binaryNumber + temp * i;
        i = i * 10;
    }
    return binaryNumber;
}

int decimal(long long n) {
    int decimalNumber = 0, i = 0, temp;
    while (n != 0) {
        temp = n % 10;
        n = n / 10;
        decimalNumber = decimalNumber + temp * pow(2, i);
        i++;
    }
    return decimalNumber;
}

int main() {
    int m;
    long long n;
    cin >> m;
    cin >> n;
    binary_1(m);
    cout << "\n" << binary_2(m) << endl;
    cout << decimal(n);

    return 0;
}