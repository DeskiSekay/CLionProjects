#include <stdio.h>

int main() {
    unsigned long long n, i;
    int x = 0;
    int a[20];
    scanf("%lld", &n);
    for (i = n; i >= 1; i /= 10) {
        a[x] = i % 10;
        x++;
    }
    for (int j = 0; j < x; ++j) {
        printf("%d", a[j]);
    }

    return 0;
}