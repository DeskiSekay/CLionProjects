#include <stdio.h>

int main(void) {

    int i, j, a[5][5], temp;
    temp = 0;
    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) {
            a[i][j] = j + temp;
        }
        temp++;
    }
    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++)

            printf("%2d", a[i][j]);

        if (i < 4) printf("\n");
    }

    return 0;

}