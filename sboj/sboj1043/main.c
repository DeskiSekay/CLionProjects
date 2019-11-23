#include <stdio.h>

int main() {
    int m, n;
    double sum = 0, i;

    scanf("%d%d", &m, &n);
    if (m > n) {
        int t;
        t = m;
        m = n;
        n = t;
    }
    for (i = m; i <= n; i += 1.0) {
        sum += i * i + 1.0 / i;
    }
    printf("sum = %.6lf", sum);
    return 0;
}