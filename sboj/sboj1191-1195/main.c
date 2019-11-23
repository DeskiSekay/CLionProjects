/*
 *
 * sboj1191
 *
 *
#include <stdio.h>


void sum_diff(float op1, float op2, float *psum, float *pdiff);


int main() {

    float a, b, sum, diff;


    scanf("%f %f", &a, &b);

    sum_diff(a, b, &sum, &diff);

    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);


    return 0;

}

void sum_diff(float op1, float op2, float *psum, float *pdiff) {
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}

*//*



#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

void GetString(char s[]);

int main() {
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

void GetString(char s[]) {
    int a[6];
    for (int i = 0; i < MAXS; ++i) {
        a[i] = s;
    }
}

void Shift(char s[]) {
    char a[3] = {};
    for (int i = 0; i < 3; ++i) {
        a[i] = s[i];
        s[i] = s[i + 3];
        s[i + 3] = a[i];
    }
}

*/
/*  sboj1193  */
/*
#include <stdio.h>

void splitfloat(float x, int *intpart, float *fracpart);

int main() {
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}

void splitfloat(float x, int *intpart, float *fracpart) {
    *fracpart = x - (int) x;
    *intpart = (int) x;
}

*/
/*  sboj1194  */
/*
#include <stdio.h>
#define MAXN 10

int search( int list[], int n, int x );

int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
int search( int list[], int n, int x ){

}
*/
/*sboj1205*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char ch[30] = "This is a test of point";
    char *p;
    p = ch;                                    /*$ERROR$*/
    while (*p != '\n')                           /*$ERROR$*/
        putchar(*p);                            /*$ERROR$*/
    return 0;
}
