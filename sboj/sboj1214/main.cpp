#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void delchar(char *p, char s, int l) {

    for (int i = 0; i < l; ++i) {
        if (p[i] == s) p[i] = '\0';
    }
    printf("删除后的字符串是：\n");
    for (int j = 0; j < l; ++j) {
        if (p[j] != '\0')
            printf("%c", p[j]);
    }
}

int main() {
    char a[81], b, ch;
    int i = 0;
    for (i = 0;; ++i) {
        cin.get(ch);
        if (ch == '\n') break;
        a[i] = ch;
    }
    scanf("%c", &b);
    delchar(a, b, i);
    return 0;
}