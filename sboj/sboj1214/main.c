#include <stdio.h>
#include <string.h>

void delchar(char *p, char s) {
    int l = strlen(p);
    printf("%d", l);
    for (int i = 0; i < l; ++i) {
        if (p[i] == 's') p[i] = '\0';
    }
    printf("删除后的字符串是：\n");
    for (int j = 0; j < l; ++j) {
        if (p[j] != '\0')
            printf("%d %c ", j, p[j]);
    }
}

int main() {
    char a[81], b, ch;
    int i = 0;
    while ((ch = getchar()) != '\n') {
        a[i] = ch;
        i++;
    }
    scanf("%c", &b);
    delchar(a, b);
    return 0;
}