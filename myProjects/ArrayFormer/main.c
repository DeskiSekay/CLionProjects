#include <stdio.h>

int main() {
    int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int p, j = 0;
    scanf("%d", &p);
    for (int i = 10; i < 10 + p; ++i) {
        array[10 + j] = array[j];
        j++;
    }
    for (int k = p; k < 10 + p; ++k) {
        printf("%d ", array[k]);
    }

    return 0;
}