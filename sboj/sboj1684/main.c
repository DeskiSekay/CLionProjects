#include <stdio.h>

int main() {
    int n;
    double jc = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        jc *= i;
    }
    printf("%.0lf", jc);
    return 0;
}