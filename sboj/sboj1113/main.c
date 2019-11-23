#include <stdio.h>
#include <math.h>

int search(int n);

int main() {
    int number;

    scanf("%d", &number);
    printf("count=%d\n", search(number));

    return 0;
}

int search(int n) {
    int k = 0, p = 0;
    int x[3];

    for (int i = 101; i <= n; ++i) {
        if (sqrt(i) != (int) sqrt(i)) continue;
        x[0] = i % 10;
        x[1] = i / 10 % 10;
        x[2] = i / 100;
        if ((x[0] == x[1] && x[0] != x[2]) || (x[0] == x[2] && x[0] != x[1]) || (x[1] == x[2] && x[0] != x[1])) {
            k++;
            //printf("%d ", i);
        }
    }
    return k;


}
