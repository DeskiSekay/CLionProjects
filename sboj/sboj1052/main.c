#include <stdio.h>
#include <math.h>

int jiecheng(int n) {
    int a = 1;
    for (int i = 1; i <= n; ++i) {
        a *= i;
    }
    return a;
}

int main() {
    double x, sum = 1, xiang = 0, t;
    scanf("%lf", &x);

    for (int i = 1; i > 0; ++i) {
        xiang = pow(x, i) / jiecheng(i);
        if (xiang < 0) t = -xiang;
        else t = xiang;
        if (t < 0.00001) {
            break;
        }
        sum += xiang;
    }
    printf("%.4lf", sum);
    return 0;
}