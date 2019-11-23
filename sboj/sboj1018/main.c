#include <stdio.h>

int main() {
    int sp, lsp;
    double a = 0;
    scanf("%d%d", &sp, &lsp);
    a = (double) (sp - lsp) * 100 / lsp;

    if (a <= 10) {
        printf("OK");
    } else if (a > 10 || a <= 50) {
        printf("Exceed %.0f%%.Ticket 200", a);
    } else {
        printf("Exceed %.0f%%.License Revoked",a);
    }
    return 0;
}