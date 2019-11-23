#include <stdio.h>

int main() {
    double sum = 0, fenmu = 3;
    for (int j = 2; j <= 1000; j += 2) {
        sum -= 1.0 / fenmu;
        fenmu += 4;
    }
    printf("%.6lf", sum);
    return 0;
}