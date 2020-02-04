#include <iostream>
#include <cstring>

using namespace std;
void autoKeyword();

//存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
// 因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值
static int count = 10; /* 全局变量 */

// 也可以利用extern

int mainstatic() {
    autoKeyword();
}

//初始化表达式自动推断被声明的变量的类型
void autoKeyword() {
    auto f = 3.14;      //double
    auto s("hello");  //const char*
    auto z = new auto(9); // int*
    cout << f << endl;
    //auto x1 = 5, x2 = 5.0, x3='r';//错误，必须是初始化为同一类型
}

