#include <iostream>
#include <string.h>

using namespace std;

void del(char *p, char s) {
    //cout << p;
    for (int i = 0; i < strlen(p); ++i) {
        if (p[i] == s) p[i] = '#';
    }
    for (int j = 0; j < strlen(p); ++j) {
        if (p[j] != '#') cout << p[j];
    }
}

int main() {
    char s, a[81];
    gets(&s);
    gets(a);
    del(a, s);
    return 0;
}