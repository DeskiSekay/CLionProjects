/*

#include<stdio.h>

int main(void) {
    double i, N, flag = 1;
    double sum = 0;
    scanf("%lf", &N);
    for (i = 1; i <= N; i++) {
        sum += (flag) * i / (2 * i - 1);
        flag = (-1) * flag;
    }
    printf("%.3lf", sum);
    return 0;

}
*/


#include <stdio.h>

int main() {
    double i, n, flag = 1;
    double sum = 0;
    scanf("%lf", &n);
    for (i = 1; i <= n; i++) {
        sum += (flag * 1.0 * i) / (2 * i - 1);
        flag = -flag;
    }
    printf("%.3lf", sum);
    return 0;
}