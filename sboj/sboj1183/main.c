
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int i = 0, j = n - 1, t;
    for (int k = 0; i < j; ++k) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    for (int l = 0; l < n; ++l) {
        printf("%d", a[l]);
        if (l < n - 1) printf(" ");
    }
    return 0;
}
