/*
#include <stdio.h>
#include <string.h>

#define MAXN 20

void strmcpy(char *t, int m, char *s);

void ReadString(char s[]);

int main() {
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    for (int i = 0; i < strlen(s); ++i) {
        printf("%c", s[i]);
    }

    return 0;
}

void strmcpy(char *t, int m, char *s) {
    int x = 0;
    if (m > strlen(t)) {
        s[0] = '\0';
        return;
    }
    for (int i = m - 1; i < strlen(t); ++i) {
        s[x] = t[i];
        x++;
    }
}

void ReadString(char s[]) {
    gets(s);
}
*/


#include <iostream>
#include <string.h>

using namespace std;

void strmcpy(char *s, char *arr, int n) {
    int x = 0;
    for (int i = n - 1; i < strlen(arr); ++i) {
        s[x] = arr[i];
        x++;
    }
}

int main() {
    char arr[20], s[20];
    char n;
    gets(&n);
    gets(arr);
    strmcpy(s, arr, n - 48);
    for (int i = 0; i < strlen(s); ++i) {
        cout << s[i];
    }
}