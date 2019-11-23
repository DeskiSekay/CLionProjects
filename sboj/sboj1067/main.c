#include <stdio.h>

int main() {
    int a = 0, b = 0;
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= i; ++j) {
            a += j;
        }
        //b += a;
    }
    printf("%d", a);
}