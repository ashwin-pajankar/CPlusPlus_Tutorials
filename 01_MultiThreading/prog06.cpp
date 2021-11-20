#include<iostream>
#include<thread>

void foo()
{
    std::cout<<"\nInside foo()...";
}

int main()
{
    std::thread first(foo);
    std::thread second = move(first);
    std::cout<<"\nInside main()...";


    if(first.joinable())
        first.join();
    if(second.joinable())
        second.join();
    
    std::cout<<"\nfoo() completed...";
    std::cout<<"\nmain() completed...";
    return 0;
}