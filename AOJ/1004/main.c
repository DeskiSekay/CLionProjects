#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    //scan every group
    for (int k = 0; k < n; ++k) {
        scanf("%d%d",&a[k],&b[k]);
    }
    //print n groups of pic
    for (int i = 0; i < n; ++i) {
        //print single group
        for (int j = 1; j <= a; ++j) {

        }

        printf("\n");
    }
    printf("Hello, World!\n");
    return 0;
}