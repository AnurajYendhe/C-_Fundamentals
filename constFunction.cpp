#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    Demo(int No)
    {
        A = No;
    }
    void Increment()
    {
        A++;
        cout<<"value of A "<<A<<"\n";
    }
    const int Decrement()
    {
        A--;
        return A;
    }

};

int main()
{
    Demo obj1(10);  
    obj1.Increment();
    int Ret = obj1.Decrement();
    Ret++;
    cout<<Ret<<"\n";

    // Not allowed
    // const Demo obj2(20);  
    // obj2.Increment();
    // Ret = obj2.Decrement();
    // Ret++;
    // cout<<Ret<<"\n";

    return 0;
}