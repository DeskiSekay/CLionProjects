/*
#include <iostream>

using namespace std;

void subfun(int n) {
    int x = 0, arr[n];
    //p = arr[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << n << " ";
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    int args[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> args[i][j];
        }
    }

    subfun(3);
    return 0;
}
*/


//#include <cstdio>
#include <iostream>

using namespace std;

int print(int m, int n, int (*a)[100])     //用括号将指针括起来
{
    int max = 0, t;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        //if (max < a[i][0]) max = a[i][0];
    }
    return max;
}

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][100];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    cout << "二维数组中的最大值是" << print(m, n, a);
    return 0;
}