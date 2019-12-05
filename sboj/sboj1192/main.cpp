#include <iostream>
#include <string.h>

using namespace std;

void Shift(char *p) {
    char q[81];

    int x = 0;
    for (int i = 3; i < strlen(p); ++i) {
        q[x] = p[i];
        x++;
    }
    for (int j = 0; j < 3; ++j) {
        q[x] = p[j];
        x++;
    }
    for (int k = 0; k < x; ++k) {
        cout << q[k];
    }
}

int main() {
    char a[81];
    gets(a);
    Shift(a);
    return 0;
}