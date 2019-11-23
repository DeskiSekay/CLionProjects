#include <stdio.h>
#include <ctype.h>
#include <string.h>

//将字符串分为n份,试验整数m是否是字符串的周期



int main() {
    char ch[103];
    char temp[103];
    scanf("%s", ch);
    int len = strlen(ch);
    int temp1 = 0, j;
    for (int i = 1; i < len; ++i) {
        if (isalpha(ch[i])) {
            if (len % i != 0) {
                continue;
            }
        }
        //取出字符
        for (j = temp1; j < i; ++j) {
            temp[j] = ch[j];
            temp1 = j;
        }
        int flag = 1;
        for (int l = i; l < len; l = l + i) {
            int flag2 = 1;
            for (int j = 0; j < i; ++j) {
                if (temp[j] != ch[i + j]) {
                    flag2 = 0;
                    break;
                }
            }
            if (!flag2) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            printf("%d\n", i);
            break;
        }

    }

    //printf("\n");
    return 0;
}

/*

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch[100];
    scanf("%s", ch);
    int len = strlen(ch);
    printf("%c", ch[0]);
    for (int i = 1; i < len; ++i) {
        if (isalpha(ch[i]) && !isalpha(ch[i - 1])) {
            printf("_");
        }
        printf("%c", ch[i]);
        if ((i != len - 1) && isalpha(ch[i]) && !isalpha(ch[i - 1])) {
            printf("_");
        }
    }
    printf("%c", ch[len]);
    return 0;
}
*/
