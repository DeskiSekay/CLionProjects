#include <iostream>
#include <string.h>

using namespace std;

int sstrcmp(char *p1, char *p2) {
    for (int i = 0; i < strlen(p1); ++i) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
        }
    }
    return 0;
}

int main() {
    char a[81], b[81];

    cout << "请输入两行字符：" << endl;

    gets(a);
    gets(b);

    cout << "两个字符串比较结果为：" << sstrcmp(a, b) << "." << endl;
    return 0;
}