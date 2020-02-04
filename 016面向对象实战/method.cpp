//
// Created by cxt on 18-11-23.
//
#include <iostream>
#include "class.cpp"
using namespace std;

void Array::set_value() {
    int i;
    cout<<"请输入10个整数"<<endl;
    for(i=0;i<10;i++){
        cin>>array[i];
    }

}

void Array::max_value() {
    int i;
    max=array[0];
    for(i=1;i<10;i++){
        if(array[i]>max)
            max=array[i];
    }
}

void Array::show_value() {
    cout<<"max is :"<<max<<endl;
}
