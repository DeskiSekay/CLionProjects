#include <iostream>

using namespace std;
char arr[81], ch;

int main() {
    cin >> arr;
    ch = arr[0];
    int i;
    for (i = 0; ch != '\0'; ++i) {
        ch = arr[i];
        switch (ch) {
            case 'A':
                arr[i] = 'Z';
                break;
            case 'B':
                arr[i] = 'Y';
                break;
            case 'C':
                arr[i] = 'X';
                break;
            case 'D':
                arr[i] = 'W';
                break;
            case 'E':
                arr[i] = 'V';
                break;
            case 'F':
                arr[i] = 'U';
                break;
            case 'G':
                arr[i] = 'T';
                break;
            case 'H':
                arr[i] = 'S';
                break;
            case 'I':
                arr[i] = 'R';
                break;
            case 'J':
                arr[i] = 'Q';
                break;
            case 'K':
                arr[i] = 'P';
                break;
            case 'L':
                arr[i] = 'O';
                break;
            case 'M':
                arr[i] = 'N';
                break;
            case 'N':
                arr[i] = 'M';
                break;
            case 'O':
                arr[i] = 'L';
                break;
            case 'P':
                arr[i] = 'K';
                break;
            case 'Q':
                arr[i] = 'J';
                break;
            case 'R':
                arr[i] = 'I';
                break;
            case 'S':
                arr[i] = 'H';
                break;
            case 'T':
                arr[i] = 'G';
                break;
            case 'U':
                arr[i] = 'F';
                break;
            case 'V':
                arr[i] = 'E';
                break;
            case 'W':
                arr[i] = 'D';
                break;
            case 'X':
                arr[i] = 'C';
                break;
            case 'Y':
                arr[i] = 'B';
                break;
            case 'Z':
                arr[i] = 'A';
                break;
        }
    }
    /*for (int j = 0; j < i; ++j) {
        cout << arr[j];
    }*/
    cout << arr;
    return 0;
}