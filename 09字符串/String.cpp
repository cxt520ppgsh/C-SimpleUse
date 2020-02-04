#include <iostream>
#include <string>

using namespace std;

int mainstring()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int  len ;

    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // 连接后，str3 的总长度
    len = str3.size();
    cout << "str3.size() :  " << len << endl;

    // 连接后，str3 的总长度
    string str4 = str3.substr(0,2); //0表示其实
    cout << "str3.substring(0,2) :  " << str4 << endl;

    // 转换成char*
    char *strchar =(char *)malloc((str1.size())*sizeof(char));
    str1.copy(strchar,str1.size(),0);
    printf("%s",strchar);
    return 0;
}

