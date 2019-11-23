#include <stdio.h>

int main() {
    char c[1000];
    char in;
    int n, count = 0;
    for (int i = 1; i > 0; ++i) {
        scanf("%c", &c[i]);
        count++;
        if (c[i] == '\n') {
            c[i] = 0;
            break;
        }
    }
    scanf("%d", &n);
    getchar();
    scanf("%c", &in);
    for (int j = 1; j <= n; ++j) {
        c[j - 1] = c[j];
    }
    c[n - 1] = in;
    for (int k = 0; k < count; ++k) {
        printf("%c", c[k]);
    }
    return 0;
}