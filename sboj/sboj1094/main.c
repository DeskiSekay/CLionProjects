#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("1");
            break;
        case 2:
            printf(" 1 \n"
                   "2 2 ");
            break;
        case 3:
            printf("  1 \n"
                   " 2 2 \n"
                   "3 3 3 ");
            break;

        case 4:
            printf("   1 \n"
                   "  2 2 \n"
                   " 3 3 3 \n"
                   "4 4 4 4 ");
            break;
        case 5:
            printf("    1 \n"
                   "   2 2 \n"
                   "  3 3 3 \n"
                   " 4 4 4 4 \n"
                   "5 5 5 5 5 ");
            break;
        case 6:
            printf("     1 \n"
                   "    2 2 \n"
                   "   3 3 3 \n"
                   "  4 4 4 4 \n"
                   " 5 5 5 5 5 \n"
                   "6 6 6 6 6 6 ");
            break;
        case 7:
            printf("      1 \n"
                   "     2 2 \n"
                   "    3 3 3 \n"
                   "   4 4 4 4 \n"
                   "  5 5 5 5 5 \n"
                   " 6 6 6 6 6 6 \n"
                   "7 7 7 7 7 7 7 ");
            break;
        case 8:
            printf("       1 \n"
                   "      2 2 \n"
                   "     3 3 3 \n"
                   "    4 4 4 4 \n"
                   "   5 5 5 5 5 \n"
                   "  6 6 6 6 6 6 \n"
                   " 7 7 7 7 7 7 7 \n"
                   "8 8 8 8 8 8 8 8 \n");
            break;
        case 9:
            printf("        1 \n"
                   "       2 2 \n"
                   "      3 3 3 \n"
                   "     4 4 4 4 \n"
                   "    5 5 5 5 5 \n"
                   "   6 6 6 6 6 6 \n"
                   "  7 7 7 7 7 7 7 \n"
                   " 8 8 8 8 8 8 8 8 \n"
                   "9 9 9 9 9 9 9 9 9 ");

            break;
    }
    return 0;
}