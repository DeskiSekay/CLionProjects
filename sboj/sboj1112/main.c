#include <stdio.h>

#define MAXN 10

void sort(int a[], int n);

int main() {
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

void sort(int a[], int n) {
    int t, i;
    int c = a[n];
    for (i = 0; i < n; ++i) {
        if (a[i] > a[i + 1]) {
            if (i < n - 1) {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            } else {
                a[n] = c;
            }
        }

    }

}
