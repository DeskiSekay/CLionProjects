
#include <iostream>
#include <algorithm>

using namespace std;


bool flag[10];
int result[10];
long long final = 0;

void dfs(int index) {
    if (index >= 10) {
        long long ans = 0;
        for (int i = 0; i < 10; ++i) {
            ans = ans * 10 + result[i];
        }
        if (ans % 11 == 0 && ans > final) final = ans;
        return;
    }
    for (int j = 0; j < 9; ++j) {
        if (!flag[j]) {
            //标志当前的j已经用过
            flag[j] = true;
            //当前位置置为没用过的数字
            result[index] = j;
            dfs(index + 1);
            //重置数字状态
            flag[j] = false;
        }
    }
}

int main() {
    fill(flag, flag + 10, false);
    fill(result, result + 10, -1);
    dfs(0);
    cout << final << endl;
    return 0;
}


/*
int arr[10];
long long result = 0;

int main() {
    for (int i = 0; i <= 9; ++i) {
        arr[i] = i;
    }
    do {
        long long ans = 0;
        for (int i = 0; i <= 9; ++i) {
            if (ans % 11 == 0 && ans > result) {
                result = ans;
            }
        }
    } while (next_permutation(arr, arr + 10));
    cout << result << endl;
    return 0;
}
*/
