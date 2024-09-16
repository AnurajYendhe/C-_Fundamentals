#include<iostream>
using namespace std;

class Demo
{
    public:
    int A,B;
    Demo()
    {
        cout<<"Inside defult constructor"<<"\n";
    }
    Demo(int i,int j)
    {
        cout<<"Inside parametrised constructor"<<"\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor"<<"\n";
    }
};

int main()
{
    cout<<"inside main"<<"\n";
    Demo obj1;                          //static memory allocation
    Demo obj2(11,21);                   //static memory allocation

    Demo *obj3 = new Demo();          //Dynamic memory allocation
    Demo *obj4 = new Demo(51,101);    //Dynamic memory allocation

    delete ptr1;
    delete ptr2;

    cout<<"End of main"<<"\n";
    
    return 0;
}