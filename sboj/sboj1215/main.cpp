#include <iostream>

using namespace std;

void strcpy(char *s, char *t, int m, int l) {
    int j = 0;
    for (int i = m - 1; i < l; ++i) {
        s[j] = t[i];
        j++;
    }
}

int main() {
    char a[81], b[81], ch;
    int i = 0, m;
    while (cin.get(ch)) {
        if (ch == '\n') break;
        a[i] = ch;
        i++;
    }
    cin >> m;
    strcpy(b, a, m, i);
    for (int j = 0; j <= i - m; ++j) {
        cout << b[j];
    }
    return 0;
}