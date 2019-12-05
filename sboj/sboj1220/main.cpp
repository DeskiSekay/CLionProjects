#include <iostream>

using namespace std;

void spin(int (*p)[3]) {
    int t;
    cout << "转置后的矩阵为：" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << p[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[3][3];
    cout << "请按行输入3*3矩阵，元素之间以空格或回车符分隔：" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }
    spin(a);
    return 0;
}