#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if (c >= 48 && c <= 57) {
        printf("%c is a number.", c);
    } else if (c == 32) {
        printf("%c is a space.", c);
    } else {
        printf("%c is not a space or a number.", c);
    }
    return 0;
}