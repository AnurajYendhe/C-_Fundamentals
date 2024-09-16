#include<iostream>
using namespace std;

// parent class
class Demo
{
    public:
    int A;
    protected:
    int C;
    Demo()
    {
        A = 10;
        C = 20;
    }
    
};
//child class
class Hello : public Demo
{
    public:
    void fun()
    {
        // only access public and protected data can't access private data if inhertance is public
        cout<<"value of A is : "<<this-> A<<"\n";
        cout<<"value of C is : "<<this-> C<<"\n";
    }
};


int main()
{
    Hello hobj;
    hobj.fun();
    
    return 0;
}