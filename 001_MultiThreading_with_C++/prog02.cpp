#include<iostream>
#include<thread>

auto f = [](int x)
{
    std::cout<<"\nInside the lambda expression... "<<x;
};

int main()
{
    std::thread first(f, 0);
    std::cout<<"\nInside main()...";
    first.join();
    return 0;
}