#include <stdio.h>

int arr[100][6];

int main() {
    int m, n, sum;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int k = 0; k < m; ++k) {
        sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[k][i];
        }
        printf("%d\n", sum);
    }
    return 0;
}