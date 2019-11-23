/*
 * 下列程序功能是计算所有三位正整数中，各个数位上数字之和是13的数的总和。
 * 修改程序，保证运行正确。
 */
#include <stdio.h>

int main(void) {
    int i, j, t;
    int g, s, b;
    long sum;
    sum = 0;    //数字总和,要从0加起                         /*$ERROR$*/
    for (i = 100; i <= 999; i++) {  //遍历所有的三位数
        j = i;  //j为当前的数
        t = 0;  //s为三位数的和

        g = i % 10;
        s = i / 10 % 10;
        b = i / 100;
        t = g + s + b;

        if (t == 13) {
            sum += i;
        }
    }
    printf("%ld\n", sum);
    return 0;
}