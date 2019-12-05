#include <iostream>

using namespace std;

int main() {
    int arr[1000], flag = 0, i = 0, temp = -1000000;
    /*for (i = 0; i >= 0; ++i) {
        cin >> arr[i];
        if (arr[i] == EOF) break;
    }
    for (int j = 0; j < i - 1; ++j) {
        for (int k = 0; k < j - 1 - i; ++k) {
            if (arr[i] > arr[i + 1]) flag = 1;
        }
    }*/
    while (cin >> arr[i]) {
        i++;
        if (arr[i] == EOF)break;
    }
    for (int j = 0; j < i; ++j) {
        if (arr[i] > arr[i + 1]) {}
        flag = 1;
        break;
    }
    if (flag == 1)
        cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}