#include <iostream>

using namespace std;

char arr[20], ch;
int i = 0, num = 0;

int main() {
    while (cin.get(ch)) {
        if (ch == '\n') break;
        arr[i] = ch;
        i++;
    }
    for (int j = 0; j < i; ++j) {
        if ((isalpha(arr[j]) || isdigit(arr[j])) && arr[j + 1] == ' ') num++;
    }
    std::cout << num + 1 << std::endl;
    return 0;
}