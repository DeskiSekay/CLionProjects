#include <stdio.h>

int main() {
    char c;
    for (int i = 0; i < 3; ++i) {
        scanf("%c", &c);
        getchar();
        c += 32;
        printf("%c", c);
        if (i < 2) printf(" ");
    }
    return 0;
}