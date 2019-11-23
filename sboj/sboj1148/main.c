#include <stdio.h>

int main() {
    int n, sum = 0, i = 0, sb = 1;
    scanf("%d", &n);
    int a[200];
    for (i; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            if (sb % n == 0) getchar();
            scanf("%d", &a[j]);
            sum += a[j];
            sb++;
        }
    }
    int index1 = n - 1;
    for (int k = n; k > 0; ++k) {
        if (index1 > 0) {
            sum -= a[index1];
            index1 -= n - 1;
        }
    }
    int index2 = n;
    for (int l = 0; l < n; ++l) {
        sum -= a[index2];
        index2 *= 2;
    }
    for (int m = n; m >= n - 10; --m) {
        sum -= a[m];
    }
    sum += a[n * n];
    printf("%d", sum);
    return 0;
}