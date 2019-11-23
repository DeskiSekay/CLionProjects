#include <stdio.h>

int main(void) {

    int i, j, index, temp;

    int a[5];

    for (i = 0; i < 5; i++)

        scanf("%d", &a[i]);

    for (i = 0; i < 4; i++) {

        for (j = 0; j < 4 - i; j++)

            if (a[j + 1] < a[j]) {

                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;

            }
    }

    for (i = 0; i < 5; i++)

        printf("%6d", a[i]);

    return 0;

}