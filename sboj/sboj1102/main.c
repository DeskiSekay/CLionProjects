#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main() {
    int n;
    scanf("%d", &n);
    if (IsSquare(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int IsSquare(int n) {
    if (sqrt(n) == (int) sqrt(n)) {
        return 1;
    } else {
        return 0;
    }
}
/* 你的代码将被嵌在这里 */