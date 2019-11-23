
#include <stdio.h>

int a, b, c, d, count = 0;

int narcissistic(int number);

void PrintN(int m, int n);

int main() {
    int m, n;
    scanf("%d,%d", &m, &n);
    PrintN(m, n);
    return 0;
}

int narcissistic(int number) {
    if (number >= 1000 && number <= 10000) {
        d = number % 10;
        c = number / 10 % 10;
        b = number / 100 % 10;
        a = number / 1000;
        if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == number) {
            count = 1;
            return 1;
        }
    } else if (number > 100 && number < 1000) {
        c = number % 10;
        b = number / 10 % 10;
        a = number / 100;
        if (a * a * a + b * b * b + c * c * c == number) {
            count = 1;
            return 1;
        }
    } else {
        count = 0;
        return 0;
    }
}

void PrintN(int m, int n) {
    int t = 0;
    for (int i = m; i <= n; ++i) {
        if (narcissistic(i) == 1) {
            printf("%d", i);
            count = 1;
        }
    }
    if (count != 0) {
        printf("\n");

    }
}

