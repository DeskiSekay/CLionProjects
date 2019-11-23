#include <stdio.h>
#include <math.h>

#define PI 3.14

double jiecheng(double n) {
    double s = 1;
    for (int i = 1; i <= n; ++i) {
        s *= i;
    }
    return s;
}

int main() {
    int flag = 1;
    double x, hu, index = 1, sin = 0, xiang = 1;
    scanf("%lf", &x);
    hu = PI / 180.0 * x;

    for (int i = 0; i >= 0; ++i) {
        xiang = flag * pow(hu, index) / jiecheng(index);
        if (fabs(xiang) < 0.000001) break;
        sin += xiang;
        flag = -flag;
        index += 2;
    }

    printf("sin%.2lf的值为%.2lf", x, sin);
    return 0;
}