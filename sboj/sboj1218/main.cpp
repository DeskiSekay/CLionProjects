#include <iostream>

using namespace std;

void sort(int *p) {
    int t;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2 - i; ++j) {
            if (p[j] > p[j + 1]) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
    for (int k = 0; k < 3; ++k) {
        cout << p[k] << " ";
    }
}

int main() {
    int arr[3];
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    sort(arr);
    return 0;
}