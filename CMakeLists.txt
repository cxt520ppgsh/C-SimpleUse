cmake_minimum_required(VERSION 3.12)
project(C__SimpleUse)

set(CMAKE_CXX_STANDARD 14)

include_directories(020备注/head)

add_executable(C__SimpleUse
        017内存/runningMem.cpp
        07函数/void.cpp
        06判断/if.cpp
        018命名空间/namespace.cpp
        020备注/head/annotation.h
        020备注/src/annotation.cpp
        09字符串/char.cpp
        09字符串/String.cpp
        03存储类/static.cpp
        014容器/vector.cpp
        02常量/defile.cpp
        012引用/yinyong.cpp
        05循环/loop.cpp
        010指针/point.cpp
        01数据类型/base_data/datatype.cpp
        01数据类型/extern/extern1.cpp
        01数据类型/extern/extern2.cpp
        013数据结构/struct.cpp
        08数组/array.cpp
        "021模板(泛型)/templateClass.cpp"
        "021模板(泛型)/templateVoid.cpp"
        04运算符/math.cpp
        019错误处理/try.cpp
        015面向对象概念/03CircleExtend.cpp
        015面向对象概念/01Class.cpp
        015面向对象概念/02extend.cpp
        015面向对象概念/04interface.cpp
        015面向对象概念/06multiType.cpp
        015面向对象概念/05overload.cpp 014容器/map.cpp 016面向对象实战/main.cpp 016面向对象实战/class.cpp 016面向对象实战/method.cpp 手写线程池/Task.cpp 手写线程池/Thread.cpp 手写线程池/ThreadPool.cpp 手写线程池/Main.cpp 011指针综合/PointTest.cpp)



