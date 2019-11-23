#include <stdio.h>
#include <math.h>

int main() {
    int a = 1, sum = 0;
    for (int i = 1; i <= 9; ++i) {

        sum += a;
        a = a * 10 + i + 1;
        //printf("%d\n", a);

    }
    printf("%d", sum);
    return 0;
}