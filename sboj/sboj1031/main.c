#include <stdio.h>

int main() {
    int a, b, flag = 1;
    double sum = 0, eps, xiang, t = 0;
    a = b = 1;
    scanf("%lf", &eps);
    for (int i = 1; i >= 0; i += 3) {
        xiang = flag * 1.0 / i;
        //printf("%.2lf\n", xiang);
        if (xiang < 0) t = -xiang;
        if (xiang >= 0) t = xiang;

        sum += xiang;
        flag *= -1;
        if (t <= eps) break;
    }
    printf("sum=%.6lf", sum);
    return 0;
}