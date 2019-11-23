#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double s, area;
    scanf("%d,%d,%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        s = (double) (a + b + c) / 2.0;
        double temp = s * (s - a) * (s - b) * (s - c);
        area = sqrt(temp);
    }
    printf("%.3lf", area);
    return 0;
}