#include <stdio.h>

int main() {
    int m, n;
    scanf("%d,%d", &m, &n);
    int a, b, c, d;
    if (m > n) {
        int t;
        t = m;
        m = n;
        n = t;
    }
    for (int i = m; i <= n; ++i) {
        if (i < 1000) {
            a = i % 10;
            b = i / 10 % 10;
            c = i / 100;
            if (a * a * a + b * b * b + c * c * c == i)
                printf("%d\n", i);
        }
        if (i > 1000 && i < 10000) {
            a = i % 10;
            b = i / 10 % 10;
            c = i / 100 % 10;
            d = i / 1000;
            if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == i)
                printf("%d\n", i);
        }
    }
    return 0;
}