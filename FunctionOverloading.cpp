#include<iostream>
using namespace std;

class Demo
{
    public:
    int Addition(int No1,int No2)
    {
        cout<<"Addition of two integer"<<"\n";
        return No1 + No2;
    }
    int Addition(int No1,int No2,int No3)
    {
        cout<<"Addition of three integer"<<"\n";
        return No1 + No2 + No3;
    }
    float Addition(float No1,float No2)
    {
        cout<<"Addition of two float"<<"\n";
        return No1 + No2;
    }
    double Addition(double No1,double No2)
    {
        cout<<"Addition of two double"<<"\n";
        return No1 + No2;
    }
    
};
int main()
{
    Demo obj;
    int iRet = 0;
    iRet = obj.Addition(10,11);
    cout<<"Addition of integer is : "<<iRet<<"\n";

    iRet = obj.Addition(10,11,12);
    cout<<"Addition of integer is : "<<iRet<<"\n";

    float fRet = obj.Addition(10.89f,11.987f);
    cout<<"Addition of float is : "<<fRet<<"\n";

    double dRet = obj.Addition(10.98798,11.98876);
    cout<<"Addition of double is : "<<dRet<<"\n";
    
    return 0;
}