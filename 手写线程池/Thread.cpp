//
// Created by cxt on 18-11-23.
//
#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include "Task.cpp"

using namespace std;

class Thread{
private:
    thread mThread;
    bool mIsFree;
    Task *mTask;
    mutex mLocker;
    int id;

public:
    Thread(int id):mIsFree(true){
        mThread =  thread(&Thread::run, this);
        mThread.detach();
        this->id = id;
    }

    bool isFree(){
        return mIsFree;
    }

    void addTask(Task *task){
        if(isFree()){
            mLocker.lock();
            mTask = task;
            mIsFree = false;
            mLocker.unlock();
        }
    }

    void run(){
        while(true){
            if(mTask){
                mLocker.lock();
                mIsFree = false;
                mTask->run();
                mIsFree = true;
                mTask = nullptr;
                mLocker.unlock();
            }
        }
    }
};

