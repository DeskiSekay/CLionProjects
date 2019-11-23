#include <stdio.h>

int a, b, c, d;

int narcissistic(int number);

void PrintN(int m, int n);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    //if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    //if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
    return 0;
}

int narcissistic(int number) {
    if (number >= 1000 && number <= 10000) {
        d = number % 10;
        c = number / 10 % 10;
        b = number / 100 % 10;
        a = number / 1000;
        if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == number) {
            return 1;
        }
    } else if (number > 100 && number < 1000) {
        c = number % 10;
        b = number / 10 % 10;
        a = number / 100;
        if (a * a * a + b * b * b + c * c * c == number) {
            return 1;
        }
    } else {
        return 0;
    }
}

void PrintN(int m, int n) {
    for (int i = m; i <= n; ++i) {
        if (narcissistic(i) == 1) {
            printf("%d is a narcissistic number\n", i);
        }
    }
}
