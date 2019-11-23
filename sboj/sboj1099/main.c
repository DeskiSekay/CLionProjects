#include <stdio.h>

int CountDigit(int number, int digit);

int main() {
    int number, digit;
    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d:%d\n", digit, number, CountDigit(number, digit));
    return 0;

}

int CountDigit(int number, int digit) {
    if (number < 0) number = -number;
    int a, c = 0;
    for (int i = number; i > 0; i /= 10) {
        a = i % 10;
        if (a == digit) {
            c++;
        }
    }
    return c;
}
