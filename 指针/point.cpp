#include <iostream>

using namespace std;

int point1(int a);

void point2();

void point3();

void getPoint(int *ptr);

int *getRandom2();

int mainPoint() {

    //指向函数的指针, 特别的,void *可以指向任何类型的数据。
    int (*p)(int);
    p = point1;
    int result = p(0);

    point1(0);
    point2();
    point3();
    return 0;
}

int point1(int a) {
    int var = 20;   // 实际变量的声明
    int *ip = NULL; // 这里表示指针不指向任何东西

    ip = &var;       // 在指针变量中存储 var 的地址
    // 访问指针中地址的值const int MAX = 4;
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    return var;
}

//指针数组
void point2() {
    const int MAX = 4;
    int var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; // 赋值为整数的地址
    }
    for (int i = 0; i < MAX; i++) {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
}

//指向指针的指针
void point3() {
    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    // 获取 var 的地址
    ptr = &var;

    // 使用运算符 & 获取 ptr 的地址
    pptr = &ptr;
    // 使用 pptr 获取值
    cout << "var 值为 :" << var << endl;
    cout << "*ptr 值为:" << *ptr << endl;
    cout << "**pptr 值为:" << **pptr << endl;

    getPoint(ptr);
    int *p = getRandom2();
}

//指针形参
void getPoint(int *par) {
    // 获取当前的秒数
    *par = time(NULL);
    cout << "当前的秒:" << *par << endl;
    return;
}

//从函数返回指针
int *getRandom2() {
    static int r[10];
    // 设置种子
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}