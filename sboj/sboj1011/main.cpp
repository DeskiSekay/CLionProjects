#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main() {

    int money,year;
    float rate=0;
    float a;
    money=0,year=0,rate=0;
    double sum=0;

    cin>>money>>year>>rate;
    sum=money*pow((1+rate),year);

    printf("sum=%.2f",sum);
    return 0;
}