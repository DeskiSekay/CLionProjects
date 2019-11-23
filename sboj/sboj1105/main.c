/*int fn( int a, int n );
 *int SumA( int a, int n );
其中函数fn须返回的是n个a组成的数字；SumA返回要求的和。
测试程序样例：*/

#include <stdio.h>
#include <math.h>

int fn(int a, int n);

int SumA(int a, int n);

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));
    return 0;
}

int fn(int a, int n) {
    int sum = 0;
    int t = 0, x = a;
    for (int i = 1; i <= n; ++i) {

        a += x * t;
        t = pow(10, i);

    }
    return a;
}

int SumA(int a, int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += fn(a, i);
    }
    return sum;
}
