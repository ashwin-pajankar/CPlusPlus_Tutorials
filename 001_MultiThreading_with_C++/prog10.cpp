#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;

void foo(int i)
{
    m.lock();
    std::cout<<"\nInside thread no: "
    <<i
    <<"\n";
    m.unlock();
}

int main()
{
    std::thread myThreads[20];

    for ( int i = 0; i<20; i++ )
        myThreads[i] = std::thread(foo, i);

    std::cout<<"\nInside main()...";

    for ( int i = 0; i<20; i++ )
        if(myThreads[i].joinable())
            myThreads[i].join();

    return 0;
}