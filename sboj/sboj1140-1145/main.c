/*  sboj1040  */
/*
#include <stdio.h>

int s = 0, x = 1;

int fac(int n) {
    x = 1;
    for (int i = 1; i <= n; ++i) {
        x *= i;
    }
    return x;
}

int sum(int n) {
    for (int i = 1; i <= n; ++i) {
        s += fac(i);
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("s=%d", sum(n));
    return 0;
}
*/

/*   sboj1041   */
#include <stdio.h>

#define z(c) c-=32
char c;

/*
char z(char z) {
    if (z >= 97 && z <= 122) {
        z -= 32;

        return z;
    }

}
 */

int main() {
    scanf("%c", &c);
    printf("%c", z(c));
    return 0;
}
/*
#include <stdio.h>

int main() {

    printf("Hello, World!\n");
    return 0;
}
#include <stdio.h>

int main() {

    printf("Hello, World!\n");
    return 0;
}
#include <stdio.h>

int main() {

    printf("Hello, World!\n");
    return 0;
}*/
