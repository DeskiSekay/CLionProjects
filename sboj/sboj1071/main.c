#include <stdio.h>

int main() {
    int num = 0;
    for (int i = 2; i <= 300; ++i) {
        for (int j = 2; j < i; ++j) {
            if (i % j != 0) {
                break;
            }
            if (i % j == 0) {
                num++;
            }
        }
    }
    printf("%d", num);
    return 0;
}