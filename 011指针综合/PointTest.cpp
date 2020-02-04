#include <stdio.h>
#include <iostream>

using namespace std;
int mainpoint2() {
    char a[4] = "hea";
    char *b[4];  //指针数组
    b[0] = &a[0];
    b[1] = &a[1];
    b[2] = &a[2];
    b[3] = &a[3];

    char *d = a+1;
    char **c = b; //指向指针数组的指针

    cout << a[1] << endl;  //e  a = &a[0] , 这里cout 会打印char的地址到末尾的字符串
    cout << &a[1] << endl; //ea c[1] = &a[1]  这里本应该是个地址，但是char特殊，显示起始到末尾的字符串
    cout << *&a[1] << endl; //e   *&a[1] = a[1]
    cout << a << endl;     //hea
    cout << &a << endl;     //0x7ffee64c4978
    cout << a+1 << endl;     //ea  , a+1 = &a[0+1] = &a[0] + 1

    cout << b << endl;     //0x7ffee64c4980
    cout << &b[0] << endl;     //0x7ffeea250980
    cout << b[0] << endl;     //hea
    cout << *b[0] << endl;     //h
    cout << b[1] << endl;     //ea

    cout << *c << endl;  //hea
    cout << *(c+1) << endl;  //ea
    cout << c[1] << endl;  //ea
    cout << &c[1] << endl;  //0x7ffee64c4988

    cout << d << endl;     //ea
    cout << *d << endl;     //e
    cout << d+1 << endl;     //a
    cout << *(d+1) << endl;     //a

    return 0;
}