#include <iostream>

using namespace std;
int arr[4] = {1, 2, 3, 4};

int main() {
    int *p = NULL;
    int a;
    //cin >> a;
    p = arr;
    for (int i = 0; i < 4; ++i) {
        std::cout << *p << std::endl;
        p++;
        std::cout << p << std::endl;
    }
    return 0;
}