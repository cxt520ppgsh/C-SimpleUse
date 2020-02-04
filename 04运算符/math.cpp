#include <iostream>

using namespace std;

int mainMath() {
    //逻辑运算符
    bool a = true;
    bool b = false;
    cout << (a || b) << endl; // || && ！


    //位运算符
    unsigned int c = 60; //c  00111100
    unsigned int d = 13; //c  00001101
    int e = 0;

    e = c & d;             // 12 = 0000 1100
    cout << "Line 1 - c 的值是 " << e << endl;

    e = c | d;             // 61 = 0011 1101
    cout << "Line 2 - c 的值是 " << e << endl;

    e = c ^ d;             // 49 = 0011 0001
    cout << "Line 3 - c 的值是 " << e << endl;  //同0非1

    e = ~c;                // -61 = 1100 0011
    cout << "Line 4 - c 的值是 " << e << endl;  //二进制补码

    e = c << 2;            // 240 = 1111 0000   //算数左移
    cout << "Line 5 - c 的值是 " << e << endl;

    e = c >> 2;            // 15 = 0000 1111    //算数右移
    cout << "Line 6 - c 的值是 " << e << endl;

    cout << "Line 7 - c 的值是 " << abs(e) << endl; //绝对值 abs(int) fabs(double) labs(long)

}