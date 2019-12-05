#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main() {
    char s[81], ch;
    int t = 0;
    /*for (int j = 0; j <= 80; ++j) {
        cin >> ch;
        if (ch == '\n') break;
        s[j] = ch;
        //cout << s << endl;
    }*/
    while (cin.get(ch)) {
        if (ch == '\n') break;
        else s[t] = ch;
        t++;
    }

    for (int i = 0; i < strlen(s); ++i) {
        //cout << s << endl;
        if (s[i] >= 'A' && s[i] <= 'Z') {
            switch (s[i]) {
                case 'A':
                    s[i] = 'Z';
                    break;
                case 'B':
                    s[i] = 'Y';
                    break;
                case 'C':
                    s[i] = 'X';
                    break;
                case 'D':
                    s[i] = 'W';
                    break;
                case 'E':
                    s[i] = 'V';
                    break;
                case 'F':
                    s[i] = 'U';
                    break;
                case 'G':
                    s[i] = 'T';
                    break;
                case 'H':
                    s[i] = 'S';
                    break;
                case 'I':
                    s[i] = 'R';
                    break;
                case 'J':
                    s[i] = 'Q';
                    break;
                case 'K':
                    s[i] = 'P';
                    break;
                case 'L':
                    s[i] = 'O';
                    break;
                case 'M':
                    s[i] = 'N';
                    break;
                case 'N':
                    s[i] = 'M';
                    break;
                case 'O':
                    s[i] = 'L';
                    break;
                case 'P':
                    s[i] = 'K';
                    break;
                case 'Q':
                    s[i] = 'J';
                    break;
                case 'R':
                    s[i] = 'I';
                    break;
                case 'S':
                    s[i] = 'H';
                    break;
                case 'T':
                    s[i] = 'G';
                    break;
                case 'U':
                    s[i] = 'F';
                    break;
                case 'V':
                    s[i] = 'E';
                    break;
                case 'W':
                    s[i] = 'D';
                    break;
                case 'X':
                    s[i] = 'C';
                    break;
                case 'Y':
                    s[i] = 'B';
                    break;
                case 'Z':
                    s[i] = 'A';
                    break;
            }
        }
    }
    for (int j = 0; j < t; ++j) {
        cout << s[j];
    }
    return 0;
}