#include <stdio.h>
#include <math.h>


int s(int t) {
    int k = (int) sqrt(t);
    if (t < 2) {
        return 0;
    }
    for (int i = 2; i < k; ++i) {
        if (t % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n, x = 0;
    int a[100];
    scanf("%d,%d", &m, &n);
    if (m > n) {
        int t;
        t = m;
        m = n;
        n = t;
    }
    for (int i = m; i <= n; ++i) {
        if (s(i) == 1) {
            if (i % 10 == 7) {
                a[x] = i;
                x++;
            }
        }
    }
    for (int h = 0; h < x; h++) {
        printf("%d", a[h]);
        if (h < x - 1) printf(" ");
    }
    return 0;
}