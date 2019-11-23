#include <stdio.h>

int main() {
    double avg;
    int num, sum = 0, count = 0, a;
    scanf("%d", &num);
    int k[num];
    for (int i = 0; i < num; ++i) {
        scanf("%d", &a);
        sum += a;
        if (a >= 60) count++;
    }
    avg = (double) sum / num;
    printf("average=%.1lf\ncount=%d", avg, count);
    return 0;
}