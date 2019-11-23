#include <stdio.h>

int main() {
    float d, m;
    int t;
    scanf("%f%d", &d, &t); //d为距离  t为等待的时间
    if (d <= 3) {  //进行判断,直接进行距离的判断就行
        m = 10;
    } else if (d > 3 && d <= 10) {
        m = 10 + (d - 3) * 2;
    } else if (d > 10) {
        m = 10 + (d - 3) * 2 + (d - 10) * 3;
    }
    //printf("money=%.0f\n", m);
    if (t >= 5) {  //在这里判断是否超时  双斜线后面是注释,有些是之前测试的语句
        int i = t / 5;
        m += 2 * i;    //每5分钟加价,可能等100个五分钟,所以要分开计算
        //printf("m=%d\n", i);
    }
    printf("%.0f", m);  //最后输出路程钱和时间钱的和
    return 0;
}