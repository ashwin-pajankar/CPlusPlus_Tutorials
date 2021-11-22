#include<iostream>
#include<thread>

int main()
{
    std::cout<<"Number of threads = "
    << std::thread::hardware_concurrency()<<std::endl;
    return 0;
}