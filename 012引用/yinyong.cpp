#include <iostream>

using namespace std;

// 函数声明
void swap(int &x, int &y);

double &setValues(double &i);

//不存在空引用。引用必须连接到一块合法的内存。
//一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
//引用必须在创建时被初始化。指针可以在任何时间被初始化。
int mainyinyong() {
    // 声明简单的变量
    int i;
    double d;

    // 声明引用变量
    int &r = i;
    double &s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;

    cout << "交换前 d , s : " << d << ' ' << s << endl;
    setValues(s);
    cout << "交换后 d , s : " << d << ' ' << s << endl;

    int a = 100;
    int b = 200;
    cout << "交换前 a,b : " << a << ' ' << b << endl;
    swap(a, b);
    cout << "交换后 a,b : " << a << ' ' << b << endl;


    return 0;
}

// 引用作为参数
void swap(int &x, int &y) {
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */

    return;
}

// 引用作为返回
double &setValues(double &i) {
    i = -1;
    return i;   // 返回引用
}
