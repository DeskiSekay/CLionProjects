#include <stdio.h>

int main() {
    char a;
    int letter = 0, blank = 0, digit = 0, other = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%c", &a);
        if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
            letter++;
        } else if (a == 32 || a == '\n') {
            blank++;
        } else if (a >= 48 && a <= 57) {
            digit++;
        } else {
            other++;
        }
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d", letter, blank, digit, other);
    return 0;
}