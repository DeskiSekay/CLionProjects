#include <stdio.h>

int main() {
    /*int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double avg = (double) (a + b + c) / 3;
    printf("%.2lf", avg);
    return 0;*/
    int a, b;
    scanf("%d%d", &a, &b);
    printf("sum = %d difference = %d, product = %d, quotient = %d, remainder =%d", a + b, a - b, a * b, a / b, a % b);
}