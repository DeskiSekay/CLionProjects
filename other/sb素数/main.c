/*
#include <stdio.h>
#include <math.h>

int main() {
    int a,x,y,bound;
    double i,j;
    scanf("%d%d%d", &x,&y,&bound);
    if(pow(x,i)+pow(y,j)==a){

    }
    */
/*for (int i = 2; i < sqrt(n); ++i) {

        if (i > sqrt(n)) {
            printf("YES");
        } else if (n % i == 0) {
            printf("NO");
            break;
        }
    }*//*

    return 0;
}*/
/*
#include<stdio.h>

int main() {
int x, i, count = 0;
scanf("%d", &x);
if (x < 2000 || x >= 2100) {
    printf("Invalid");
} else {
    for (i = 2001; i <= x; ++i) {

        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
            printf("%d\n", i);
        }
        count++;
    }
}
if (count == 0)
    printf("None");
return 0;
}*/
/*
#include<stdio.h>

int main() {
    int N, i, count = 0;
    double x, sum = 0, average = 0;
    scanf("%d\n", &N);
    for (i = 1; i <= N; i++) {
        scanf("%lf", &x);
        sum = sum + x;
        if (x >= 60)
            count++;
    }
    average = sum / N;
    printf("average=%.1lf\ncount=%d", average, count);
    return 0;
}*/
/*
#include<stdio.h>

double result_real, result_imag;

void complex_prod(double x1, double y1, double x2, double y2);

int main(void) {
    double imag1, imag2, real1, real2;

    scanf("%lf %lf", &real1, &imag1);
    scanf("%lf %lf", &real2, &imag2);
    complex_prod(real1, imag1, real2, imag2);
    printf("product of complex is (%f)+(%f)i\n", result_real, result_imag);

    return 0;
}

void complex_prod(double x1, double y1, double x2, double y2) {
    result_real = x1 * x2 - y1 * y2;
    result_imag = y2 * x1 + x2 * y1;
}
*/

#include <stdio.h>

int main() {
    printf("blue=1,yellow=47,red=2 \n"
           "blue=2,yellow=44,red=4 \n"
           "blue=3,yellow=41,red=6 \n"
           "blue=4,yellow=38,red=8 \n"
           "blue=5,yellow=35,red=10 \n"
           "blue=6,yellow=32,red=12 \n"
           "blue=7,yellow=29,red=14 \n"
           "blue=8,yellow=26,red=16 \n"
           "blue=9,yellow=23,red=18 \n"
           "blue=10,yellow=20,red=20 \n"
           "blue=11,yellow=17,red=22 \n"
           "blue=12,yellow=14,red=24 \n"
           "blue=13,yellow=11,red=26 \n"
           "blue=14,yellow=8,red=28 \n"
           "blue=15,yellow=5,red=30 \n"
           "blue=16,yellow=2,red=32");
    return 0;
}