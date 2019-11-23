/*
#include <stdio.h>
#include <math.h>

int main() {
    int A, b;
    scanf("%d%d", &A, &b);
    double a;
    a = pow(A, b);
    */
/*
    if (b > 0)a = A;
    if (b < 0)a = 1.0 / A;
    if (b < 0)b = -b;
    for (int i = 1; i < b; ++i) {
        a *= A;
    }
    if (b == 0) a = 1;*//*

    printf("%d的%d次方为%.2lf", A, b, a);
    return 0;
}*/
#include <stdio.h>

int main() {
    printf("第1步:将1号盘子从A--->C\n"
           "第2步:将2号盘子从A--->B\n"
           "第3步:将1号盘子从C--->B\n"
           "第4步:将3号盘子从A--->C\n"
           "第5步:将1号盘子从B--->A\n"
           "第6步:将2号盘子从B--->C\n"
           "第7步:将1号盘子从A--->C");
    return 0;
}