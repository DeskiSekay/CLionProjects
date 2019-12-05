#include <iostream>

using namespace std;

int main() {
    char s[81], ch;
    int i = 0, num = 0;
    while (cin.get(ch)) {
        if (ch == '\n') break;
        else s[i] = ch;
        i++;
    }
    for (int j = 0; j < i; ++j) {
        if (isupper(s[j]) && s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U') num++;
    }
    cout << num;
    return 0;
}