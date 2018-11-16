cmake_minimum_required(VERSION 3.12)
project(C__SimpleUse)

set(CMAKE_CXX_STANDARD 14)

include_directories(备注/head)

add_executable(C__SimpleUse
        内存/runningMem.cpp
        函数/void.cpp
        判断/if.cpp
        命名空间/namespace.cpp
        备注/head/annotation.h
        备注/src/annotation.cpp
        字符串/char.cpp
        字符串/String.cpp
        存储类/static.cpp
        容器/vector.cpp
        常量/defile.cpp
        引用/yinyong.cpp
        循环/loop.cpp
        指针/point.cpp
        数据类型/base_data/datatype.cpp
        数据类型/extern/extern1.cpp
        数据类型/extern/extern2.cpp
        数据结构/struct.cpp
        数组/array.cpp
        "模板(泛型)/templateClass.cpp"
        "模板(泛型)/templateVoid.cpp"
        运算符/math.cpp
        错误处理/try.cpp
        面向对象概念/CircleExtend.cpp
        面向对象概念/Class.cpp
        面向对象概念/extend.cpp
        面向对象概念/interface.cpp
        面向对象概念/multiType.cpp
        面向对象概念/overload.cpp 容器/map.cpp 面向对象实战/main.cpp 面向对象实战/class.cpp 面向对象实战/method.cpp 手写线程池/Task.cpp 手写线程池/Thread.cpp 手写线程池/ThreadPool.cpp 手写线程池/Main.cpp 指针综合/PointTest.cpp)



