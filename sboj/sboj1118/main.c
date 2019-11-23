#include <stdio.h>
int f1 = 1, f2 = 0, ff, t;

int f(int n);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

int f(int n) {
    if (n == 1) return 1;
    //if (n == 2) return 2;
    for (int i = f1; i < n; ++i) {
        ff = f1 + f2;
        t = ff;
        f2 = f1;
        f1 = t;
    }
    return ff;
}