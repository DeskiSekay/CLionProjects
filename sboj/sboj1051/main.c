#include <stdio.h>

int main() {
    int A = 0, B = 0, C = 0, D = 0, E = 0, n, s;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &s);
        if (s >= 90) A++;
        if (s < 90 && s >= 80) B++;
        if (s < 80 && s >= 70) C++;
        if (s < 70 && s >= 60) D++;
        if (s < 60) E++;

    }
    printf("%d %d %d %d %d", A, B, C, D, E);
    return 0;
}