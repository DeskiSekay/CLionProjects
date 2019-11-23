#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char x[1000];
    int flag = 0;
    scanf("%s", x);
    n = strlen(x);
    what:
    if (x[n - 1] == x[n - 2] && x[n - 1] == '0') {
        n--;
        goto what;
    }
    if (x[0] == '-') flag = 1;
    if (flag == 1) {
        printf("-");
        if (x[n - 1] == '0') n -= 1;
        for (int m = n - 1; m >= 0; --m) {
            if (x[m] >= 48 && x[m] <= 57) printf("%c", x[m]);
        }
    } else {
        if (x[n - 1] == '0') n -= 1;
        for (int k = n - 1; k >= 0; --k) {
            if (x[k] >= 48 && x[k] <= 57) printf("%c", x[k]);
        }
    }
    /*for (i = n; i > 0; i /= 10) {
        x[j] = i % 10;
        j++;
    }
    if (flag == 1) printf("-");
    if (x[0] == 0) {
        j--;
        x[0] = x[1];
        for (int l = 1; l < j; ++l) {
            x[l] = x[l + 1];
        }
    }
    for (int k = 0; k < j; ++k) {
        if (x[0] == 0) k++;
        printf("%d", x[k]);
    }*/


    return 0;
}