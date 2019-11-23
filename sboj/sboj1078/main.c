#include <stdio.h>

int main() {
    double sum = 0;
    for (int i = 1; i <= 100000; ++i) {
        sum += 1.0 / i;
        /*if ( i >= 100000) {
            //printf("in");
            break;
        }*/
    }
    printf("s=%.2lf", sum);
    return 0;
}