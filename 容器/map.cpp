//数据的插入--第一种：用insert函数插入pair数据
#include <map>

#include <string>

#include <iostream>

using namespace std;

int mainMap() {

    map<int, string> mapStudent;

    mapStudent.insert(pair<int, string>(1, "student_one"));

    mapStudent.insert(pair<int, string>(2, "student_two"));

    mapStudent.insert(pair<int, string>(3, "student_three"));

    map<int, string>::iterator iter;

    //查找
    iter = mapStudent.find(1);
    cout << iter->first << endl;

    //遍历
    for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
        cout << iter->first << ' ' << iter->second << endl;

}