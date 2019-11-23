#include <iostream>

using namespace std;

//价格目录在func1()中
//货物种类
int num_all = 5;
//资金数目
float have_all = 1500;
float have_final;
//折扣
float discount = 6;

float total;
int cho;

void pay();

void judge(int &cho) {

    float price[num_all];
    price[0] = 1000;
    price[1] = 1500;
    price[2] = 2000;
    price[3] = 2300;
    price[4] = 2500;

    switch (cho) {
        case 1:
            total = price[0];
            break;
        case 2:
            total = price[1];
            break;
        case 3:
            total = price[2];
            break;
        case 4:
            total = price[3];
            break;
        case 5:
            total = price[4];
            break;
        default:
            total = 0;
    }
}

void pay() {

    cout << "请输入折扣：";
    cin >> discount;
    cout << "输入的折扣是：" << discount << endl;
    if (cin.fail()) {
        cout << "无效输入代表您不使用折扣！" << endl;
        discount = 10;
    } else if (discount < 0 || discount > 10) {
        cout << "无效输入代表您不使用折扣！" << endl;
        discount = 10;
    } else {
        cout << "总共优惠" << total - discount * total * 0.1 << "元。" << endl;
    }
    total = total * 0.1 * discount;

    if (total > have_all) {
        cout << "您的余额不足!" << endl;
    } else {
        cout << "购买成功！" << endl;
        have_final = have_all - total;
        cout << "余额：" << have_final << endl;
    }

}

void func1(int &x) {

    int price[num_all];

    price[0] = 1000;
    price[1] = 1500;
    price[2] = 2000;
    price[3] = 2300;
    price[4] = 2500;



    //计算
    judge(cho);
    cout << "总价是：" << total << endl;

}


int main() {
    int x = 0;

    do {

        char y;
        //列出物品
        cout << "您的账户余额为" << have_all << "元。" << endl;
        cout << "请选择物品：" << endl;
        cout << "1：物品1\t\t2：物品2\t\t3：物品3" << endl;
        cout << "4：物品4\t\t5：物品5" << endl;
        //选择物品
        cin >> cho;

        if (cin.fail()) {
            cout << "Error!Please retype." << endl;
            cin.clear();
            y = cin.get();
            cout << "输入的是：" << y << "，请重新输入！" << endl;
            x = 0;
        } else if (cho < 1 || cho > num_all) {
            cout << cho << "号物品暂时无货，亲再等等~" << endl;
        } else {
            cout << "Hold on please..." << endl;
            func1(x);
            x = 1;
            pay();
        }

    } while (x == 0);
}


