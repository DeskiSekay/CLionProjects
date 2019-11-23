/*  学长是真鸡儿帅!!!!  */

#include <stdio.h>

double price = 2000000, rate = 1;

int main() {
    int n, k, m, money = 0;
    scanf("%d%d", &n, &k);
    n *= 10000;
    for (m = 1; m < 20; ++m) {
        rate = (double) (100 + k) / 100;
        //printf("\nrate=%.6lf", rate);
        //拥有的钱数
        money += n;
        //价格变化
        price *= rate;
        //printf("\n%.2lf", price);
        //结束条件
        if (money >= price) {
            printf("%d", m - 1);
            return 0;
        }
    }
    printf("Impossible");
    return 0;
}