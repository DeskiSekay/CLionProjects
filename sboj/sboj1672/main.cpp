#include <iostream>

using namespace std;

int main(void) {
    //定义字符串str 
    string str;

    //多组输入 
    while (cin >> str) {
        //获取字符串长度 
        int len1 = str.length();

        //枚举k的大小  （第一次循环假设周期k的大小为1 如果不合法 再慢慢增加) 
        for (int k = 1; k <= len1; ++k) {
            //如果字符串的长度不是k的倍数 那么k一定不是该字符串的周期 
            if (len1 % k != 0) {
                continue;
            }

            //取出该字符串从0开始的k个字符  假如字符串为abcabc k为3  则能取出abc 
            string temp = str.substr(0, k);

            bool flag1 = true;

            //将前k个字符和后面的字符串进行k位k位的对比 如果全部匹配则代表该字符串以k为周期 
            for (int i = k; i < len1; i = i + k) {
                bool flag2 = true;
                for (int j = 0; j < k; ++j) {
                    if (temp[j] != str[i + j]) {
                        flag2 = false;
                        break;
                    }
                }
                if (!flag2) {
                    flag1 = false;
                    break;
                }
            }

            //如果flag1没有变成0 则说明匹配成功 k为周期 输出k并跳出循环  进行下一组数据的输入 
            if (flag1) {
                cout << k << endl;
                break;
            }
        }
    }
    return 0;
}