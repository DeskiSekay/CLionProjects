/*
输出100以内，能被3整除且个位数为6的所有整数之和。请在空白处填空。
*/
#include <stdio.h>

int main(void) {
    int i, j;
    int s = 0;
    //scanf("%d%d",&i,&j) ;
    for (i = 0; i <= 9; i++) {
        j = i * 10 + 6;
        if (j % 3 == 0)
            s = s + j;
    }
    printf("%d\n", s);
    return 0;
}