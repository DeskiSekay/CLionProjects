#include <stdio.h>
#include <math.h>

int main() {
    double e, pi, xiang, gg = 0;
    int flag = 1;
    scanf("%lf", &e);
    for (int i = 1; i >= 0; i += 2) {
        xiang = 1.0 / i * flag;
        flag = -flag;
        gg += xiang;
        if (fabs(xiang) <= e) break;
    }
    pi = 4 * gg;
    printf("近似值为%.6lf", pi);
    return 0;
}