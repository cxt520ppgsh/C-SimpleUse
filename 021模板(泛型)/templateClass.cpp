#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

//class外定义T
template <class T>
class Stack {
private:
    vector<T> elems;     // 元素 

public:
    void push(T const&);
    T top() const;
    bool empty() const{
        return elems.empty();
    }
};

//J也可以
template <class J>
void Stack<J>::push (J const& elem)
{
    // 追加传入元素的副本
    elems.push_back(elem);
}

//返回
template <class T>
T Stack<T>::top () const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本 
    return elems.back();
}


int mainT()
{
    try {
        Stack<int>         intStack;  // int 类型的栈 
        Stack<string> stringStack;    // string 类型的栈 

        // 操作 int 类型的栈 
        intStack.push(7);
        cout << intStack.top() <<endl;

        // 操作 string 类型的栈 
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
    }
    catch (exception const& ex) {
        cerr << "Exception: " << ex.what() <<endl;
        return -1;
    }
}