#include <iostream>
#include <string.h>

using namespace std;

int hw(char *p) {
    char a[81];
    int n = strlen(p) - 1;
    for (int i = 0; i < strlen(p); ++i) {
        a[n] = p[i];
        n--;
    }
    if (strcmp(p, a) == 0) return 1;
    else return 0;
}

int main() {
    char a[81];
    gets(a);
    if (hw(a)) cout << "Yes" << endl;
    else cout << "No" << endl;
    for (int i = 0; i < strlen(a); ++i) {
        cout << a[i];
    }

    return 0;
}