#include <stdio.h>

int main() {
    char a[50], ch;
    int j = 0;
    for (int i = 0; i >= 0; ++i) {
        ch = getchar();
        if (ch == '#') break;
        a[j] = ch;
        j++;
    }
    for (int k = 0; k < j; ++k) {
        if (a[k] >= 65 && a[k] <= 90) a[k] += 32;
        else if (a[k] >= 97 && a[k] <= 122) a[k] -= 32;
    }
    for (int l = 0; l < j; ++l) {
        printf("%c", a[l]);
    }
    return 0;
}