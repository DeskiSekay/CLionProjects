/*
#include <stdio.h>
#include <math.h>

int main() {
    int m, n, num = 0;
    int sum = 0;
    int a = 0, b = 0;

    scanf("%d%d", &m, &n);
    if ((n >= m && m >= 2) && (m >= 1 && n >= m && n <= 500)) {
        for (int i = m; i <= n; ++i) {
            //printf("\n%d\t", i);
            for (int j = 2; j <= sqrt(i); ++j) {
                if (i % j == 0) {
                    a = 0;
                    break;
                } else {
                    a = 1;
                }
            }
            if (a == 1) {
                num++;
                sum += i;
            }
        }
    }

    printf("%d %d", num, sum);
    return 0;
}*/
