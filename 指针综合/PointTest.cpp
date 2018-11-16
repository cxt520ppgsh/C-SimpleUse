#include <stdio.h>
#include <iostream>

using namespace std;
int mainPointTest() {
    char a[4] = "hea";
    char *b[4];  //指针数组
    b[0] = &a[0];
    b[1] = &a[1];
    b[2] = &a[2];
    b[3] = &a[3];

    char *d = a+1;


    char **c = b; //指向数组的指针

    cout << *c << endl;  //hea
    cout << *(c+1) << endl;  //ea
    cout << c[1] << endl;  //ea
    cout << &c[1] << endl;  //0x7ffdc54d6c28
    cout << &a[1] << endl; //ea c[1] = &a[1]
    cout << *&a[1] << endl; //e
    cout << a[1] << endl;  //e
    cout << a << endl;     //hea
    cout << &a << endl;     //0x7ffd10389a30
    cout << d << endl;     //ea
    cout << *d << endl;     //e
    cout << d+1 << endl;     //a
    cout << *(d+1) << endl;     //a
    cout << a+1 << endl;     //ea
    cout << b[1] << endl;     //ea
    return 0;
}