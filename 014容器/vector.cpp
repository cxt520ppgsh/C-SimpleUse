#include <iostream>
#include <vector>
using namespace std;

int mainvector()
{
    // 创建一个向量存储 int
    vector<int> vec;
    int i;

    // 显示 vec 的原始大小
    cout << "初始大小 = " << vec.size() << endl;

    // 推入 5 个值到向量中
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }

    // 显示 vec 扩展后的大小
    cout << "扩展后大小 = " << vec.size() << endl;

    // 访问向量中的 5 个值
    for(i = 0; i < 5; i++){
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // 使用迭代器 iterator 访问值
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}