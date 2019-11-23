#include <stdio.h>

int main() {
    int l, u, f;
    double c;
    scanf("%d%d", &l, &u);

    if (l <= u && u <= 100) {
        printf("fahr celsius:\n");
        for (int i = l; i <= u; i += 2) {
            f = i;
            c = 5.0 * (f - 32) / 9;
            printf("%d%6.1lf\n", f, c);
        }

    } else {
        printf("Invalid.");
    }

    return 0;
}