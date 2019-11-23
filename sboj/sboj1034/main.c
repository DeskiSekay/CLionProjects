#include <stdio.h>

int main() {
    int i;
    double sum = 0;
    scanf("%d", &i);
    for (int j = 0; j < 2 * i; j += 2) {
        sum += 1.0 / (j + 1);
    }
    printf("sum=%.6lf", sum);
    return 0;
}