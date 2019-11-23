/*由于数据较大,不能通过组合数公式求得组合数,会溢出*/

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
    x = fenzi / b;
    y = fenmu1 / a * fenmu2;


}

int main() {
    scanf("%d%d", &n, &m);
    if ((n >= 0 && n <= 180) && ((n - m) >= 0 && (n - m <= 20))) {
        func(m, n);
        //printf("%d %d\n", x, y);
        printf("%d", x / y);
    }
    return 0;
}