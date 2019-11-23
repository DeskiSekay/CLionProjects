#include <stdio.h>

int main() {
    double n[10], sum = 0, avg;
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%lf", &n[i]);
        sum += n[i];
    }
    avg = sum / 10;
    printf("平均值为:%.1lf", avg);
    printf("\n小于平均值的数:");
    for (int j = 0; j < 10; ++j) {
        if (n[j] < avg) {
            printf("%.1lf ", n[j]);
            count++;
        }
        //if (count<) printf(" ");
    }
    return 0;
}