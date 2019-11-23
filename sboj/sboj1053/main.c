#include <stdio.h>

int main() {
    int n;
    int fen5 = 0, fen2 = 0, fen1 = 0;
    int a = 0, b = 0, c = 0, count = 0;
    scanf("%d", &n);
    fen5 = n / 5;
    if (n > 5) {
        for (int i = fen5; i > 0; --i) {
            a -= 5 * i;
            n -= a;
            fen2 = n / 2;
            printf("fen5:%d,", i);

            if (n > 2) {
                for (int j = fen2; j > 0; --j) {
                    b -= 2 * j;
                    n -= b;
                    printf("fen2:%d,", fen2);
                    fen1 = n;
                    count++;
                    printf("fen1:%d,", fen1);
                }

            }
            printf("\n");

        }
    } else {
        count++;
    }

    printf("total:%d", count);


/*do {
    n -= 5;
    fen5++;
} while (n >= 5);
do {
    n -= 2;
    fen2++;
} while (n >= 2);
do {
    n -= 1;
    fen1++;
} while (n >= 1);*/
    return 0;
}