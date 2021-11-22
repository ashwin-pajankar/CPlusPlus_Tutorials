#include<iostream>
#include<thread>

void foo()
{
    std::cout<<"\nInside the routine foo()...";
}

void bar(int x)
{
    std::cout<<"\nInside the routine bar()... "<<x;
}

int main()
{
    std::thread first(foo);
    std::thread second(bar, 0);

    std::cout<<"\nInside main()...";

    // synchronize threads ..
    first.join();
    second.join();

    std::cout<<"\nfoo() and bar() completed.\n";
    std::cout<<"\nmain() completed.\n";

    return 0;
}