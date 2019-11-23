#include <stdio.h>

int main() {
    int n, t;
    char c[11];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; ++i) {
        scanf("%c", &c[i]);
    }
    for (int j = 0; j < n - 1; ++j) {
        for (int i = 0; i < n - 1 - j; ++i) {
            if (c[i] > c[i + 1]) {
                t = c[i];
                c[i] = c[i + 1];
                c[i + 1] = t;
            }
        }
    }
    printf("输出排序后的数组元素：\n");
    for (int k = 0; k < n; ++k) {
        printf("%c ", c[k]);
    }
    return 0;
}