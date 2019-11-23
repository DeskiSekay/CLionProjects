#include <stdio.h>

struct number {
    int sb;
    int xb;
};

int main() {
    struct number num[3];
    scanf("%d%d%d%d", &num[0].sb, &num[0].xb, &num[1].sb, &num[2].xb);
    num[2].sb = num[0].sb * num[1].sb - num[0].xb * num[1].xb;
    num[2].xb = num[0].sb * num[1].xb + num[0].xb * num[1].sb;

    printf("result is %d+%di", num[2].sb, num[2].xb);
    return 0;
}