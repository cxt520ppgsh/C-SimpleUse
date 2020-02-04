/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cxt
 *
 * Created on 2018年11月13日, 上午10:07
 */

#include <cstdlib>
#include <iostream>
#include "../head/annotation.h"

using namespace std;

int mainano(int argc, char** argv) {
    annotation();
}

void annotation(){
#if true
    std::cout << "Welcome ...0" << std::endl;
    std::cout << "Welcome ...1" << std::endl;
#else
    std::cout << "Welcome ...2" << std::endl;        //不会被编译
#endif

}

