#include <iostream>

using namespace std;
int main() {
    int a,b,plus,minus,time,devide;
    a=0,b=0;

    cin>>a>>b;
    plus=a+b;
    minus=a-b;
    time=a*b;
    devide=a/b;

    cout << a<<" + "<<b<<" = " << plus <<" "<< endl;
    cout << a<<" - "<<b<<" = " << minus <<" "<< endl;
    cout << a<<" * "<<b<<" = " << time <<" "<< endl;
    cout << a<<" / "<<b<<" = " << devide <<" "<< endl;

    return 0;
}