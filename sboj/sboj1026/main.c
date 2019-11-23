#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0) {
        printf("Yes");
    } else if (n % 5 == 0) {
        printf("Yes");
    } else if (n % 7 == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}