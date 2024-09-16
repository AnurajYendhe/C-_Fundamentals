#include<iostream>
using namespace std;

// grand parent class
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
//prent class
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
// child class
class PPA : public Hello
{
    public:
    int i,j;  
    PPA()
    {
        cout<<"Inside PPA constructor"<<"\n";
    }
    ~PPA()
    {
        cout<<"Inside PPA destructor"<<"\n";
    }
    void sun()
    {
        cout<<"Inside sun of PPA"<<"\n";
    }
};

int main()
{
    PPA pobj;
    Hello hobj;
    Demo dobj;
    
    cout<<"size of PPA objet "<<sizeof(pobj)<<"\n";
    cout<<"size of Hello objet "<<sizeof(hobj)<<"\n";
    cout<<"size of Demo objet "<<sizeof(dobj)<<"\n";

    pobj.fun();
    pobj.gun();
    pobj.sun();
    
    return 0;
}