#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    protected:
    int B;
    private:
    int C;
    Demo(int i,int j,int k)
    {
        A = i;
        B = j;
        C = k;
    }
    firend void fun();
};
void fun()
{
    Demo obj(11,21,51);
    cout<<"value of A :"<<obj.A<<"\n";
    cout<<"value of B :"<<obj.B<<"\n";
    cout<<"value of C :"<<obj.C<<"\n";
}
int main()
{
    fun();
    
    return 0;
}