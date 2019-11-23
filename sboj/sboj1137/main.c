/*
#include <stdio.h>

int i = 0, sum = 0;

int digui() {
    i++;
    digui();
    if (i <= 100) {
        sum += i;
    } else {
        return sum;
    }
}

int main() {
    //digui();
    printf("%d", digui());
    return 0;
}

*/

/* aboj1038 */

#include <stdio.h>

#define PI 3.14

double s(double r) {
    double area = PI * r * r;
    return area;
}

double l(double r) {
    double perimeter = 2 * PI * r;
    return perimeter;
}

int main() {
    double r;

    scanf("%lf", &r);
    printf("area=%.2lf, perimeter=%.2lf", s(r), l(r));
    return 0;
}
