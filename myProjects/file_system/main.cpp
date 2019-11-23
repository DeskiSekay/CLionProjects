#include <iostream>
#include <fstream>//文件输入输出头文件
#include <stdio.h>

using namespace std;

//create test.txt file

//write "Hello" into file

//close file

// append "World" to file

//close file

int main() {
    const char *filename = "/Users/sekay/Documents/practice/test.txt";
    FILE *fp = fopen(filename, "wb");

    char hello[] = "hello\t";
    char world[] = "world";

    fwrite(hello, sizeof(hello), 1, fp);
    fclose(fp);
    fp = fopen(filename, "ab");
    fwrite(world, sizeof(world), 1, fp);
    fclose(fp);

}
