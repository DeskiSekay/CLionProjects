#include <iostream>
#include <string>

using namespace std;

int length(char *p) {
    int i = 0;
    while (p[i] != '\0') i++;
    return i;
}

int main() {
    char a[81];
    cout << "请输入一个字符串:" << endl;
    gets(a);

    std::cout << "此字符串的长度为 " << length(a) << ".";
    return 0;
}