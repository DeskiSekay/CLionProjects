#include <stdio.h>

int main() {
    int m, n;
    int min = 0, max = 0;
    scanf("%d%d", &m, &n);
    int t1 = m, t2 = n;
    for (int i = 2; i < m; ++i) {
        if (m % i == 0 && n % i == 0) {
            max = i;
        }
    }
    if (t1 < t2) {
        int t;
        t = t1;
        t1 = t2;
        t2 = t;
    }
    for (int j = t1; j > 0; ++j) {
        if (j % t1 == 0 && j % t2 == 0) {
            min = j;
            break;
        }
    }

    printf("%d %d", max, min);
    return 0;
}