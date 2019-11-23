#include <stdio.h>

int main() {
    int c, i = 0;
    printf("[1] apple\n"
           "[2] pear\n"
           "[3] orange\n"
           "[4] grape\n"
           "[0] exit\n");
    for (int j = 0; j < 5; ++j) {
        scanf("%d", &c);
        if (c == 0) break;
        switch (c) {
            case 1:
                printf("price = 3.00\n");
                break;
            case 2:
                printf("price = 2.50\n");
                break;
            case 3:
                printf("price = 4.10\n");
                break;
            case 4:
                printf("price = 10.20\n");
                break;
            default:
                printf("price = 0.00");
                break;
        }

    }
/*
    do {
        ~scanf("%d", &c);
        if (c == 32) getchar();
        if (c == 0) return 0;
        if (c == 1) printf("price = 3.00");
        if (c == 2) printf("price = 2.50");
        if (c == 3) printf("price = 4.10");
        if (c == 4) printf("price = 10.20");
        else printf("price = 0.00");

        if (i <= 4) printf("\n");
        i++;
    } while (i < 5);

*/
    return 0;
}