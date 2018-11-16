//
// Created by cxt on 18-11-23.
//

//
// Created by cxt on 18-11-23.
//
#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include "Thread.cpp"
using namespace std;

class ThreadPool{
public:
    ThreadPool(int n = 10){
        while (n--){
            Thread t(n) ;
            Thread *tPtr = &t;
            mPool.push_back(tPtr);
            //上面三行可以用两行概括
            //Thread *t = new Thread();
            //_pool.push_back(t);
        }
        thread mainThread(&ThreadPool::run,this);
        mainThread.detach();
    }

    ~ThreadPool(){
        for (int i = 0; i < mPool.size(); ++i) {
           delete mPool[i];
        }
    }

    void add_task(Task *task){
        mLocker.lock();
        mTask_queue.push(task);
        mLocker.unlock();
    }

    void run(){
        while (true){
            mLocker.lock();
            if(mTask_queue.empty()){
                continue;
            }
            for (int i = 0; i < mPool.size(); ++i) {
                if (mPool[i]->isFree()){
                    mPool[i]->addTask(mTask_queue.front());
                    mTask_queue.pop();
                    break;
                }
            }
            mLocker.unlock();
        }
    }
private:
    queue<Task *> mTask_queue;
    vector<Thread *> mPool;
    mutex mLocker;
};