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
    int l = 0, b = 0, d = 0, o = 0;
    for (int i = 0; i < MAXS; ++i) {
        if (s[i] > 'a' && s[i] < 'z') l++;
        else if (s[i] > 'A' && s[i] < 'Z') l++;
        else if (s[i] == '\n' || s[i] == 32) b++;
        else if (s[i] >= '0' && s[i] <= '9') d++;
        else o++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", l, b, d, o);
}