#include <iostream>
#include <string.h>

using namespace std;

void change(char *p) {

    for (int i = 0; i < strlen(p); ++i) {
        p[i] -= 32;
    }

    cout << p;
}

int main() {
    char a[81];
    cin >> a;
    change(a);
    return 0;
}