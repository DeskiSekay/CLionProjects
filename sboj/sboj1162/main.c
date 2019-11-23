
#include <stdio.h>

int main() {
    int n, m, a, b, c, d;
    scanf("%d", &n);
    a = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;
    d = n / 1000;
    //每一位数字加9,除10取余
    a += 9, b += 9, c += 9, d += 9;
    a = a % 10, b = b % 10, c = c % 10, d = d % 10;
    //千位和十位数字互换,百位各位数字互换

    printf("The encrypted number is %d%d%d%d", b, a, d, c);
    return 0;
}