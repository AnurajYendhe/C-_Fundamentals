#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    int B;
    const int C;
    const int D;

    Demo() : C(11),D(21)
    {
        A = 0;
        B = 0;
    }

    Demo(int i,int j,int k,int l) : C(k),D(l)
    {
        A = i;
        B = j;
    }

};

int main()
{
    Demo obj1;
    Demo obj2(11,21,51,101);

    cout<<obj1.A<<"\n";  // 0
    cout<<obj1.B<<"\n";  // 0
    cout<<obj1.C<<"\n";  // 11
    cout<<obj1.D<<"\n";  // 21
    
    cout<<obj2.A<<"\n";  // 11
    cout<<obj2.B<<"\n";  // 21
    cout<<obj2.C<<"\n";  // 51
    cout<<obj2.D<<"\n";  // 101
    
    return 0;
}