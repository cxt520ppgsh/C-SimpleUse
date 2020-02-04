#include <iostream>
using namespace std;

/*
 * extern表示x在别的cpp文件有定义(不能是h文件只能是cpp文件中定义)，这里不需要include就能拿到x的值
 * */
extern int x;

int mainExtern()
{ cout << x << endl; }
