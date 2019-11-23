
#include <stdio.h>
#include <string.h>

int main() {
    int j = 0, x, y;
    char a[1000], b[1000];

/*for (j = 0; j >= 0; ++j) {
        scanf("%c", &a[j]);
        if (a[j] == eof) break;
    }*/

    while (scanf("%c", &a[j]) != EOF) {
        j++;
    }
    for (int i = 0; i < j; ++i) {
        if (a[i] >= 65 && a[i] <= 77) {
            x = 77 - a[i];
            b[i] = x + 78;
        } else if (a[i] >= 78 && a[i] <= 90) {
            y = a[i] - 78;
            b[i] = 77 - y;
        } else b[i] = a[i];
    }
    for (int k = 0; k <= j; ++k) {
        printf("%c", b[k]);
    }
    return 0;
}


