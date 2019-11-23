#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int year, month, day, type, num_mon;
int ryear[12]{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//闰年每月天数
int pyear[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//平年每月天数
char weekday[7][10] = {"一", "二", "三", "四", "五", "六", "日"};

//首尾layout
void printStar() {
    cout << "\n" << "--------------------------" << endl;
}

void printHead() {
    cout << "\t\tCalender\t\t\t";
    printStar();
    for (int i = 0; i < 7; ++i) {
        cout << weekday[i] << "\t";
    }
    cout << "\n";
}

//获取当前日期
void printTime() {
    time_t t = time(0);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y/%m/%d/%A 本年第%j天", localtime(&t));
    puts(tmp);
}

//判断平闰年
int cpr_year(int year) {
    int four, fhundred;
    //能被4和400整除的是闰年；取余数
    four = year % 4;
    fhundred = year % 400;
    if (four == 0 || fhundred == 0) {
        return 1;//闰年返回1
    } else {
        return 0;//平年返回0
    }
}

//判断距1900年的天数
int today(int year, int month) {
    int a, b;
    int left = 0;
    a = 0;
    b = cpr_year(year);
    for (int j = 1900; j < year; ++j) {
        if (cpr_year(j) == 1) {
            a += 366;
        } else if (cpr_year(j) == 0) {
            a += 365;
        }
    }
    left = a % 7;

    if (b == 1) {
        for (int i = 0; i < month - 1; ++i) {
            num_mon += ryear[i];
        }
    } else if (b == 0) {
        for (int i = 0; i < month - 1; ++i) {
            num_mon += pyear[i];
        }
    }
    num_mon += left;
    return num_mon;

}

//打印日历
void printCalendar() {
    int a = num_mon % 7;
    int b = cpr_year(year);
    for (int i = 0; i < a; ++i) {
        cout << "\t";
    }
    if (b == 0) {
        for (int i = 1; i <= pyear[month - 1]; ++i) {
            cout << i << "\t";
            if ((i + num_mon) % 7 == 0) {
                cout << "\n";
            }
        }
    }
}

//日历主体
void whole() {
    cout << "请输入年与月：" << endl;
    scanf("%d%d", &year, &month);
    printHead();
    today(year, month);
    printCalendar();
    printStar();
    printTime();
}


int main() {
    whole();
    return 0;
}

