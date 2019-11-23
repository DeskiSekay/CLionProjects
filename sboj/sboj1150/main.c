#include <stdio.h>

int pYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int rYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int aDay = 0;

int leapYear(int year) {//1是平年,0是闰年
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 0;
    }
    return 1;
}

int main() {
    int year, month, day;
    scanf("%4d/%2d/%2d", &year, &month, &day);
    if (leapYear(year) == 1) {
        for (int i = 0; i < month - 1; ++i) {
            aDay += pYear[i];
        }
        aDay += day;
    } else if (leapYear(year) == 0) {
        for (int i = 0; i < month - 1; ++i) {
            aDay += rYear[i];
        }
        aDay += day;
    }
    printf("%d", aDay);
    return 0;
}