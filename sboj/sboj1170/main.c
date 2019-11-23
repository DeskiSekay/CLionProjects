#include <stdio.h>

int main() {
    int n[5], t;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &n[i]);
    }

    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4 - j; ++i) {

            if (n[i] > n[i + 1]) {
                t = n[i];
                n[i] = n[i + 1];
                n[i + 1] = t;
            }

        }
    }

    for (int k = 0; k < 5; ++k) {
        printf("%d ", n[k]);
    }
    return 0;
}