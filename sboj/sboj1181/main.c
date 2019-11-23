#include <stdio.h>

int isPrime(int n) {

    if (n < 2) return 0;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) break;
        return 0;
    }
    return 1;
}

int main() {
    int n, t, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    t = a[0];
    for (int j = 0; j < n; ++j) {
        if (a[j] > t) {
            t = a[j];
            if (isPrime(a[j]) == 1) count++;
        }
    }
    printf("最大值为%d,共有%d个素数", t, count);
    return 0;
}