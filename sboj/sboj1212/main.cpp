#include <iostream>
#include <string.h>

using namespace std;

int hw(char *p, char *q) {
    return strcmp(p, q);
}

int main() {
    char a[81], b[81];
    cin >> a;
    int j = strlen(a) - 1;
    for (int i = 0; i < strlen(a); ++i) {
        b[j] = a[i];
        j--;
    }
    if (!hw(a, b)) cout << "YES!" << endl;
    else cout << "NO!" << endl;
    return 0;
}