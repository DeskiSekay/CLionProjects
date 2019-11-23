#include <iostream>

using namespace std;

string type_in;
int num_do;
int x;

void judge(int &a) {
    cout << "a=" << a << endl;
    if (cin.fail()) {
        cout << "请重新输入。" << endl;
        cin.clear();
        x = 0;
    } else {
        x = 1;
    }
}

int main() {
    cout << "请输入您想被夸赞的话：" << endl;
    cin >> type_in;
    do {
        x = 0;
        cout << "请输入您想被夸赞次数：" << endl;
        cin >> num_do;
        judge(num_do);
        cout<<"您需要的夸赞是："<<endl;
        cout<<"请重新输入您需要的夸赞次数："<<endl;
        cin>>num_do;
    } while (0 == x);

    for (int i = 0; i < num_do; i = i + 1) {
        cout << type_in;
        cout << "\t已完成" << i + 1 << "次";
        cout << "\t剩余" << num_do - i - 1 << "次。" << endl;
    }

}