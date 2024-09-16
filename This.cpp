#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1;
    int No2;

    Demo(int i,int j) //(Demo *this,i,j)
    {
        cout<<"Inside parametrised constructor"<<"\n";
        No1 = i;
        No2 = j;
    }
    void fun() // fun(Demo *this = &callor_object)
    {
        cout<<"Inside fun \n";
        cout<<"Value of No1 is : "<<this -> No1<<"\n";
        cout<<"Value of No2 is : "<<this -> No2<<"\n";
    }
    ~Demo() //(Demo *this)
    {
        cout<<"Inside destructor"<<"\n";
    }
};
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    obj1.fun();
    obj2.fun();

    return 0;
}