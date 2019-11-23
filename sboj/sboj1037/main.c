#include<stdio.h>

int main() {
    int n;
    double fenmu = 1, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fenmu *= i;
        sum += 1.0 / fenmu;
    }
    sum += 1;
    printf("%.8lf", sum);
    return 0;
}
