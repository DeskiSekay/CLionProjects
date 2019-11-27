#include <stdio.h>

int main() {
    int x, n, day = 0, t = 0, temp = 0;

    scanf("%d%d", &x, &n);

    if (x <= 5) {
        t = 6 - x;
        n = n - 8 + x;
    }
    if (x == 6) n -= 2;
    if (x == 7) n -= 1;

    if (n < 7) {
        if (n == 6 || n == 7) day += 5;
        else day += n;
    } else {
        temp = n / 7;
        int num = n % 7;
        day = temp * 5 + t + num;
    }
    printf("%d", day);

    return 0;
}