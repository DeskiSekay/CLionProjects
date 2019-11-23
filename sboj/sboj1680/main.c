#include <stdio.h>
#include <string.h>

int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;

int main() {
    char a[1000];
    scanf("%s", a);
    int n = strlen(a);
    for (int i = 0; i < n; ++i) {
        switch (a[i]) {
            case 48:
                zero++;
                break;
            case 49:
                one++;
                break;
            case 50:
                two++;
                break;
            case 51:
                three++;
                break;
            case 52:
                four++;
                break;
            case 53:
                five++;
                break;
            case 54:
                six++;
                break;
            case 55:
                seven++;
                break;
            case 56:
                eight++;
                break;
            case 57:
                nine++;
                break;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", zero, one, two, three, four, five, six, seven, eight, nine);
}