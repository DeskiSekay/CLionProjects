#include <stdio.h>

int main() {
    int num=0;
    int temp=0;
    unsigned long long n,m;
    scanf("%lld",&n);
    getchar();
    scanf("%lld",&m);
    temp=m;
    if(n>=m){
        for (m; m <= n; m+=temp) {
            num++;

        }

    } else if(n<m){
        num=0;
    }

    printf("%d",num);
    return 0;
}