#include <stdio.h>

int main() {
    int m, n, min, max, i;
    scanf("%d%d", &m, &n);
    if (m > n) {
        int t;
        t = m;
        m = n;
        n = t;
    }
    for (i = 1; i <= m; ++i) {
        if (m % i == 0 && n % i == 0) max = i;
    }
    for (int j = n; j > 0; ++j) {
        if (j % m == 0 && j % n == 0) {
            min = j;
            break;
        }
    }
    printf("最大公约数为%d, 最小公倍数为%d", max, min);
    return 0;
}