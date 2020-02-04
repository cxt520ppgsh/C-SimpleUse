#include <iostream>
using namespace std;

class printData
{
public:

    void print(int i) {
        cout << "整数为: " << i << endl;
    }

    //重载
    void print(double  f) {
        cout << "浮点数为: " << f << endl;
    }

    void print(char c[]) {
        cout << "字符串为: " << c << endl;
    }
};

class printData2
{
public:

    //重写
    void print(int i) {
        cout << "调用重写函数，整数为: " << i << endl;
    }

    //重载
    void print(double  f) {
        cout << "浮点数为: " << f << endl;
    }
    //重载
    void print(char c[]) {
        cout << "字符串为: " << c << endl;
    }
};

int mainOverload(void)
{
    printData2 pd;

    // 输出整数
    pd.print(5);
    // 输出浮点数
    pd.print(500.263);
    // 输出字符串
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}