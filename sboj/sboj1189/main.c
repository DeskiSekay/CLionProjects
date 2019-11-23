#include <stdio.h>

int main() {
    char a[1000];
    int n, count = 0;
    for (int i = 0; i >= 0; ++i) {
        scanf("%c", &a[i]);
        if (a[i] == '\n') break;
        //printf("%d", a[i]);
        count++;
    }
    scanf("%d", &n);
    //printf("%d", count);
    for (int j = n - 1; j <= count; ++j) {
        a[j] = a[j + 1];
        //printf("第%d个字母是%c\n", j, a[j]);
    }
    for (int k = 0; k < count; ++k) {
        printf("%c", a[k]);
    }
    return 0;
}