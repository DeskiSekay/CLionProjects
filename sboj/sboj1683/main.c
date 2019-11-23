#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("No");
        return 0;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}