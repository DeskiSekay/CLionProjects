#include <stdio.h>

#define MAXS 15

void StringCount(char s[]);

void ReadString(char s[]); /* 由裁判实现，略去不表 */
int main() {
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount(char s[]) {
    int letter = 0;
    for (int i = 0; i < MAXS; ++i) {
        if (s[i] > 'a' && s[i] < 'z') {
            letter++;
        }
    }
    printf("%d", letter);
}