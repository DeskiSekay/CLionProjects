#include <stdio.h>

int main() {
    int x, y, z;
    int t;
    scanf("%d%d", &x, &y, &z);
    if (x > y) {
        t = x;
        if (x > z) {
            t = x;
        }
    } else if (x < y) {
        t = y;
        if (y > z) {
            t = y;
        }
    } else if (y < z) {
        t = z;
        if()
    }
    printf("%d", t);
    return 0;
}
