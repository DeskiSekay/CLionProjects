#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "for循环案例：" << endl;
    for (int i = 0; i < n; ++i) {
        cout << i << " ";
    }
    cout << '\n';
    cout << "while循环案例：" << endl;
    int c = 0;
    while (c < n) {
        cout << c << " ";
        c++;
    }
    cout << '\n';
    cout << "do while循环案例：" << endl;
    c = 0;
    do {
        cout << c << " ";
        c++;
    } while (c < n);
}

