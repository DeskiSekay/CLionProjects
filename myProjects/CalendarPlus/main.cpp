#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//平年返回1，闰年返回0
using namespace std;

int pyear[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ryear[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char weekday[7][10]={"一", "二", "三", "四", "五", "六", "日"};
int year, month;
int a = 0;  //a为1900年到year的
int b = 0;  //b为month第一周剩余

void prYear();

void printLine() {
    cout << "\n——————————————————————————" << endl;
}

void printHead() {
    cout << "\n" << endl;
    prYear();
    cout << "这是" << year << "年" << month << "月的日历——";
    printLine();
    for (int i = 0; i < 7; ++i) {
        cout << weekday[i] << "\t";
    }
    cout << "\n";
}

//判断平闰年
int cpyYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0) {
        return 0;
    } else if (year % 400 == 0 && year % 100 == 0 && year % 4 == 0) {
        return 0;
    } else {
        return 1;
    }
}

//打印平闰年
void prYear() {
    int x = cpyYear(year);
    if (x == 1) {
        cout << year << "是平年" << endl;
    } else if (x == 0) {
        cout << year << "是闰年" << endl;
    }
}

//距离1900年1月1日的
int today(int year, int month) {
    int x = cpyYear(year);
    int y = 0;

    for (int i = 1900; i < year; ++i) {
        if (x == 1) {
            a += 365;
        } else if (x == 0) {
            a += 366;
        }
    }

    for (int j = 0; j <= month - 1; ++j) {
        if (x == 1) {
            a += pyear[j];
        } else if (x == 0) {
            a += ryear[j];
        }
    }
//    cout << a << endl;
    return a;   //从1900年到month第一天总共

}

void printCalendar() {
    int x = 0;  //x获取平闰年
    today(year, month);
    b = a % 7;
    x = cpyYear(year);
    if (b == 0) {
        cout << "b=0";
        exit(0);
    }
    //打印每月前面的空格
    for (int i = 0; i < b; ++i) {
        cout << "\t";
    }
    if (x == 1) {
        for (int i = 1; i <= pyear[month - 1]; ++i) {
            cout << i << "\t";
            if ((i + b) % 7 == 0) {
                cout << "\n";
            }
        }
    } else if (x == 0) {
        for (int i = 1; i <= ryear[month - 1]; ++i) {
            cout << i << "\t";
            if (i % 7 == 0) {
                cout << "\n";
            }
        }
    }

}

int main() {

    cout << "请输入年与月：" << endl;
    scanf("%d%d", &year, &month);

    //打印格式
    printHead();
    printCalendar();
    printLine();
    cout << "\n" << endl;

    return 0;
}