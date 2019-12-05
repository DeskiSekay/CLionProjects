#include <iostream>
#include <string.h>
//实参是地址，则形参为指针
using namespace std;

void sort(char (*p)[81]) {
    char arr[81];
    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 5; ++i) {
            if (p[i][0] > p[i + 1][0]) {
                strcpy(arr, p[i + 1]);
                strcpy(p[i + 1], p[i]);
                strcpy(p[i], arr);
            }
        }
    }
    cout << "After sorted:" << endl;
    for (int k = 0; k < 5; ++k) {
        cout << p[k] << endl;
    }
}

int main() {
    char c[5][81];
    for (int i = 0; i < 5; ++i) {
        cin >> c[i];
    }
    sort(c);
    return 0;
}