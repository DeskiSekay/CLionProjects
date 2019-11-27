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

    int p, x = 0;
    //m->c
    for (int m = 0; m < h; ++m) {
        flag = 0;
        //c[m] 0 0 0 0 0 0 0
        //与数组d中现有的元素比较，不重复存入数组d
        //i->d
        for (p = 0; p <= m; ++p) {
            //if (d[p] == c[m]) break;
            if (c[m] == d[p]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            d[x] = c[m];
            x++;
        }
    }
    for (int l = 0; l < x; ++l) {
        printf("%d ", d[l]);
    }
    return 0;
}
