#include <stdio.h>

int main() {
    int a[6] = {0, 6, 9, 10, 12, 15};
    int t;
    scanf("%d", &a[0]);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i; ++j) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("插入后的数组元素：\n");
    for (int j = 0; j < 6; ++j) {

        printf("%d ", a[j]);
    }
    return 0;
}