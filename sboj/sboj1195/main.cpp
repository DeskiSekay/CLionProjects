#include <iostream>
#include <string.h>

using namespace std;

void arrs(int *p, int n, int m) {
    int x = 0;
    int a[n];
    for (int i = n - m; i < n; ++i) {
        a[x] = p[i];
        x++;
    }
    for (int j = 0; j < n - m; ++j) {
        a[x] = p[j];
        x++;
    }
    for (int k = 0; k < n; ++k) {
        cout << a[k] << " ";
    }
}

int main() {
    int m, n;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    arrs(arr, n, m);
    return 0;
}