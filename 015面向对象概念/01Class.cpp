//
// Created by cxt on 18-11-15.
//
#include <iostream>

using namespace std;

class Box {
    //默认私有
    double width;

private:
    double name;
    int *ptr = NULL;

    //派生类可以访问
protected:
    double age;

public:

    //静态成员，无论创建多少个类的对象，静态成员都只有一个副本
    static int objectCount;

    double height;

    friend void printWidthfriend(Box box);

    void printWidth(Box box);

    //class中函数要么声明，要么定义
    void setWidth(double wid);

    //class中函数要么声明，要么定义
    double getVolume(void) {
        return width * height;
    }

    //构造函数
    Box(int i);

    //构造函数
    Box(double i);

    //构造函数可以在class中定义
    //Box(void)
    //{
    //    cout << "Object is being created" << endl;
    //}

    // 这是析构函数声明
    ~Box();

    //拷贝构造函数
    Box(const Box &obj);


    int compare(Box box);


    //静态成员函数没有 this 010指针，只能访问静态成员
    static int getCount() {
        return objectCount;
    }

};

Box::Box(int i) {
    cout << "Object is being created" << endl;
}

//初始化字段
Box::Box(double len) : name(len) {
    //相当于name = len;
    cout << "Object is being created, length = " << len << endl;
}

//默认有拷贝构造函数
//如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数
//拷贝构造函数通过使用另一个同类型的对象来初始化新创建的对象。
Box::Box(const Box &obj) {
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
}

//析构函数,每次删除所创建的对象时执行，一个类中只可能定义一个析构函数
Box::~Box(void) {
    cout << "释放内存" << endl;
    if (ptr != NULL) {
        delete ptr;
    }
}

//普通成员函数
void Box::setWidth(double wid) {
    width = wid;
}

//printWidthfriend() 是 Box 的友元函数，它可以直接访问该类的任何成员,
//友元函数没有this指针
void printWidthfriend(Box box) {
    cout << "Width of box friend : " << box.name << endl;
}

void printWidth(Box box) {
    cout << "Width of box : " << box.height << endl;
}

Box &getBox() {
    Box *box = new Box(1);//如果是new的对象，即使离开了作用域也会一直存在，必须主动delete，否则只有在结束程序时才会执行析构
    delete (box); //调用析构函数
    Box b(3);
    return b;
}


//内联函数
inline int Max(int x, int y) {
    return (x > y) ? x : y;
    /**
     * 内联函数inline：引入内联函数的目的是为了解决程序中函数调用的效率问题，这么说吧，
     * 程序在编译器编译的时候，编译器将程序中出现的内联函数的调用表达式用内联函数的函数体进行替换，而对于其他的函数，
     * 都是在运行时候才被替代。这其实就是个空间代价换时间的i节省。所以内联函数一般都是1-5行的小函数。在使用内联函数时要留神：
    1.在内联函数内不允许使用循环语句和开关语句；
    2.内联函数的定义必须出现在内联函数第一次调用之前；
    3.类结构中所在的类说明内部定义的函数是内联函数。
     * */
}

//每一个对象都能通过 this 指针来访问自己的地址
int Box::compare(Box box) {
    return this->getVolume() > box.getVolume();
}

//只能在外部初始化类的静态成员
int Box::objectCount = 0;


int mainclass() {

    Box box(3);
    box.height = 50;
    // 使用成员函数设置宽度
    box.setWidth(10.0);
    //使用拷贝构造函数,可以理解成浅拷贝，所以这里会使同一个对象有两次析构函数调用，指针重复回收错误
    Box box2 = box; // 相当于 Box box2(box); 调用拷贝构造函数，而不调用普通构造函数

    printWidth(box);  //有拷贝构造函数类的对象(引用则不会调用)作为为函数的实参，自动调用该类的拷贝构造函数
    cout << " " << endl;
    cout << "getBox start" << endl;
    Box box3 = getBox(); // 函数返回值为有拷贝构造函数类的对象的引用(仅对象不会调用)，自动调用拷贝构造函数
    cout << "getBox end" << endl;
    cout << " " << endl;

    // 使用友元函数输出宽度,可以理解成浅拷贝调用里面的东西，所以这里会使同一个对象有两次析构函数调用，指针重复回收错误
    printWidthfriend(box);
    cout << "printWidthfriend end" << endl;
    cout << " " << endl;

    //调用内联函数
    Max(20, 10);

    cout << " " << endl;
    cout << "box.compare(box2) start" << endl;
    box.compare(box2);
    cout << "box.compare(box2) end" << endl;
    cout << " " << endl;
    //指向类的指针
    Box *ptrBox;
    ptrBox = &box;
    ptrBox->compare(box); //调用拷贝构造函数

    // 静态成员的调用
    cout << "Total objects: " << Box::objectCount << endl;
    cout << "Final Stage Count: " << Box::getCount() << endl;

    return 0;
}