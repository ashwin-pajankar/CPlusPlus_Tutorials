#include<iostream>
#include<thread>

void foo()
{
    std::cout<<"\nInside foo()...";
}

int main()
{
    std::thread first(foo);
    std::cout<<"\nInside main()...";

    first.detach();
    if(first.joinable())
        first.join();
    
    std::cout<<"\nfoo() completed...";
    std::cout<<"\nmain() completed...";
    return 0;
}