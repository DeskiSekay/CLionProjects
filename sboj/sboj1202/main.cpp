/*
#include <iostream>
#include <string.h>

using namespace std;

void l(char (*p)[81], int n) {
    char *q = nullptr;
    q = p[0];
    for (int i = 0; i < n - 1; ++i) {
        if (strlen(p[i]) > strlen(q)) strcpy(q, p[i]);
    }
    cout << "The longest is: ";
    for (int j = 0; j < strlen(q); ++j) {
        cout << q[j];
    }
}

int main() {
    int n;
    cin >> n;
    char arr[n][81];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    l(arr, n);

    return 0;
}*/


/*
#include <stdio.h>

int main(void)

{

    int *p1,*p2,*p3,*p,a,b,c;                     */
/*$ERROR$*//*


    p1=&a; p2=&b; p3=&c;                           */
/*$ERROR$*//*


    scanf("%d,%d,%d",&a,&b,&c);

    if(*p1>*p2)

    { p=p1; p1=p2; p2=p; }

    if(*p1>*p3)

    { p=p1; p1=p3; p3=p; }

    if(*p2>*p3)

    { p=p2; p2=p3; p3=p; }                 */
/*$ERROR$*//*


    printf("a=%d,b=%d,c=%d\n",a,b,c);

    printf("从小至大排序后的结果是:%d,%d,%d\n",*p1,*p2,*p3);

    return 0;

}*/


#include <stdio.h>

#define N 10

int main(void) {

    int a[N], i, *p;

    p = a;                                          /*$ERROR$*/

    for (i = 0; i < 5; i++)

        scanf("%d", p + i);                      /*$ERROR$*/

    for (i = 0; i < 5; i++)

        printf("%4d", p[i]);                   /*$ERROR$*/

    return 0;

}