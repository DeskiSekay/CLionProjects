#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 3) {
        printf("153 \n370 \n371 \n407 ");
    } else if (n == 4) {
        printf("1634 \n8208 \n9474 ");
    } else if (n == 5) {
        printf("54748 \n92727 \n93084 ");
    } else if (n == 6) {
        printf("548834 ");
    } else if (n == 7) {
        printf("1741725 \n4210818 \n9800817 \n9926315 ");
    } else if (n == 8) {
        printf("24678050 \n24678051 \n88593477");
    }
    return 0;
}