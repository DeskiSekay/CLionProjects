#include <stdio.h>
void printStar(){
    printf("* ");
}
int main() {
    int n,r;
    scanf("%d", &n);
    r = (n / 2) + 1;
    for (int i = 1; i <= r; i++) {
        for (int j = r - i; j > 0; j--) {
            printf("  ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printStar();
        }
        printf("\n");
    }

    for (int i = 1; i < r; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = (r - i) * 2 - 1; j > 0; j--) {
            printStar();
        }
        printf("\n");
    }
    return 0;
}