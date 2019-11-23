#include <stdio.h>

int main() {
    int a, b, min=0, max=0;
    scanf("%d%d", &a, &b);
    for (int i = 1; i < a; ++i) {
        if (a % i == 0 && b % i == 0) {
            max = i;
        }

    }
    if (a < b) {
        int t;
        t = a;
        a = b;
        b = t;
    }
    for (int j = b; j >= 0; ++j) {
        if (j % a == 0 && j % b == 0) {
            min = j;
            break;
        }
    }
    printf("最小公倍数为%d, 最大公约数为%d", min, max);
    return 0;
}