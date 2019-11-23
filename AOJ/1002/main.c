#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double delta, x1, x2;
    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / 2 * a;
    x2 = (-b - sqrt(delta)) / 2 * a;
    printf("%.2lf %.2lf", x1, x2);
    return 0;
}