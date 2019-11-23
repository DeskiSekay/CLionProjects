#include <stdio.h>

int max(int a, int b) {
    int m = 0;
    if (a > b) {
        m = a;
    } else if (a < b) {
        m = b;
    } else{
        m=a;
    }
    return m;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("max=%d\n", max(a, b));
    return 0;
}