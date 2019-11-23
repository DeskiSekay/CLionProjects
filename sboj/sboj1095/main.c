/*函数定义：int sign( int x );
其中x是用户传入的整型参数。符号函数的定义为：
 * 若x大于0，sign(x) = 1；
 * 若x等于0，sign(x) = 0；
 * 否则，sign(x) = −1。
测试程序样例：*/
#include <stdio.h>

int sign(int x);

int main() {
    int x;
    scanf("%d", &x);
    printf("sign(%d)=%d\n", x, sign(x));
    return 0;
}

int sign(int x) {
    int y;
    if (x > 0) y = 1;
    if (x == 0) y = 0;
    if (x < 0) y = -1;
    return (x, y);

}
