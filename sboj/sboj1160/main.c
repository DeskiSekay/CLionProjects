/*
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void){

	int a[100]={0};
	char str[100];
	scanf("%s",str);
	int m,i,j,flag,sum,k;
	m=strlen(str);
	j=0,flag=1;
	for(i=0;i<m;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			a[j]=str[i]-48;
			//printf("a[%d]=%d\n",j,a[j]);
			j++;
		}
		else if(str[i]>='A'&&str[i]<='F')
		{
			a[j]=str[i]-55;
			//printf("大：a[%d]=%d\n",j,a[j]);
			j++;
		}
		else if(str[i]>='a'&&str[i]<='f')
		{
			a[j]=str[i]-87;
			//printf("小：a[%d]=%d\n",j,a[j]);
			j++;
		}
		if(str[i]=='-'&&j==0)				//判断第一个十六进制字符之前是否存在字符“-”
			flag=-1;
	}
	sum=0,k=0;
	for(i=j-1;i>=0;i--)							//16进制的数字转化成10进制的数字
	{
		sum+=a[i]*pow(16,k);
		k++;
	}
	if(sum==0)									//0不能输出-0
		printf("0\n");
	else{
		sum=flag*sum;
		printf("%d",sum);
	}

	return 0;
}

*/


#include <stdio.h>

int main() {
    int m, n, j, i;
    double k;
    scanf("%d,%d", &m, &n);
    for (i = m; i <= n; i++) {
        k = i / 2;
        for (j = 2; j <= k; j++)
            if (i % j == 0)break;
        if (i % j != 0 && i % 10 == 7)
            printf("%d ", i);
    }
    return 0;
}