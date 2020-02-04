#include <iostream>
#include <cstring>

using namespace std;

void char1();
void char2();
void char3();
void char4();

int mainchar()
{
    char1();
    char2();
    char3();
    char4();
    return 0;
}

void  char1(){
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int  len ;

    // 复制 str1 到 str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat( str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

}

void char2(){
    char a[4] = "hea";
    cout << a[1] << endl;  //e
    cout << &a[1] << endl; //ea 这里本应该是个地址，但是char特殊，显示起始到末尾的字符串
    cout << *&a[1] << endl; //e
    cout << a << endl;     //hea
    cout << &a << endl;     //0x7ffee64c4978
    cout << a+1 << endl;     //ea
}


void char3(){
    char str[4] = "abc"; // 可行
    char *str2 = "abc"; //可行, "abc"本身是char*类型，也可以是char str[4]类型
    //char str[4]; str = "abc";   //不可行
    // 不能这样赋值 str通常是数组首地址指针，并且不能修改。
    // 假如str改变了，那么意味着没有任何指针再指向那段内存，此时内存泄露！
}

void char4(){
    char a[11] = "char4";   //"char4" 本身是char*类型
    char* p = a;
    //p是指针毫无疑问，指针中存储的是个地址也是毫无疑问的；
    //C++里cout太自作聪明了（<<运算符重载），为了省去我们循环输出字符的麻烦，cout<<p;被翻译为输出p指向的字符串值。
    //强转为(void*)可以打出地址
    cout << " " << endl;
    cout << (void*)a << endl; //0x7ffeed8cc97d  //a指向的地址是他自己本身的地址
    cout << (void*)p << endl; //0x7ffeed8cc97d
    cout << (void*)&p << endl; //0x7ffeec368970
    cout << (void*)&a << endl; //0x7ffeec36897d
    cout << (void*)&p[0] << endl; //0x7ffeed8cc97d
    cout << (void*)*p << endl; //0x63 c
    cout << (void*)*a << endl; //0x63 c

    cout << (void*)p[1] << endl; //0x68 h
    cout << (void*)&a[1] << endl;  //0x7ffeed8cc97e
    cout << (void*)&p[1] << endl;  //0x7ffeed8cc97e
}