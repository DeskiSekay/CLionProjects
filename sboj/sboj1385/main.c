/*
#include <stdio.h>

int main() {
    char c[100];
    int i;
    for (i = 0; i >= 0; ++i) {
        scanf("%c", &c[i]);
        if (c[i] == '\n') {
            break;
        }
    }
    printf("Hello,");
    for (int j = 0; j < i; ++j) {
        printf("%c", c[j]);
    }
    printf("!");
    return 0;
}*/
#include <stdio.h>

int main() {
    char c[100];
    int i;
    for (i = 0; i >= 0; ++i) {
        scanf("%c", &c[i]);
        if (c[i] == '\n') {
            break;
        }
    }
    //printf("Hello,");
    for (int j = 0; j < i; ++j) {
        printf("%c", c[j]);
    }
    //printf("!");
    return 0;
}