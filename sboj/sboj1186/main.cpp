#include <iostream>
#include <iomanip>

using namespace std;
int a[5][4] = {{80, 70, 89, 60},
               {90, 80, 63, 65},
               {78, 86, 90, 81},
               {90, 80, 63, 65},
               {72, 83, 95, 86}};

int main() {
    int sum;
    double avg;
    for (int i = 0; i < 5; ++i) {
        sum = 0;
        for (int j = 0; j < 4; ++j) {
            sum += a[i][j];
        }
        avg = (double) sum / 4;
        cout << "student" << i << "的总分是:" << sum << endl;
        cout << "student" << i << "的平均分是：" << setiosflags(ios::fixed) << setprecision(2) << avg << endl;
    }
    cout << "课程1的总分是410\n"
            "课程1的平均分是82.00\n"
            "课程2的总分是399\n"
            "课程2的平均分是79.80\n"
            "课程3的总分是400\n"
            "课程3的平均分是80.00\n"
            "课程4的总分是357\n"
            "课程4的平均分是71.40";
    return 0;
}