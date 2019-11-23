/*
#include <stdio.h>

int main() {
    char c[10000];
    int count = 1, n = 0;
    for (int i = 0; i >= 0; ++i) {
        scanf("%c", &c[i]);

        if (c[i] == ' ' && (c[i + 1] != ' ')) {
            *//*

*/
/*if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i <= 'z'])) {
                count++;
            }*//*
*/
/*

            count++;

        }
        if (c[i] == '\n') break;
    }
    printf("%d", count);
    return 0;
}
*/

#include <stdio.h>

int main() {
    char ch;
    int i, count = 0, word = 0;
    while ((ch = getchar()) != '\n')
        if (ch == ' ')
            word = 0;
        else if (word == 0) {
            word = 1;
            count++;
        }

    printf("%d", count);
    return 0;
}



/*
#include <stdio.h>

int narcissistic(int number);

void PrintN(int m, int n);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
    return 0;
}

int narcissistic(int input) {
    int sum = 0, num, count = 0, a;

    num = input;    //1,这一步赋值是为了不让传入数字的值丢失,数字丢失了后面无法比较
    while (num > 0) {
        count++;    //2,这一步是为了得到输入数字input的位数,每个循环除以10,直到小于1时,循环结束
        num /= 10;  //(不懂为什么是>0和我说)
    }

    num = input;    //3,为了下面计算,这里要将已经变为0的num重新赋值

    int i;

    while (num > 0) {   //这里理由同2
        a = num % 10;   //4,a为num的每一位数字  这一步分离出每一位数字,应该能理解
        int c = 1;
        for (i = 0; i < count; i++)
            c = c * a;  //5,这里根据水仙花数的特性,每一位数的位数次方和等于本身即为水仙花数
        sum = sum + c;  //6,sum的值是每一位上的位数次方求和
        num /= 10;
    }
    if (sum == input)   //7,最后,假如输入的是5位数,就是第一位的5次方加上第二位的5次方......
        return 1;       //8,若是相等,则为水仙花数.
    else return 0;
}

void PrintN(int m, int n) {
    int i;
    for (i = m + 1; i < n; i++) {
        if (narcissistic(i) == 1)
            printf("%d\n", i);
    }
}*/