#include <stdio.h>

int trangle[10][10];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || i == j)
                trangle[i][j] = 1;
            else trangle[i][j] = trangle[i - 1][j] + trangle[i - 1][j - 1];
            printf("%d ", trangle[i][j]);
        }
        printf("\n");
    }
    return 0;
}