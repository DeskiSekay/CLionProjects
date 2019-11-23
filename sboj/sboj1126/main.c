
#include <stdio.h>

double jc(double n) {
    double s = 1;
    for (int i = 1; i <= n; ++i) {
        s *= i;
    }
    return s;
}

double sum(double n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += jc(i);
    }
    return sum;
}

int main() {
    double n;
    scanf("%lf", &n);
    printf("%lf", sum(n));
    return 0;
}

/*
#include <stdio.h>

int min = 0, max = 0;

int h(int m, int n) {
    int t1 = m, t2 = n;

    for (int i = 2; i < m; ++i) {
        if (m % i == 0 && n % i == 0) {
            max = i;
        }
    }
    if (t1 < t2) {
        int t;
        t = t1;
        t1 = t2;
        t2 = t;
    }
    for (int j = t1; j > 0; ++j) {
        if (j % t1 == 0 && j % t2 == 0) {
            min = j;
            break;
        }
    }
    return (max, min);
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    h(m, n);
    printf("最大公约数为%d, 最小公倍数为%d", max, min);
    return 0;
}*/
