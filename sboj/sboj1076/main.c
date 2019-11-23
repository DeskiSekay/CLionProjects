#include <stdio.h>

int main() {
    int x, y, z = 0;
    scanf("%d%d", &x, &y);
    /*for (int i = x; i <= z; ++i) {
        z += i;
    }*/
    z = (x + y) * (y - x + 1) * 0.5;
    printf("%d", z);
    return 0;
}