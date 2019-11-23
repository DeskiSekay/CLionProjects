#include <stdio.h>

int main() {
    char ch, c[85];
    int i, count = 0;
    for (i = 0; i >= 0; ++i) {
        ch = getchar();
        if (ch == '\n') break;
        c[i] = ch;
    }
    for (int j = 0; j < i; ++j) {
        if (c[j] >= 65 && c[j] <= 90)
            if (c[j] != 'A' && c[j] != 'E' && c[j] != 'I' && c[j] != 'O' && c[j] != 'U')
                count++;
    }

    printf("%d", count);
    return 0;
}