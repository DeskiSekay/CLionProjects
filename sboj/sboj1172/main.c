#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000];
    scanf("%s", ch);
    int n = strlen(ch), j = n - 1, flag = 1;
    for (int i = 0; i < n; ++i) {
        if (ch[i] != ch[j]) {
            printf("No");
            flag = 0;
            break;
        }
        j--;
    }
    if (flag)printf("Yes");
    return 0;
}