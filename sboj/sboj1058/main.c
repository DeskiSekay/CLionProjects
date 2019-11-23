#include <stdio.h>

int main() {
    long i = 1, j, sum = 1;
    int n;
    scanf("%d", &n);
    for (j = n; j > 1; j--) {
        sum = (sum + 1) * 2;
    }
    printf("%ld", sum);
    return 0;
}
