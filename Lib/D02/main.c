/*----------------------------------------------
 *      P1046  淘淘摘苹果
#include <stdio.h>

#define chair 30

int main() {
    int a[10], h, count = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &h);
    for (int j = 0; j < 10; ++j) {
        if (a[j] <= h + chair) count++;
    }
    printf("%d", count);
    return 0;
}
 */

/*----------------------------------------------
 *      P1427  小鱼的数字游戏
#include <stdio.h>

int main() {

    int array[100], i = 0;
    scanf("%d", &array[i]);
    while (array[i] != 0) {
        i++;
        scanf("%d", &array[i]);
    }
    for (int j = i - 1; j >= 0; --j) {
        printf("%d ", array[j]);
    }

    return 0;
}
 */

/*----------------------------------------------
 *      P1428  小鱼比可爱
#include <stdio.h>

int main() {
    int n, count;
    scanf("%d", &n);
    int arr[n], num[n];
    for (int l = 0; l < n; ++l) {
        scanf("%d", &arr[l]);
    }
    for (int i = 0; i < n; ++i) {
        count = 0;
        for (int j = 0; j <= i; ++j) {
            if (arr[i] > arr[j]) count++;
        }
        num[i] = count;
    }
    for (int k = 0; k < n; ++k) {
        printf("%d ", num[k]);
    }

}
 */

/*----------------------------------------------
*       P1421  小玉买文具
#include <stdio.h>

#define pencil 19

int main() {
    int a, b, money, count = 0;
    scanf("%d%d", &a, &b);
    money = a * 10 + b;
    while (money >= pencil) {
        money -= pencil;
        count++;
    }
    printf("%d", count);
    return 0;
}
 */

/*----------------------------------------------
*       P1425  小鱼的游泳时间
#include <stdio.h>

int main() {

    int a, b, c, d, e, f;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    e = c - a;
    if (d - b < 0) {
        f = d + (60 - b);
        e--;
    } else {
        f = d - b;
    }
    printf("%d %d", e, f);
    return 0;
}
 */

#include <stdio.h>

int main() {
    int x, n, day = 0;

    scanf("%d%d", &x, &n);
    //计算天数  加上前面不足的天数再减去
    //n += x - 1;
    int num = n / 7;
    if (x <= 5) n += x - 1;
    else {

    }

    printf("%d", day);
    return 0;
}

// 2 3 4 5 = 1000   n=6 n=4 1 2 3 4  1000