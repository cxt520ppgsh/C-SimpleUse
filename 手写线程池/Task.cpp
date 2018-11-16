//
// Created by cxt on 18-11-23.
//
#include <iostream>
using namespace std;
class Task{
public:
    Task(string params){
        this->params = params;
    };

    virtual void run(){
        cout << params <<endl;
    }

private:
    string params;
};


