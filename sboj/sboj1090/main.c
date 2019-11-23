#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0;
    double sum = 0;
    scanf("%d", &n);
    while (n) {
        //printf("no.%d", count);
        sum += pow((double) (n % 10), 3.0);
        n /= 10;
        count++;
    }
    printf("sum=%.0lf,count=%d", sum, count);
    return 0;
}
