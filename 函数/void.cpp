#include <iostream>

using namespace std;

// 函数声明
void swap(int *x, int *y);

// 函数声明
void swap(int x, int y);

// 函数声明
void swap2(int &x, int &y);

int mainVoid() {
    // 局部变量声明
    int a = 100;
    int b = 200;

    swap(&a, &b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;

    a = 100;
    b = 200;
    swap2(a, b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;

    a = 100;
    b = 200;
    swap(a, b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;


    return 0;
}

void swap(int x, int y) {
    int temp;

    temp = x; /* 保存 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y */

    return;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;    /* 保存地址 x 的值 */
    *x = *y;        /* 把 y 赋值给 x */
    *y = temp;    /* 把 x 赋值给 y */

    return;
}


// 函数定义
void swap2(int &x, int &y) {
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */

    return;
}