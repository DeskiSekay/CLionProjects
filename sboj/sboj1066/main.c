#include <stdio.h>

int main() {
    for (int i = 6; i > 0; ++i) {
        if (i % 6 == 1 && i % 7 == 2 && i % 8 == 3 && i % 9 == 4) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}