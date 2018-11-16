//
// Created by cxt on 18-11-16.
//

#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape( int a=0, int b=0)
    {
        width = a;
        height = b;
    }
    //调用函数 area() 被编译器设置为基类中的版本，这就是所谓的静态多态，或静态链接-函数调用在程序执行前就准备好了。
    // 有时候这也被称为早绑定，因为 area() 函数在程序编译期间就已经设置好了
    int area()
    {
        cout << "Parent class area :" <<endl;
        return 0;
    }

    //虚函数
    virtual int area2()
    {
        cout << "Parent class area :" <<endl;
        return 0;
    }

    // 纯虚函数
    virtual int area3() = 0;
};

class Rectangle: public Shape{
public:
    Rectangle( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }

    //纯虚函数必须覆盖，可以理解为抽象类
    int area3()
    {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }
};
class Triangle: public Shape{
public:
    Triangle( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Triangle class area :" <<endl;
        return (width * height / 2);
    }

    int area2 ()
    {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }

    int area3()
    {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }
};
// 程序的主函数
int mainDuotai( )
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle  tri(10,5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();
    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->area();

    //这里执行派生类的方法
    shape->area2();
    shape->area3();
    return 0;
}