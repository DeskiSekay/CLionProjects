#include <stdio.h>

int main() {
    int a,b,c,d;
    float sum,avg;
    sum=0,avg=0;
    a=0,b=0,c=0,d=0;


    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    avg=sum/4;
    printf("Sum=%d,Average=%.1f",a+b+c+d,avg);
    return 0;
}