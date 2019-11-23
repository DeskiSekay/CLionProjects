/*
#include <stdio.h>
#include <string.h>

typedef struct time time;

struct time {
    char h[2], m[2];
} times[2];

int main() {

    char x[2];
    char y[10];
    char z[10];
    scanf("%s:%s", x, y);
    printf("%2s", x);
    strcpy(times[0].h, x);
    strcpy(times[1].m, y);
    printf("a=%s", strcpy(times[0].h, x));
    return 0;

}
*/


/*
#include <stdio.h>

int main() {
    int n = 0;
    double sum, fenzi, fenmu, temp;
    sum = 0, fenzi = 2, fenmu = 1, temp = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += fenzi / fenmu;
        temp = fenzi;
        fenzi += fenmu;
        fenmu = temp;
    }

    printf("%.2f", sum);
    return 0;
}*/


/*
#include<stdio.h>

int main() {
    int n, i;
    double sum, a;
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i += 2) {
        a = i;
        if (i % 2 != 0)
            sum = sum + 1 / a;
    }
    printf("sum=%.6lf", sum);
    return 0;
}


#include<stdio.h>

int main() {
    char a = '1';
    printf("变量a作为字符输出时:%c", a);
    printf("\n");
    printf("变量a作为数字输出时:%d", a);
    return 0;
}
*/



#include <stdio.h>
#include <math.h>

int arr[1000] = {0};

//判断素数
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {

    for (int i = 2; i < 1000; ++i) {
        //如果是素数 则将对应的元素值置为1
        if (isPrime(i) == 1) {
            arr[i] = 1;
        }
    }

    int n, m, flag, sum;
    scanf("%d%d", &n, &m);
    if (isPrime(n) == 1) printf("%d is a prime number\n", n);
    //flag用来表示是否需要输出逗号
    flag = 0;

    //sum用来表示结果的个数
    sum = 0;

    for (int i = n; i <= m; ++i) {
        if (i % 2 == 0) {
            //从2开始尝试分解
            for (int j = 2; j <= i - 2; ++j) {
                //如果分解合法 则输出结果
                if (arr[j] == 1 && arr[i - j] == 1) {
                    printf("%d=%d+%d", i, j, i - j);
                    sum++;
                    //如果flag还是初始值0 则置为1（每个结果后面默认加上逗号）
                    if (flag == 0) {
                        flag = 1;
                    }
                    //如果当前输出的结果是每一行最后的结果或者是所有解的最后一个结果 则去掉逗号
                    if (sum % 5 == 0 || i == m || i == m - 1) {
                        printf("\n");
                        flag = 0;
                    }
                    //每个偶数输出一种分解式即可
                    break;
                }
            }
            //如果逗号标志没有被取消 则输出逗号

            if (flag == 1) {
                printf(", ");
            }

        }
    }

    //如果结果为0
    if (sum == 0) {
        printf("no result!\n");
    }

    return 0;
}
