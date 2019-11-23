#include<stdio.h>

int main() {
    int num, n, in;
    int over = 0;
    int count = 0;
    scanf("%d %d", &num, &n);
    do {
        scanf("%d", &in);
        count++;
        if (in < 0) {
            printf("Game Over\n");
            over = 1;
        } else if (in > num) {
            printf("Too big\n");
        } else if (in < num) {
            printf("Too small\n");
        } else {
            if (count == 1) {
                printf("Bingo!\n");
            } else if (count <= 3) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }
            over = 1;
        }
        if (count == n) {
            if (over == 0) {
                printf("Game Over\n");
                over = 1;
            }
        }
    } while (over == 0);
    return 0;
}

