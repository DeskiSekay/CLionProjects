/*
#include<stdio.h>
#include<math.h>

int isPPDI(int x);

int main() {
    int x, result;
    scanf("%d", &x);
    result = isPPDI(x);
    if (result == 1) {
        printf("%d是水仙花数!", x);
    } else {
        printf("%d不是水仙花数!", x);
    }
}

int isPPDI(int x) {
    int array[17] = {153, 370, 371, 4071634, 8208, 9474, 54748, 92727, 93084, 548834,
                     1741725, 4210818, 9800817, 9926315,
                     24678050, 24678051, 88593477};
    for (int i = 0; i < 17; ++i) {
        if (x == array[i]) return 1;
    }
    return 0;
}
*/

#include<stdio.h>

int main(void) {
    int count = 0, N, i;
    double grade, total = 0, average;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        scanf("%lf", &grade);

        total = total + grade;
        if (grade >= 60)
            count++;
    }
    average = 1.0 * total / N;
    printf("average=%.1lf\ncount=%d", average, count);
    return 0;
}