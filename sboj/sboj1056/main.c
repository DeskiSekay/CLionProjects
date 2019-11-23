#include <stdio.h>
#include <math.h>

int main() {
    double h, n;
    double ha = 0, hl = 0;
    scanf("%lf%lf", &h, &n);
    hl = h * pow(0.5, n);
    int t = h;
    for (int i = 1; i < n; i++) {
        ha += h;
        h *= 0.5;

    }
    ha += t;
    printf("%.1lf %.1lf", ha, hl);
    return 0;
}