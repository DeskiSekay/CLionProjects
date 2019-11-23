/*
#include <stdio.h>

int a[11];
int m = 0;
int x1[11], x2[11];
int j = 0, x = 1;

int dan() {


    double s = j / 2.0;//得到中间数
    for (int k = 1; k < s; ++k) {
        x1[k] = a[k];
    }
    for (int l = j; l > s + 1; --l) {
        x2[x] = a[l];
        x++;
    }
    for (int i1 = 1; i1 < s; ++i1) {
        if (x1[i1] != x2[i1]) {
            return 1;
        }
    }
    return 0;

}

int shuang(unsigned long long n) {
    double s = j / 2.0;
}

int main() {
    unsigned long long n, i;
    int flag = 0;
    scanf("%lld", &n);
    for (i = n; i >= 1; i /= 10) {
        j++;
        a[j] = i % 10;
    }
    if (j % 2 != 0) {
        flag = dan(n);
    }
    if (j % 2 == 0) {
        flag = shuang(n);
    }
    if (flag == 0) printf("Yes");
    else printf("No");
}

*/


#include <stdio.h>

int main() {
    unsigned long long n, i;
    int num[15];
    scanf("%lld", &n);
    int j = 0, l = 0, flag = 0;
    for (i = n; i >= 1; i /= 10) {
        num[j] = i % 10;
        j++;
    }
    for (int k = j - 1; k >= 0; --k) {
        if (num[k] != num[l]) {
            flag = 1;
            break;
        }
        l++;
    }
    if (flag == 1) printf("No");
    else printf("Yes");
    return 0;
}