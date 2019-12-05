#include <iostream>

using namespace std;

void print_month(char (*p)[15]) {
    int mon;
    cin >> mon;
    cout << mon << " 月的英文是 ";
    cout << *(p + mon - 1) << "." << endl;
}

int main() {
    char mon[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                        "October", "November", "December"};
    cout << "请输入月份号：" << endl;
    print_month(mon);
    return 0;
}