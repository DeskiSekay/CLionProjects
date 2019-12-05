#include <stdio.h>

int main() {
    int n, arr[10], max = 0, min = 0, index_max = 0, index_min = 0, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    //获取最小值下标
    for (int j = 0; j < n; j++) {
        if (arr[j] < min) {
            min = arr[j];
            index_min = j;
        }
    }
    //交换最小值
    t = arr[index_min];
    arr[index_min] = arr[0];
    arr[0] = t;
    //获取最大值下标
    max = arr[0];
    for (int l = 0; l < n; ++l) {
        //cout << arr[l] << "|";
        if (arr[l] > max) {
            max = arr[l];
            index_max = l;
        }

        //cout << "index_max=" << index_max << "|";
    }
    //cout << endl;
    //交换最大值
    t = arr[index_max];
    //cout << index_max << endl;
    arr[index_max] = arr[n - 1];
    arr[n - 1] = t;
    for (int k = 0; k < n; ++k) {
        printf("%d ", arr[k]);
    }
    return 0;
}