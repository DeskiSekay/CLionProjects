#include <stdio.h>

int main() {
    double kw, cost;//自变量,可以随意取名字
    scanf("%lf", &kw);
    if (kw < 0) {
        printf("Invalid Value!");
    } else if (kw >= 0 && kw <= 50) {
        cost = kw * 0.53;
    } else if (kw > 50) {
        cost = (kw - 50) * 0.58 + 50 * 0.53;
    }
    printf("cost = %.2f", cost);
    return 0;
}