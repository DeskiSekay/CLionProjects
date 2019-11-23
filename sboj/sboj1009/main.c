#include <stdio.h>

int main() {
    int num;
    int a[3];
    scanf("%d", &num);
    a[0] = num / 100;
    a[1] = num / 10 % 10;
    a[2] = num % 10;
    for (int i = 0; i < 3; ++i) {
        printf("%d", a[i]);
        if (i < 2) {
            printf(",");
        }
    }
    return 0;
}