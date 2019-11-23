#include <stdio.h>

int main() {
    int h1, h2, m1, m2;
    scanf("%2d%2d %2d%2d", &h1, &m1, &h2, &m2);
    int h = h2 - h1;
    int m = m2 - m1;
    if (m < 0) {
        m += 60;
        h -= 1;
    }
    printf("%02d:%02d", h, m);
    return 0;
}