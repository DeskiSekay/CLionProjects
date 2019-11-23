#include <stdio.h>

int main() {
    double a, sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {//项数,一共n项
        //printf("no.%d\n", i);
        a = 1;
        for (int j = 1; j <= i; ++j) {//每一项的阶乘
            a *= j;
            //printf("a=%.0lf\n", a);
        }
        sum += a;
    }
    printf("%.0lf", sum);
    return 0;
}