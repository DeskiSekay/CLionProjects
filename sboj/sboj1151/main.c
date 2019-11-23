#include <stdio.h>
#include <string.h>

int main() {
    char ch, s[100];
    int index = 0, num = 0;
    scanf("%c\n%s", &ch, s);
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == ch) {
            index = i;
            num++;
        }
    }
    if (num == 0) printf("Not Found");
    else printf("index = %d", index);
    return 0;
}