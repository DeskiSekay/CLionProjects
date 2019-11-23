#include <stdio.h>

int main() {
    int a, b, c, m, n;
    //int count = 0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; ++i) {

        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;

        if (a * a * a + b * b * b + c * c * c == i) {
            printf("%d\n", i);


        }
    }
    return 0;
}