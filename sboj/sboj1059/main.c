/*斐波那契数列
 * f1+f2=f
 * 数据的调换是从f->f2->f1
 * 将三个变量的值按照f1->f2->f顺序变换
 * */
#include <stdio.h>

int main() {
    int f = 0, f1 = 1, f2 = 0, sum = 0, t, i;
    int n;
    scanf("%d", &n);
    for (i = 2; f <= n; ++i) {
        f = f1 + f2;
        sum += f;
        t = f2;
        f2 = f;
        f1 = t;
        //printf("%d ", f);
    }
    printf("%d", i - 2);
}