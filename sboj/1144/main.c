#include <stdio.h>

long long pow(int a, int b) {
    long long result = a;
    for (int i = 2; i <= b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    printf("%lld", pow(2, 3));
    return 0;
}