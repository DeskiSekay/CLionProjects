#include "iostream"
#include "iomanip"

using namespace std;

int main(void) {

    double a, b;
    cin >> a >> b;
    double x = a / b;

    cout << fixed << setprecision(4) << x;


    return 0;
}