#include <stdio.h>

int sum_all(int number);

void PrintPN(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    if (sum_all(m) == m) printf("%d is a perfect number\n", m);
    if (sum_all(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int sum_all(int number) {
    int a[1000], i, j = 0, sum = 0;

    if (number == 1)
        return 1;

    for (i = 1; i < number; i++)
        if (number % i == 0) {
            a[j++] = i;
        }

    for (i = 0; i < j; i++)
        sum += a[i];

    if (sum == number)
        return 1;
    return 0;
}

void PrintPN(int m, int n) {
    int i, j, l, a[1000], count = 0;
    int k = 0;
    if (m == 1) {
        printf("%d = %d\n", m, m);
        m += 1;
    }

    for (i = m; i <= n; i++) {
        if (sum_all(i) == 1) {
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    a[k++] = j;
                }
            }
            printf("%d = ", i);
            for (l = 0; l < k - 1; l++) {
                printf("%d + ", a[l]);
                count++;
            }

            printf("%d", a[l]);
            if (i <= count) printf("\n");

            k = 0;
        }
    }
}

