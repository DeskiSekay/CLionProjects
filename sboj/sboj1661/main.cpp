#include <iostream>

using namespace std;

int main() {

    int n, c = 1;
    cin >> n;
    for (int i = n; i > 0; --i) {
        c *= i;
    }
    cout << c;
    return 0;
}