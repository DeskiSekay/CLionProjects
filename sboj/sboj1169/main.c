#include <stdio.h>

#include <string.h>

int main(void) {

    char s[81], t;

    int i, j, n;

    scanf("%s", s);
    n = strlen(s);

    i = 0;

    j = n - 1;

    while (i < j) {

        t = s[i];

        s[i] = s[j];

        s[j] = t;

        i++;

        j--;
    }
    printf("%s", s);

    return 0;

}