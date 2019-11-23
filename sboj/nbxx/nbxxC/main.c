#include <stdio.h>

int main() {
    unsigned int num, month, a, b, temp;
    a = 0;
    b = 1;//总共对数
    month = 1;//需要月数
    scanf("%d", &num);
    do{
        temp = a + b;
        a = b;
        b = temp;
        month++;
    }
    while (temp < num);

    printf("%d", month);
    return 0;
}