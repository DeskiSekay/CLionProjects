#include <iostream>
#include <iomanip>

using namespace std;

long long poww(int a, int b) {
    long long base = a, index = b, result = 1;
    while (index != 0) {
        if (index & 1 != 0) {
            result = result * base;
        }
        base = base * base;
        index >>= 1;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << poww(a, b) << endl;
    return 0;
}