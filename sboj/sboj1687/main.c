#include <stdio.h>

#define MAX 100

int main() {
    char a[1000], ch;
    int n, m, count = 0, i = 1, t = 0;
    scanf("%d%d", &n, &m);
    switch (m) {
        case 0:
            m = 48;
            break;
        case 1:
            m = 49;
            break;
        case 2:
            m = 50;
            break;
        case 3:
            m = 51;
            break;
        case 4:
            m = 52;
            break;
        case 5:
            m = 53;
            break;
        case 6:
            m = 54;
            break;
        case 7:
            m = 55;
            break;
        case 8:
            m = 56;
            break;
        case 9:
            m = 57;
            break;

    }
    getchar();
    for (int j = 0; j < 1000; ++j) {
        ch = getchar();
        a[j] = ch;
        t++;
        if (ch == '\n') break;
        if (ch == ' ') i++;
        if (i > MAX) break;
    }
    for (int k = 0; k < t; ++k) {
        if (a[k] == (char) m) count++;
    }
    printf("%d", count);
    return 0;
}