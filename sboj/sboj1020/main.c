/*
#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    double a, b, c;

    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);


    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        double L = a + b + c;//计算周长
        double s;
        //海伦公式
        s = L / 2;
        double A = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("L=%.2f, A=%.2f", L, A);
    } else {
        printf("Impossible");
    }

    return 0;
}*/
#include<stdio.h>
#include<math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double L, A, a, b, c, p;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    /*  if (a + b < c || a + c < b || b + c < a) {

      }*/
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        L = a + b + c;
        p = L / 2;
        A = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("L=%.2lf, A=%.2lf", L, A);
    } else printf("Impossible");

    return 0;
}
