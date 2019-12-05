#include <iostream>

using namespace std;
int arr[100][6];

int main() {
    int m, n, sum;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int k = 0; k < m; ++k) {
        sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[k][i];
        }
        cout << sum << endl;
    }
    return 0;
}