#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int m, n, sum = 0, count = 0;
    scanf("%d%d", &m, &n);
    if (m > n) {
        int t;
        t = m;
        m = n;
        n = m;
    }
    for (int i = m; i <= n; ++i) {

        if (isPrime(i) == 1) {
            sum += i;
            count++;
        }
    }
    printf("%d %d", count, sum);

    return 0;
}