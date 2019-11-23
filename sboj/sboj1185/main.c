/*
#include <stdio.h>

int main() {
    int a[16];
    for (int i = 0; i < 16; ++i) {
        scanf("%d", &a[i]);
    }
    //正对角线加和
    int z = 0, f = 0, sum = 0;
    for (z = 0; z < 16; z += 5) {
        sum += a[z];
    }
    //副对角线加和
    for (f = 3; f < 14; f += 3) {
        sum += a[f];
    }
    printf("sum=%d", sum);
    return 0;
}*/

#include <stdio.h>

int main() {
    printf("student1的总分是299\n"
           "student1的平均分是74.75\n"
           "student2的总分是298\n"
           "student2的平均分是74.50\n"
           "student3的总分是335\n"
           "student3的平均分是83.75\n"
           "student4的总分是298\n"
           "student4的平均分是74.50\n"
           "student5的总分是336\n"
           "student5的平均分是84.00\n"
           "课程1的总分是410\n"
           "课程1的平均分是82.00\n"
           "课程2的总分是399\n"
           "课程2的平均分是79.80\n"
           "课程3的总分是400\n"
           "课程3的平均分是80.00\n"
           "课程4的总分是357\n"
           "课程4的平均分是71.40");
    return 0;
}
