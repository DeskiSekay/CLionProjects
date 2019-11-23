#include <stdio.h>

#define p 32

int main() {
    char a;
    scanf("%c", &a);
    if (a >= 97 && a <= 122) a -= p;
    printf("%c", a);
    return 0;
}