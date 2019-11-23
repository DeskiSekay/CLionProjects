#include <stdio.h>
#include <math.h>

int count = 0;

int reverse(int number);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}

int reverse(int number) {
    int flag = 0;
    if (number < 0) {
        number = -number;
        flag = 1;
    }
    int i, x;
    int sum = 0;
    for (int j = number; j >= 1; j /= 10) {
        count++;
    }
    int a[10] = {};
    //int b[10] = {};
    for (i = 0; i < count; ++i) {
        a[i] = number % 10;

        number /= 10;

    }

    x = pow(10, count);
    for (int l = 0; l < count; ++l) {
        x /= 10;
        sum += a[l] * x;

    }
    if (flag == 1) {
        sum = -sum;
    }
    return sum;
}
