#include <iostream>
#include <math.h>

int main() {
    int month,num;
    scanf("%d",&num);

    //int a=month/3;
    //num=pow(2,a);
/*    int a=pow(2,1/num);
    month=a*3;
    printf("%d",a);*/
        /*
         * 第一个月一对新生兔子   共1对
         * 第二个月无
         * 第三个月生一对兔子    共2对
         * 第四个月无
         * 第五个月无
         * 第六个月新生两对兔子   共4对
         * 第七个月无
         * 第八个月无
         * 第九个月新生三对兔子   共8对
         * 对数=2^n n为月份除以3
         *
         * 反过来就是对数的n次根号
         * */
        /*
    for (int i = 1; i <= num; ++i) {
        if(i<2){

        }else {
            month = i / 3 - 1;
        }
    }
    printf("%d",month);*/
        int a;
        for(int i=1;i<=num;i++) {
            a = pow(i,2);
            a++;
        }
        if(a%3!=0){
            double t=a/3;
            printf("%d",(int)t+a%3);
        }
    //printf("%d",a);

    return 0;
}