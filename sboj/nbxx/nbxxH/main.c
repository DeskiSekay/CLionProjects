#include <stdio.h>

int main() {
    unsigned int d, rd, num;
    rd = 0, num = 0;
    int s[5] = {0};
    scanf("%d", &d);
    for (int i = 0; i < 5; i++) {

        scanf("%d", &s[i]);
        if (rd <= d)
            num++;
        rd += s[i];

    }

    if (rd >= d) {
        printf("%d", num);
    } else if (rd < d) {
        printf("%d", -1);
    }

    return 0;
}