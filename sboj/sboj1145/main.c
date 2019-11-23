#include <stdio.h>

int main() {
    int n, i, flag = 0, t = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (i < n - 1) {
            if (a[i] <= a[i + 1]) {
                t = a[i + 1];
                flag = i;
                //num=t;
            }
        }
        if (a[n - 1] >= a[n - 2]) {
            t = a[n - 1];
            flag = n - 1;
        }
    }
    for (int j = 0; j < n; ++j) {
        if (a[j] == t) {
            flag = j;
            break;
        }
    }

    printf("%d %d", t, flag);
    return 0;
}