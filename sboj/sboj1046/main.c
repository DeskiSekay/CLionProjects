#include <stdio.h>

int year[100];

int main() {
    int y, c = 0;
    scanf("%d", &y);
    if (y > 2100 || y < 2000) {
        printf("Invalid year!");
    } else {
        for (int i = 2004; i <= y; ++i) {

            if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
                //printf("%d\n", i);
                year[c] = i;
                c++;
            }

        }
        if (c == 0 || y <= 2004) {
            printf("None");
        } else {
            for (int i = 0; i < c; ++i) {
                printf("%d", year[i]);
                if (i < c - 1) printf("\n");
            }
        }
    }

    return 0;
}