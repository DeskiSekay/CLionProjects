#include <stdio.h>

int main() {
    char c;
    int zimu = 0, shuzi = 0, other = 0;
    while ((c = getchar()) != '\n') {
        if (c >= 97 && c <= 122) {
            zimu++;
        } else if (c >= 48 && c <= 57) {
            shuzi++;
        } else {
            other++;
        }
    }
    printf("小写字母%d个,数字%d个,其他字符%d个", zimu, shuzi, other);
    return 0;
}