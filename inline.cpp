#include<iostream>
using namespace std;

class Demo
{
    public:
        inline void fun()
        {
            cout<<"Inside fun"<<"\n";
        }
};

int main()
{
    Demo obj;

    obj.fun();

    return 0;
}