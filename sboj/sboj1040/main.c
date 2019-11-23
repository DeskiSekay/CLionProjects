#include <stdio.h>

int main(void) {
    int flag = 1, N;
    double sum = 0, fenmu = 1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum = sum + flag * 1.0 / fenmu;
        fenmu += 3;
        flag = -flag;
    }
    printf("sum = %.3f", sum);
    return 0;
}