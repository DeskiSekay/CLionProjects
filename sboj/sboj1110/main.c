#include <stdio.h>

int main() {
    char c;
    int a, b, s = 0;

    scanf("%d", &a);
    while ((c = getchar()) != '=') {
        scanf("%d", &b);
        if (c == "/" && b == 0) {
            printf("ERROR");
            return 0;
        }
        switch (c) {
            case '+':
                s = a + b;
                break;
            case '-':
                s = a - b;
                break;
            case '*':
                s = a * b;
                break;
            case '/':
                s = a / b;
                break;
            default:
                printf("ERROR\n");
                return 0;


        }
        a = s;
        /*if (c == '+') { s = a + b; }
        if (c == '-') { s = a - b; }
        if (c == '*') { s = a * b; }
        if (c == '/') { s = a / b; }
        else {
            printf("ERROR");
            return 0;
        }*/

    }
    printf("%d", s);
    return 0;
}

/*
#include <stdio.h>

int main(void) {
    int a, b;
    int sum = 0;
    char ch;
    scanf("%d", &a);
    while ((ch = getchar()) != '=') {
        scanf("%d", &b);
        if (ch == '/' && b == 0) {
            printf("ERROR\n");
            return 0;
        }
        switch (ch) {
            case '+' :
                sum = a + b;
                break;
            case '-' :
                sum = a - b;
                break;
            case '*' :
                sum = a * b;
                break;
            case '/' :
                sum = a / b;
                break;
            default :
                printf("ERROR\n");
                return 0;
        }
        a = sum;
    }
    printf("%d", a);
    return 0;
}
*/
