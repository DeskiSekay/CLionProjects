#include <stdio.h>

int main() {
    double fenzi = 2, fenmu = 1, t = 0;
    double sum = 0;
    for (int i = 0; i < 100; ++i) {
        sum += /*(double)*/ fenzi / fenmu;
        t = fenzi;
        //printf("%lf\n", t);
        fenzi += fenmu;
        fenmu = t;
    }
    printf("%.2lf", sum);
    return 0;
}