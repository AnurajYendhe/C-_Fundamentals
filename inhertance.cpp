#include<iostream>
using namespace std;

// parent class
class Demo
{
    public:
    int A,B;  
    Demo()
    {
        cout<<"Inside Demo constructor"<<"\n";
    }
    ~Demo()
    {
        cout<<"Inside Demo destructor"<<"\n";
    }
    void fun()
    {
        cout<<"Inside fun of Demo"<<"\n";
    }
};
//child class
class Hello : public Demo
{
    public:
    int X,Y;  
    Hello()
    {
        cout<<"Inside Hello constructor"<<"\n";
    }
    ~Hello()
    {
        cout<<"Inside Hello destructor"<<"\n";
    }
    void gun()
    {
        cout<<"Inside gun of Hello"<<"\n";
    }
};

int main()
{
    Hello hobj;
    Demo dobj;

    cout<<"size of Hello objet "<<sizeof(hobj)<<"\n";
    dobj.A = 11;
    dobj.B = 21;
    hobj.X = 51;
    hobj.Y = 101;

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";

    hobj.fun();
    hobj.gun();
    
    return 0;
}