#include <stdio.h>

int pyear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ryear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leapYear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return 1;
    else return 0;
}

int day_of_year(y, m, d) {
    int day = 0;
    if (leapYear(y) == 1) {
        for (int i = 0; i < m - 1; ++i) {
            day += ryear[i];
        }
    } else {
        for (int i = 0; i < m - 1; ++i) {
            day += pyear[i];
        }
    }
    day += d;
    return day;
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);

    printf("%d", day_of_year(y, m, d));
    return 0;
}