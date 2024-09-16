#include<iostream>
using namespace std;

// Abstract class
class Base
{
    public:
    int A,B;

    int Addition(int i,int j) // concreate function
    {
        return i + j;
    }  
    virtual int Substract(int i,int j) // concreate function
    {
        return i - j;
    }  
    virtual int Multiplication(int i,int j) = 0;  // Pure virtual function (abstract)
};

class Derived : public Base
{
    public:
    int X,Y;
    int Substract(int i,int j) // concreate function
    {
        return i - j;
    }  
    int Multiplication(int i,int j)
    {
        return i * j;
    } 
};

int main()
{
    // Base obj; NOT allowed
    Base *bp = new Derived();
    int Ret = 0;

    Ret = bp-> Addition(10,11);
    cout<<"Addition is : "<<Ret<<"\n";
    
    Ret = bp-> Substract(10,11);
    cout<<"Substract is : "<<Ret<<"\n";
    
    Ret = bp-> Multiplication(10,11);
    cout<<"Multiplication is : "<<Ret<<"\n";
    
    return 0;
}