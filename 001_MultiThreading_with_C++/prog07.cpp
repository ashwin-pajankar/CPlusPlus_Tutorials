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

    std::cout<<"main() id : "<<std::this_thread::get_id()<<"\n";
    std::cout<<"child id : "<<first.get_id()<<"\n";

    if(first.joinable())
        first.join();
    
    std::cout<<"\nfoo() completed...";
    std::cout<<"\nmain() completed...";
    return 0;
}