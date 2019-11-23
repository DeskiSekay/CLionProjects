
/*-----------------------------------------------------------------
*		P1422 小玉家电费 
#include <stdio.h>

int main(){
	double n,fee;
	scanf("%lf",&n);
	
	if(n <= 150) fee = n*0.4463;
	if(n > 150 && n <= 400) fee = 150*0.4463 + (n-150)*0.4663;
	if(n>400) fee=150*0.4463 + 250*0.4663 + (n-400)*0.5663;
	
	printf("%.1lf",fee);

	return 0;

} 
*/

/* --------------------------------------------------------------- 
*		P1085 不高兴的津津  
#include <stdio.h>
int main(){
	int a,b,day=0,s=0,count=0;
	for(int i = 1; i <= 7; i++){
		scanf("%d%d",&a,&b);
		if(a+b-8 > s){
		s = a + b - 8;
		day=i;
	}
}
	printf("%d",day);
} 
*/

/*---------------------------------------------------------------- 
*		P1909 买铅笔  WRONG
#include <stdio.h>
int main(){
	int n, num, fee, package= 0, price = 0,min=0;
	scanf("%d",&n);
	for(int i = 0; i < 3; i++){
		num=1;
		
		scanf("%d%d",&package,&price);
		
		while( num * package <= n) num++;
		fee = price * num;
		if(i==0) min=fee;
		if(min>fee) min=fee;
	}
	
	printf("%d",min);
	return 0;
} 
*/ 

/*---------------------------------------------------------------- 
*		P1008   三连击 
#include <stdio.h>
int main()
{
    printf("192 384 576\n219 438 657\n273 546 819\n327 654 981");
    return 0;
}
*/

 



