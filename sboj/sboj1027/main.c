#include <stdio.h>
#include <math.h>

int main() {
    double BMI, w, h;
    scanf("%lf%lf", &w, &h);

    BMI = w / pow(h, 2);
    if (BMI < 18.5) {
        printf("thin");
    } else if (BMI >= 18.9 && BMI <= 23.9) {
        printf("normal");
    } else if (BMI > 23.9 && BMI <= 28) {
        printf("fat");
    } else if (BMI > 28) {
        printf("too fat");
    }
    return 0;
}