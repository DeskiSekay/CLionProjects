/*

#include <stdio.h>

int fib(int n);

void PrintFN(int m, int n);

int main() {
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}

void PrintFN(int m, int n) {
    int a[100], num, i, k = 0;
    if (m > n) {
        int x;
        x = m;
        m = n;
        n = x;
    }
    for (i = 1; i >= 0; ++i) {
        num = fib(i);
        if (num >= m && num <= n) {
            a[k] = num;
            k++;
        }
        if (num > n) break;

    }
    for (int j = 0; j < k; ++j) {
        printf("%d", a[j]);
        if (j < k - 1) printf(" ");
    }

}

int fib(int n) {
    int f, f1 = 1, f2 = 0, t;

    if (n == 1) return 1;
    for (int i = 1; i < n; ++i) {
        f = f1 + f2;
        t = f;
        f2 = f1;
        f1 = t;
    }
    return f;
}
*/


#include <stdio.h>

int fib(int n);

void PrintFN(int m, int n);

int main() {
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}

int fib(int n) {
    int s;
    if (n == 1 || n == 2) return 1;
    else s = fib(n - 1) + fib(n - 2);
    return s;
}

void PrintFN(int m, int n) {
    int array[100];
    int k, i = 0;
    for (k = 1; k > 0; ++k) {
        if (fib(k) >= m && fib(k) <= n) {
            array[i] = fib(k);
            i++;
        }
        if (fib(k) > n) break;
    }
    if (i == 0) printf("No Fibonacci number");
    for (int l = 0; l < i; ++l) {
        printf("%d", array[l]);
        if (l < i - 1) printf(" ");
    }
}