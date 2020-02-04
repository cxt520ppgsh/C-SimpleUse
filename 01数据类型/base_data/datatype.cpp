#include <cstdlib>
#include <iostream>
#include <limits>

using namespace std;

void showDataSize();

void showEnum();

bool a = true;
char b = ' ';  // 1个字节
float d = 0.1f; // 单精度 4字节 有效数位是7位（因为有正负，所以不是8位）
double e = 0.001; // 双精度 8字节 有效数位是16位
int c = 1; //4个字节 1KB = 1024 B (字节) = 1024 * 8 bit(比特)
short int i = 9; //2个字节

//可以signed short int l = -10 但不可以 unsigned short int l = -10
//unsigned无符号版本和signed有符号版本的区别就是无符号类型能保存2倍于有符号类型的正整数数据
//int等价于signed int, signed int 大小区间为-128-127,unsigned int 大小区间为：0-255
unsigned short int k = 10;
signed short int l = -10;

typedef int cxtInt; // typedef 为一个已有的类型取一个新的名字
cxtInt f = 3;

typedef long int *cxtPint;
cxtPint y, z;  //y,z都为int型指针

enum color {
    red, blue = 5, green
} g;
color h;
enum name {
    chenxutang, wuyifan, guohao
} ren;

int maindatatype(int argc, char **argv) {
    showEnum();
    showDataSize();
    return 0;
}

/*第一个不定义默认为0，后面默认加一**/
void showEnum() {
    g = red;
    h = green;
    cout << "red =" << g << endl;
    cout << "blue =" << blue << endl;
    cout << "green =" << h << endl;

    ren = wuyifan;
    cout << "chenxutang =" << chenxutang << endl;
    cout << "wuyifan =" << ren << endl;
    cout << "guohao =" << guohao << endl;
}

void showDataSize() {
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************" << endl;
}

