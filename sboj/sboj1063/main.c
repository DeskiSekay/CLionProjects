/*
 * 下列程序功能是统计所有三位正整数中个位数和十位数之和与百位数的积是28的数的个数。
 * 例如259满足条件。修改程序，保证运行正确。
 */

#include <stdio.h>

int main(void) {
    int i, g, s, b, count;
    count = 0;                          /*$ERROR$*/
    for (i = 100; i <= 999; i++) {
        g = i % 10;
        s = i / 10 % 10;
        b = i / 100;                       /*$ERROR$*/
        if ((g + s) * b == 28)
            count += 1;                   /*$ERROR$*/
    }
    printf("%d\n", count);
    return 0;
}