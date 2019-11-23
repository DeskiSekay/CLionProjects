/*
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] );

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

void Shift( char s[] ){

}

void GetString( char s[] ){

}
*/

#include<stdio.h>

int s(int a);

void w(int x, int y);

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    w(x, y);
    return 0;
}

int s(int a) {
    int b, c, s = 0;
    c = a;
    do {
        b = c % 10;
        c = c / 10;
        s = s + b * b * b;
    } while (c != 0);
    if (s == a) return 0;
}

void w(int x, int y) {
    int i;
    for (i = x; i < y; i++) {
        if (i <= 100) continue;
        if (s(i) == 0) printf("%d\n", i);
    }
}