#include <iostream>

using namespace std;

int point1(char a, bool b);

void point2();

void point3();

void point4();

void point5();

void getPoint(int *ptr);

int *getRandom2();

int mainpoint() {
    point1(' ',false);
    point2();
    point3();
    point4();
    point5();
    return 0;
}

int point1(char a, bool b) {
    int var = 20;   // 实际变量的声明
    int *ip = NULL; // 这里表示指针不指向任何东西 相当于int* ip = NULL
    // ip就是一个指针，表示ip指向的地址
    // *ip表示ip指向地址的内容
    // &ip表示ip本身的地址
    int **ipip = NULL; //指向指针的指针
    ip = &var;       //指针ip = var的地址， 即指针ip指向的地址   = var的地址
    ipip = &ip;      //指针ipip = ip的地址，即指针ipip指向的地址 = 指针ip本身的地址

    cout << "&var " << &var << endl;   //&var 表示 var的地址 0x7ffee70f6988
    cout << "*ip " << *ip << endl;     //*ip 20 表示指针ip指向的地址保存的内容，这里是一个数值，也有可能表示指针
    cout << "ip " << ip << endl;       //ip 表示指针ip指向的地址 0x7ffee70f6988
    cout << "&ip " << &ip << endl;     //&ip 表示指针ip本身的地址

    cout << "*ipip " << *ipip << endl;   //*ipip 表示指针ipip指向的指针指向的地址
    cout << "**ipip " << **ipip << endl;   //**ipip 表示指针ipip指向的指针指向的地址的内容
    cout << "ipip " << ipip << endl;     //ipip 表示指针ipip指向的地址
    cout << "&ipip " << &ipip << endl;     //&ipip 表示指针ipip本身的地址
    return var;
}

//指针数组及运算
void point2() {
    const int MAX = 4;
    int var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; // 指针ptr[i] = var[i]的地址，即指针ptr[i]指向的地址 = var[i]的地址
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
    cout << "*ptr 值为:" << *ptr << endl;
    int *p = getRandom2();
    cout << "p[1] 值为:" << p[1] << endl;
}

//指向函数的指针, 特别的,void *可以指向任何类型的数据。
void point4() {

    int (*p)(char, bool) = point1;
    int result = p('asd', false);
    cout << "point1()的返回值为:" << result << endl;
}

//指针运算 指针与普通数组的关系
void point5(){
    int  var[4] = {10, 100, 200};
    int  *ptr;

    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < 4; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
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
    static int r[10]; //数组r本身是个指针
    for (int i = 0; i < 10; ++i) {
        r[i] = i;
        cout << r[i] << endl;
    }

    return r;
}