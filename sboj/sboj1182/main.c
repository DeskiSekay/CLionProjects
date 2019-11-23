#include <stdio.h>

int isChicken(int n) {

    if (n % 2 == 0)
        return 1;
    else return 0;
}

int main() {
    int n, t, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int l = 0; l < n; ++l) {
        if (isChicken(a[l]) == 0) count++;
    }
    for (int j = 0; j < n - 1; ++j) {
        for (int i = 0; i < n - 1 - j; ++i) {
            if (a[i] < a[i + 1]) {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    printf("奇数的个数为:%d\n", count);
    printf("排序后的数组元素:");
    for (int k = 0; k < n; ++k) {
        printf("%d ", a[k]);
    }
    return 0;
}