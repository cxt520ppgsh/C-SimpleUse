#include <iostream>
using namespace std;

double division(int a, int b)
{
    if( b == 0 )
    {
        throw "Division by zero condition!";
    }
    return (a/b);
}

int mainTry()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << z << endl;
        //抛出异常,注意参数
    }catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}