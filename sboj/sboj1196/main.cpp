#include <iostream>

using namespace std;

void CountOff(int n, int m, int *arr) {
    int j = 0, k = 0, x = 0, flag = 0;
    int s[20];
    for (int i = 0; i < n; ++i) {
        s[i] = i + 1;
    }
    while (j < n) {
        if (s[x] != 0) flag++;
        if (flag == m) {
            arr[k] = s[x];
            flag = 0;
            k++;
            s[x] = 0;
            j++;
        }
        x++;
        if (x == n) x = 0;
    }
}

int main() {
    int a[20], n, m;
    cin >> n >> m;
    CountOff(n, m, a);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}