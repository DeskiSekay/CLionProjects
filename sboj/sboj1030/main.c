#include <stdio.h>

int main() {
    int n = 0;
    double sum, fenzi, fenmu, temp;
    sum = 0, fenzi = 2, fenmu = 1, temp = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += fenzi / fenmu;
        temp = fenzi;
        fenzi += fenmu;
        fenmu = temp;
    }

    printf("%.2f", sum);
    return 0;
}