/*
 * --------------------------------------------------------
 * NO.1
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    unsigned long long a, b, c;
    while (scanf("%lld,%lld,%lld", &a, &b, &c)) {
        cout << (a % c) * (b % c) << endl;
    }
    return 0;
}*/



/*--------------------------------------------------------
 *  NO.2
#include <iostream>

using namespace std;
int exp[1000001];

int main() {
    int n, y;
    while (cin >> n) {
        cin >> y;
        for (int i = 0; i < n; ++i) {
            cin >> exp[i];
        }
    }
    return 0;
}
*/


/*--------------------------------------------------------
 *  NO.3
#include <iostream>

using namespace std;

int main() {

    return 0;
}*/



/*--------------------------------------------------------
 * NO.4
#include <iostream>

using namespace std;

int main() {

    return 0;
}*/



/*--------------------------------------------------------
 *  NO.5
#include <iostream>

using namespace std;

int main() {

    return 0;
}*/



/*--------------------------------------------------------
 *  NO.6
 #include <iostream>

using namespace std;

int main() {

    return 0;
}*/

/*
#include <iostream>

using namespace std;

int main() {

    return 0;
}*/

/*
#include <iostream>

using namespace std;

int main() {

    return 0;
}*/

/*
#include <iostream>
#include <iomanip>

using namespace std;

long long poww(int a, int b) {
    long long base = a, index = b, result = 1;
    while (index != 0) {
        if (index & 1 != 0) {
            result = result * base;
        }
        base = base * base;
        index >>= 1;
    }
    return result;
}

int main() {
    int a = 3, b, n;
    cin >> n;
    while (n > 0) {
        cin >> b;
        cout << "1/" << poww(a, b) << endl;
        n--;
    }
    return 0;
}
*/


/*
#include<iostream>

using namespace std;
long long num = 0;

long long long_mul(long long x, long long y, long long z) {

    x = x % z;
    y = y % z;

    while (y != 0) {

        if (y & 1) {
            num = num + x;
            num = num % z;
        }

        x <<= 1;
        if (x >= z) {
            x = x % z;
        }
        y >>= 1;
    }
    return num;
}

int main() {
    long long a, b, c;
    while (cin >> a >> b >> c) {

        cout << long_mul(a, b, c) << endl;

    }
    return 0;
}*/

#include <iostream>
#include <bitset>

using namespace std;

int main() {

    long long i = 1, t, x, y;
    cin >> t;
    while (i <= t) {
        cin >> x >> y;
        bitset<64> bit(y - 1);
        x -= 1;
        while (x >= 0) {
            if (bit[x] == 0) cout << 'a';
            else cout << 'b';
            x--;
        }
        cout << endl;
        i++;
    }
    return 0;
}