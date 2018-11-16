#include <unistd.h>
#include "ThreadPool.cpp"
using namespace std;

int mainThreadPool(){
    ThreadPool tp(4);
    Task t1("1");
    Task t2("2");
    Task t3("3");
    tp.add_task(&t1);
    tp.add_task(&t2);
    tp.add_task(&t3);
    sleep(4); //等待调度器结束，不然会崩溃
    return 0;
}