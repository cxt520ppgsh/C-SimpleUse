#include <iostream>

using namespace std;

// 函数声明
void swap(int& x, int& y);

double& setValues(double& i );

int mainYinyong()
{
    // 声明简单的变量
    int    i;
    double d;

    // 声明引用变量
    int      &r = i;
    double&  s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;

    int a = 100;
    int b = 200;
    swap(a,b);
    setValues(d);
    return 0;
}

// 引用作为参数
void swap(int &x, int& y)
{
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */

    return;
}

// 引用作为返回
double& setValues(double& i )
{
    return i;   // 返回第 i 个元素的引用
}
