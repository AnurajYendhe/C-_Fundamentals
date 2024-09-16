#include<iostream>
using namespace std;

class Demo
{
    public:
    void fun()
    {
        cout<<"Inside fun of Demo"<<"\n";
    }   
};
class Hello : public Demo
{
    public:
    void fun() // function redefine
    {
        cout<<"Inside fun of Hello"<<"\n";
    }   
};
int main()
{
    Hello hobj;
    hobj.fun();

    cout<<"size of Hello is : "<<sizeof(Hello)<<"\n";

    return 0;
}