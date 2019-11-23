#include <stdio.h>

int main() {
    int a[4][4];
    //int i;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("The former square:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }



    printf("向左旋转90度输出--");
    printf("The later square two:\n");
    for (int l = 3; l >= 0; --l) {
        for (int i = 0; i < 4; ++i) {
            printf("%-4d", a[i][l]);
            //printf("l=%d,i=%d\n", l, i);
        }
        printf("\n");
    }



    printf("横向输出改纵向输出--");
    printf("The later square one:\n");
    for (int k = 0; k < 4; ++k) {
        for (int i = 0; i < 4; ++i) {
            printf("%-4d", a[i][k]);
        }
        printf("\n");
    }
    return 0;
}