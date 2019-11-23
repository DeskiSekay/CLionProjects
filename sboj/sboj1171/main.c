#include <stdio.h>

int main() {
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int k = 0; k < 3; ++k) {
        for (int i = 0; i < 3; ++i) {
            printf("%d ", a[i][k]);
        }
        if (k < 2) {
            printf(" ");
            printf("\n");
        }
    }
    return 0;
}