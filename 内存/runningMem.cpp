#include <iostream>
using namespace std;

class Box
{
public:
    Box() {
        cout << "调用构造函数！" <<endl;
    }
    ~Box() {
        cout << "调用析构函数！" <<endl;
    }
};


int main()
{
    //非数组内存请求和删除
    double* pvalue  = NULL;
    //请求内存
    pvalue  = new double;
    *pvalue = 29494.99;
    //以指针为入口释放内存
    delete pvalue;

    //数组内存请求和删除
    char* pvalueArray  = NULL;
    pvalueArray  = new char[20];
    delete [] pvalueArray;

    //对象内存请求和删除
    Box* myBoxArray = new Box[4];
    delete [] myBoxArray; // 删除数组

    return 0;
}