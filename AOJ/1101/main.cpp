#include <iostream>

using namespace std;

int main() {
    int n = 0, sum;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    for (int j = 0; j < n; ++j) {
        sum = a[j] + b[j];
        cout << sum % 100 << endl;
    }
    return 0;
}