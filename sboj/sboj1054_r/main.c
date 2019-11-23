#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, j, k, n;
    scanf("%d", &n);
    for (int a = 0; a < n; n++) {
        i = n / 100;
        j = n / 10 % 10;
        k = n % 10;
        if (n == i * i * i + j * j * j + k * k * k) {
            printf("%d\n", n);
        }
    }
    //printf("\n");
}