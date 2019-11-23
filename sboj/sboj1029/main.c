#include <stdio.h>

int main() {
    int n, sum;
    sum = 0;
    do {

        scanf("%d", &n);
        if (n % 2 == 1) {
            sum += n;
        }

    } while (n > 0);
    printf("%d", sum);

    return 0;
}