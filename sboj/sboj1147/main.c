/*
#include <stdio.h>

int a[25], b[25], c[50], d[50], n1, n2, flag, h = 0;

int main() {

    scanf("%d", &n1);
    for (int i = 0; i < n1; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    for (int j = 0; j < n2; ++j) {
        scanf("%d", &b[j]);
    }


    for (int k = 0; k < n1; ++k) {
        flag = 0;
        for (int i = 0; i < n1; ++i) {
            if (a[k] == b[i]) flag = 1;
        }
        if (flag == 0) {
            c[h] = a[k];
            h++;
        }
    }

    for (int k = 0; k < n2; ++k) {
        flag = 0;
        for (int i = 0; i < n2; ++i) {
            if (b[k] == a[i]) flag = 1;
        }
        if (flag == 0) {
            c[h] = b[k];
            h++;
        }
    }
    int p = 0;
    for (int m = 0; m < h; ++m) {
        flag = 0;
        for (int i = 0; i < h; ++i) {
            if (c[i] == c[m]) {
                d[m] = c[m];
            }
        }
        for (int l = 0; l < p; ++l) {
            printf("%d ", d[l]);
        }
    }
    return 0;
}
*//*


#include <stdio.h>

int main() {
    int n, num, fee[3], package = 0, price = 0;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++) {
        num = 1;
        scanf("%d%d", &package, &price);
        while (num * package <= n) num++;
        fee[i] = price * num;
        printf("fee=%d,i=%d\n", fee[i], i);
    }
    int choice = 0;
    for (int i = 0; i < 2; i++) {
        if (fee[i] < fee[i + 1]) choice = i;
    }
    //printf("%d",fee[choice]);
    return 0;
}*/
