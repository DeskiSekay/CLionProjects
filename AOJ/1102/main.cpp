#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int x = 0, y = 0;
    long long sum_1 = 0, sum_2 = 0;
    while (cin >> x >> y) {
        for (int i = x; i <= y; ++i) {
            if (i % 2 == 0) sum_1 += pow(i, 2);
            else sum_2 += pow(i, 3);
        }
        cout << sum_1 << " " << sum_2 << endl;
        sum_1 = 0;
        sum_2 = 0;
    }

    return 0;
}