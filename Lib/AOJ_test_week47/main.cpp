/*
#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);

}

int main() {

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << fib(i) << " ";
    }
    return 0;
}*/



/*
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a, b, t = 1;
    cin >> a >> b;
    for (int i = 1; i <= b; ++i) {
        t *= a;
    }
    if (t < 100) cout << "0" << t;
    else if (t >= 100) printf("%3d", t);
    return 0;
}
*/



#include <stdio.h>

int main() {
    int a, b, c, d, flag;

    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++) {

        printf("%d=", i);
        c = i, d = 2, flag = 1;

        while (c > d) {

            if (c % d == 0) {
                if (flag != 0) {
                    printf("%d", d);
                    flag = 0;
                } else {
                    printf("*");
                    printf("%d", d);
                }

                c /= d;
            } else
                d++;

        }

        if (flag == 0) printf("*");

        printf("%d\n", c);

    }
    return 0;
}


/*
#include <stdio.h>
#include <math.h>

void _10to2(int d) {
    if (d / 2)
        _10to2(d / 2);
    printf("%d", d % 2);
}

int _2to10(long long n) {
    int sjz = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        sjz += remainder * pow(2, i);
        ++i;
    }
    return sjz;
}

int main() {
    long long a, b, num1, num2, result = 0;
    char op;
    scanf("%lld", &num1);
    getchar();
    op = getchar();
    scanf("%lld", &num2);
    a = _2to10(num1);
    b = _2to10(num2);
    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    _10to2(result);

    return 0;
}
*/