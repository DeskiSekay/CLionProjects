/*
#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main() {
    ll m, q, a, b;
    cin >> m;
    m *= 2;
    for (register ll p = 0; p < sqrt(m); ++p) {
        if (m % p == 0) {
            q = m / p;
            if ((p + q - 1) % 2 == 0) {
                b = (p + q - 1) / 2;
                a = q - b;
                if (a != b) {
                    cout << a << " " << b << endl;
                }
            }
        }
    }
    return 0;
}*/

//      dp解法
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long dp[2000005];

int main(void) {
    //填充数组，在algorithm头文件中
    fill(dp, dp + 2000005, 0);
    long long m, start = 1;
    cin >> m;
    for (register long long i = 1; i < m; ++i) {
        //动态转移
        dp[i] = dp[i - 1] + i;
        while (dp[i] - dp[start - 1] > m) start++;
        if (dp[i] - dp[start - 1] == m) {
            cout << start << " " << i << endl;
            continue;
        }
    }
    return 0;
}