#include<iostream>
using namespace std;

class Arithmatic
{
    private:
    int No1;
    int No2;

    public:
    Arithmatic() //defult constructor
    {
        cout<<"Inside defult constructor"<<"\n";
        No1 = 0;
        No2 = 0;
    }
    Arithmatic(int A,int B) //parametrised constructor
    {
        cout<<"Inside parametrised constructor"<<"\n";
        No1 = A;
        No2 = B;
    }

    int Addition()
    {
        int ans = 0;
        ans = No1 + No2;
        return ans;
    }
    int Subtraction()
    {
        int ans = 0;
        ans = No1 - No2;
        return ans;
    }

    ~Arithmatic()
    {
        cout<<"Inside destructor"<<"\n";
    }
};
int main()
{
    Arithmatic obj1(10,7);
    Arithmatic obj2;

    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";
    Ret = obj1.Subtraction();
    cout<<"Subtraction is : "<<Ret<<"\n";  

    Ret = obj2.Addition();
    cout<<"Addition is : "<<Ret<<"\n"; 
    Ret = obj2.Subtraction();
    cout<<"Subtraction is : "<<Ret<<"\n"; 

    return 0;
}