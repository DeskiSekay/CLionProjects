#include <iostream>

using namespace std;

int main() {
    int num[5];
    int *p, in, t;
    for (int i = 0; i < 5; ++i) {
        cin >> in;
        p = &in;
        num[i] = *p;
    }
    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 4 - j; ++i) {
            if (num[i] > num[i + 1]) {
                t = num[i];
                num[i] = num[i + 1];
                num[i + 1] = t;
            }
        }
    }
    for (int k = 0; k < 5; ++k) {
        cout << num[k] << " ";
    }
    return 0;
}