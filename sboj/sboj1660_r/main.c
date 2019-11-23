#include <stdio.h>

int m, n;
int fenzi = 1, fenmu1 = 1, fenmu2 = 1;
int x, y;

int func(int a, int b) {

    for (int i = b; i > 0; --i) {
        fenzi *= i;

    }
    for (int j = (n - m); j > 0; --j) {
        fenmu2 *= j;
    }
    for (int k = a; k > 0; --k) {
        fenmu1 *= k;
    }
    x = fenzi;
    y = fenmu1 * fenmu2;


}

int main() {
    scanf("%d%d", &n, &m);
    if ((n > 5 && n <= 180) && ((n - m) > 0 && (n - m <= 20))) {
        func(m - 1, n - 1);
        int first = x / y;
        func(m, n - 1);
        int second = x / y;
        //printf("%d %d\n", x, y);
        printf("%d", first + second);
    } else {
        func(m, n);
        printf("%d", x / y);
    }
    return 0;
}