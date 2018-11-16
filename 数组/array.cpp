#include <iostream>

using namespace std;

void show(double *p, double balance[]);
int * getRandom( );
// 带有 5 个元素的双精度浮点型数组

int mainArray() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    //指向数组的指针
    double  *p = balance; //相当于 double  *p; p = balence;
    //如果数组用指针表示,则double  *p,double balance[5], p与balance等价
    p[1] == balance[1];
    show(p,balance);


    int *j = getRandom();
    cout << "生产随机数 " << endl;
    cout << *j << endl;
    return 0;
}

void show(double *p, double balance[]) {
    // 输出数组中每个元素的值
    cout << "使用指针的数组值 " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    cout << "使用 balance 作为地址的数组值 " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }

    cout << "地址 " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(balance + " << i << ") : ";
        cout << (balance + i) << endl;
    }

}

//返回指针
int * getRandom( ){
    static int  r[10];

    // 设置种子
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
    }

    return r;
}