#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1;
    int No2;

    Demo() //defult constructor
    {
        cout<<"Inside defult constructor"<<"\n";
        No1 = 0;
        No2 = 0;
    }
    Demo(int i,int j) //parametrised constructor
    {
        cout<<"Inside parametrised constructor"<<"\n";
        No1 = i;
        No2 = j;
    }
    ~Demo()
    {
        cout<<"Inside destructor"<<"\n";
    }
};
int main()
{
    Demo obj1;
    Demo obj2(10,11);

    cout<<"value of obj1.No1 is : "<<obj1.No1<<"\n";
    cout<<"value of obj1.No2 is : "<<obj1.No2<<"\n";
    
    cout<<"value of obj2.No1 is : "<<obj2.No1<<"\n";
    cout<<"value of obj2.No1 is : "<<obj2.No2<<"\n";
    
    return 0;
}