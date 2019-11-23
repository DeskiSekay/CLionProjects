#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;
    while (scanf("%d", &n)) {
        if (n == -1) break;
        sum += n;
        count++;
    }
    double avg = (double) sum / count;
    printf("number:%d\n"
           "average:%.1lf", count, avg);
    return 0;
}