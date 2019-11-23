/*
#include <stdio.h>
#include <math.h>

int main() {
    double n;
    scanf("%lf", &n);
    if (n >= 60) {
        printf("%.1lf", n);
    } else if(n>=0&&n<60){
        printf("%.1lf", sqrt(n) * 10);
    }
    return 0;
}*/

/*  分支4-7  快排算法解题   */
#include <stdio.h>

int main(void) {
    int a[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &a[i]);
    }
    for (int k = 0; k < 2; ++k) {
        for (int j = 0; j < 2 - k; ++j) {
            if (a[j] > a[j + 1]) {
                int t;
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("min=%d,max=%d", a[0], a[2]);
    return 0;
}