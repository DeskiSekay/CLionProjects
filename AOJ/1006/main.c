#include <stdio.h>
#include <string.h>

#define MAX 30


struct ip {
    char array[MAX];
    int real;
} r[100];

int judge(int len, char array[]) {
    for (int i = 0; i < len; ++i) {
        if (array[i] >= '0' && array[i] <= '9') {
            printf("%d ", array[i]);
        }
    }
}

int main() {
    /*char ch,array[30];
    int r[100],i=0;
    while((ch=getchar())!=EOF){
        r[i]=ch;
        i++;
    }*/
    int len, t;
    char ch;
    for (int i = 0; i < 100; ++i) {
        t = 0;
        while ((ch = getchar()) != EOF) {
            r[i].array[t] = ch;
            t++;
        }
        printf("%s", r[i].array);
        judge(t, r[i].array);
    }


    printf("Hello, World!\n");
    return 0;
}