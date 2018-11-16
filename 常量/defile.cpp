#include <iostream>
using namespace std;

#define WIDTH  5        //define 类型的对象在程序执行期间不能被修改改变。
#define NEWLINE '\n'
#define MIN(a,b) (a<b ? a : b) // 定义带参数的宏

const int  LENGTH = 10; //const 类型的对象在程序执行期间不能被修改改变。

int mainDefine()
{
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    cout <<"较小的值为：" << MIN(1, 3) << endl;


    //C++预定义的宏
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;
    return 0;
}
