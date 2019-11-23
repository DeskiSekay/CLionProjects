#include <stdio.h>
#include <math.h>

int main() {
    int a, n, sum, b = 0;
    sum = 0;
    scanf("%d%d", &a, &n);
    for (int i = 0; i <= n; i++) {
        sum = sum + b;
        b = b * 10 + a;
    }
    printf("s = %d", sum);
    return 0;
}