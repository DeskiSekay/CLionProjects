/*
#include <stdio.h>

int main() {
    char array[100], ch;
    int i = 0;
    while ((ch = getchar()) != '\n') {
        array[i] = ch;
        i++;
    }
    for (int j = i - 1; j >= 0; --j) {
        printf("%c", array[j]);
    }
    return 0;
}*/


/*
#include<stdio.h>
#include<string.h>

void fun(char a[]) {
    int j = 0;
    char x[80];
    for (int i = strlen(a); i >= 0; --i) {
        x[j] = a[i];
        j++;
    }
    for (int k = 0; k <= strlen(a); ++k) {
        printf("%c", x[k]);
    }
}

int main(void) {
    char a[80];
    gets(a);
    fun(a);
    return 0;
}*/

#include<stdio.h>

int main(void) {
    int n, a[10], t;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n - 1; ++j) {
        for (int i = 0; i < n - 1 - j; ++i) {
            if (a[i] < a[i + 1]) {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        printf("%d", a[k]);
        if (k < n - 1)printf(" ");
    }
    return 0;
}