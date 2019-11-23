#include <stdio.h>

int main() {
    double m;
    scanf("%lf", &m);
    if (m < 100) {
        m *= 0.95;
    } else if (m >= 100 && m < 200) {
        m *= 0.9;
    } else if (m >= 200 && m < 500) {
        m *= 0.85;
    } else if (m >= 500) {
        m *= 0.8;
    }
    printf("%.2f", m);
    return 0;
}