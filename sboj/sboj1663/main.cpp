#include <cstdio>
#include <cmath>

int s(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (s(n) == 0) printf("NO！");
    else printf("YES！");

    return 0;
}
