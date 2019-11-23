#include <stdio.h>

int main() {
    int sum = 0, a;
    for (int i = 1; i > 0; ++i) {
        if (i % 3 == 0) {
            printf("%d ", i);
            sum += i;
        }
        if (sum >= 100) {
            break;
        }
    }
    printf("%d", sum);
    return 0;
}