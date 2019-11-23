/*
#include <stdio.h>

int gcd(int x, int y);


int main() {

    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;

}


int gcd(int x, int y) {
    int t;

    if (x > y) {
        t = y;
        y = x;
        x = t;
    }
    do {
        t = x;
        x = y % x;
        y = t;
    } while (x != 0);
    return y;
}

*/

