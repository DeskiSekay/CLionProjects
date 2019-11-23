/*
#include <stdio.h>

int main() {
    int a[4][4];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    */
/*for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }*//*

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            printf("%d ", a[i][k]);
        }
        printf("\n");
    }


    return 0;
}*/

/*
#include <stdio.h>

int main() {
    double a[100];
    double avg, min, max, sum = 0, t;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    max = a[0];
    for (int j = 0; j < n; ++j) {
        if (a[j] > max) max = a[j];
    }
    min = a[0];
    for (int k = 0; k < n; ++k) {
        if (a[k] < min) min = a[k];
    }
    avg = sum / n;
    printf("average = %.2lf\n"
           "max = %.2lf\n"
           "min = %.2lf", avg, max, min);
    return 0;
}*/

/*
#include <stdio.h>

void swap(int *p, int *q) {

    int temp;

    temp = *p;

    *p = *q;

    *q = temp;

}

int main(void) {

    int a = 10, b = 20;

    swap(&a, &b);

    printf("交换后的值为\n");

    printf("a=%d,b=%d\n", a, b);

    return 0;

}
*/


/*
#include <stdio.h>

int main() {
    int n;
    int a[10];
    //int b[10];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    */
/*for (int j = 0; j < n; ++j) {
        scanf("%d", &b[j]);
    }
    for (int k = 0; k < n; ++k) {
        printf("%d ", b[k]);
    }*//*

    //printf("\n");
    for (int l = n - 1; l >= 0; --l) {
        printf("%d ", a[l]);
    }
    return 0;

}*/



/*
#include <stdio.h>

int main() {
    int n[5];
    int t;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &n[i]);
    }
    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i <= 4 - j; ++i) {
            if (n[j] < n[j + 1]) {
                t = n[j + 1];
                n[j + 1] = n[j];
                n[j] = t;
            }
        }
    }
    for (int k = 0; k < 5; ++k) {
        printf("%d ", n[k]);
    }

}*/

#include <stdio.h>

int main() {
    printf("C\n"
           "h\n"
           "i\n"
           "n\n"
           "a");
    return 0;

}