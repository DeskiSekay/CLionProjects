#include <stdio.h>
#include <string.h>

#define MAXN 20

void strmcpy(char *t, int m, char *s);

void ReadString(char s[]);

int main() {
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

/*void strmcpy(char *t, int m, char *s) {
    int a = strlen(s);
    int i;
    for (i = 0; i < a; ++i) {
        s = &t[i];
    }
    for (int j = m; j < i; ++j) {

    }
    printf("%s", s);
}*/
void strmcpy( char *t, int m, char *s )
{
    char *a;
    a=t+m-1;
    strcpy(s,a);
}



