#include <iostream>

using namespace std;
int a[101][101] = {0};
int r[10], rj = 0;

int main() {
    int n, k;
    cin >> n;
    while (n != 0) {

        cin >> k;
        for (int j = 0; j < k; j++) {
            for (int t = 0; t < k; t++) {
                cin >> a[j][t];
            }
        }
        for (int x = 0; x < k; x++) {
            for (int j = 0; j < x; j++) {
                if (a[x][j] != 0) {
                    r[rj] = 1;
                    break;
                }
            }
        }
        rj++;
        n--;
    }
    for (int i = 0; i < rj; ++i) {
        if (r[i] == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
/*
2
3
1 2 3
0 1 2
0 0 1
3
1 2 3
0 1 2
0 0 1*/
