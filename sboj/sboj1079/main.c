#include <stdio.h>
#include <math.h>

int main() {
    double fenmu = 3;
    double sum = 1;
    double eps;
    double xiang;
    int flag = 1, i = 1;
    scanf("%lf", &eps);
    /* do {
         sum += flag * 1.0 / fenmu;
         fenmu += 2.0;
         flag *= -1;
     } while (fabs(sum) < eps);*/

    /*do {
        xiang = flag * 1 / fenmu;
        sum += xiang;
        fenmu += 2;
        flag = -flag;
        //printf("%d\n", flag);
    } while (fabs(xiang) > eps);*/
    while (fabs(xiang) > eps) {
        xiang = flag * 1 / (2i - 1);
        sum += xiang;
        fenmu += 2;
        flag = -flag;
        ++i;
    }


    printf("s=%.3lf", 4 * sum);
    return 0;
}

