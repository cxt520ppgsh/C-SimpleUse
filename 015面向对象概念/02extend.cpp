#include<iostream>
#include<assert.h>

using namespace std;

class A {
public:
    int a;
    int c;
    A() {
        a1 = 1;
        a2 = 2;
        a3 = 3;
        a = 4;
    }

    void fun() {

    }

public:           //能被派生类和外部访问
    int a1;
protected:          //能被派生类访问，不能被外部访问
    int a2;
private:            //不能被派生类访问，不能被外部访问
    int a3;
};

//public继承,派生类访问父类规则不变，外部类通过派生类访问父类不变
//protected继承,派生类访问父类规则不变，外部类通过派生类访问父类，父类属性大于protected变为protected，其他不变
//private继承,派生类访问父类规则不变，外部类通过派生类访问父类，父类属性大于private变为private，其他不变
class B : private A{
public:
    int a;
    B(int i){
        A();
        a = i;
    }
    void fun(){
        cout << a << endl;       //正确，public成员。
        cout << a1 << endl;       //正确，基类public成员,在派生类中变成了private,可以被派生类访问。
        cout << a2 << endl;       //正确，基类的protected成员，在派生类中变成了private,可以被派生类访问。
        //cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
    }
};

class C {
public:
    int a;
    C(int i){
        A();
        a = i;
    }
    void fun(){

    }
};


// 多继承
class D: public A, public C
{
public:
    int getArea()
    {
        //a = 0;  错误,C和A都有定义a
        c = 0;
    }
};


int mainExtend(){
    B b(10);
    cout << b.a << endl;       //正确，覆盖
    //cout << b.a1 << endl;      //错误，private成员不能在类外访问。
    //cout << b.a2 << endl;      //错误, private成员不能在类外访问。
    //cout << b.a3 << endl;      //错误，private成员不能在类外访问。
    system("pause");
    return 0;
}