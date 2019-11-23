#include <stdio.h>

int main() {
    int n, t, r;
    t = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &r);
        if (r < t) {
            t = r;
        }

    }
    printf("min = %d", t);
    return 0;
}