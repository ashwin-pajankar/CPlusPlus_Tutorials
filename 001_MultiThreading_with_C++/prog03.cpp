#include<iostream>
#include<thread>

class thread_obj{
    public:
    void operator()(int x)
    {
        for (int i=0; i<x; i++)
        {
            std::cout<<"Thread using function object as callable\n";
        }
    }
};

int main()
{
    std::thread first(thread_obj(), 4);
    std::cout<<"\nInside main()...";
    first.join();
    return 0;
}