#include <stdio.h>

int func(int n) {
    int y;
    if (n > 0) y = 2 * n + 1;
    if (n == 0) y = 0;
    if (n < 0) y = 1 - 2 * n;
    return y;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
    return 0;
}