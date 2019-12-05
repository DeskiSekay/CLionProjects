#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main() {
    char s[81], ch;
    int t = 0;

    while (cin.get(ch)) {
        if (ch == '\n') break;
        else s[t] = ch;
        t++;
    }

    for (int i = t - 1; i >= 0; --i) {
        cout << s[i];
    }
    /*for (int j = 0; j < t; ++j) {
        cout << s[j];
    }*/
    return 0;
}