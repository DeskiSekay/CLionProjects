#include<stdio.h>

int main(void) {
    double r, circumference, area, pi = 3.14;
    scanf("%lf", &r);
    circumference = 2 * pi * r;
    area = pi * r * r;
    printf("circumference=%.2lf area=%.2lf", circumference, area);
    return 0;
}