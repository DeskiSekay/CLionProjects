#include <iostream>
#include <stdio.h>
#include <string.h>

int ender;
int i = 0, j = 0, sb, count = 0, flag = 0;
char input1[10000], input2[10000], differ[10000], ch;

char first() {
    for (i = 0; i >= 0; ++i) {
        ch = getchar();
        if (ch == 64) {
            break;
        }
        input1[i] = ch;
    }
}

char second() {
    for (i = 0; i >= 0; ++i) {
        ch = getchar();
        if (ch == 64) {
            ender = i;
            break;
        }
        input2[i] = ch;
    }
}

int PrDif() {
    if (sb == ' ')
        printf("\033[41m%c\033[0m", sb);
    if (sb != ' ')
        printf("\033[31m%c\033[0m", sb);
}

int FindDif() {
    printf("你的答案:\n");
    for (int k = 0; k < ender; ++k) {
        if (input1[k] == input2[j]) {
            printf("%c", input1[k]);
        } else {
            sb = input2[j];
            PrDif();
            count++;
        }
        j++;
    }
    if (count == 0) printf("\n\033[41;30m  完全一致!快去OJ大显身手吧!  \033[0m");
    else printf("\n\033[41;30m  共有%d处错误  \033[0m", count);
}

int Charge() {

}

int main() {
    printf("欢迎使用!文本复制后以@结尾即可开始比对\n");
    printf("请将标准答案粘贴在这里:\n");
    first();
    getchar();

    printf("请将你的答案粘贴在这里:\n");
    second();
    printf("--------------------------------\n");
    printf("标准答案:\n%s\n", input1);
    FindDif();
    return 0;
}
