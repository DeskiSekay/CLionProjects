#include<stdio.h>

void main(){
    int x,y,z;

    int i,j;

    for(x=4;x<100;x+=2) // 对100以内的偶数

        for(y=1;y<x;y++)      //y<x改成y<x/2就可以去掉8=3+5 8=5+3这类的重复了

        {for(i=2;i<y;i++)   //判断y是否为素数

                if(y%i==0) break;
            if(i==y)    //  y是素数


            {  z=x-y;  // x=y+z

                for(j=2;j<=z;j++) //判断z是否为素数


                    if(z%j==0) break;

                if(j==z)  //z是素数


                    printf("%d=%d+%d\t",x,y,z);

            }

        }


    printf("\n");

}