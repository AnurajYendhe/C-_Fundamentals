#include<iostream>
using namespace std;

class Demo
{
    public:
    int A,B; // non static characteristics
    static int X,Y; // static characteristics
    
    Demo() // defult constructor
    {
        cout<<"Inside Demo defult constructor"<<"\n";
        // initialization of non static characteristics
        A = 0;
        B = 0;
    }
    Demo(int i,int j) // parametrised constructor
    {
        cout<<"Inside Demo parametrised constructor"<<"\n";
        // initialization of non static characteristics
        A = i;
        B = j;
    }
    void fun()
    {
        cout<<"Inside non static function fun"<<"\n";
        cout<<"value of A : "<<this->A<<"\n";
        cout<<"value of B : "<<this->B<<"\n";
        cout<<"value of X : "<<X<<"\n";
        cout<<"value of Y : "<<Y<<"\n";

    }
    static gun()
    {
        cout<<"Inside static function gun"<<"\n";
        cout<<"value of X : "<<X<<"\n";
        cout<<"value of Y : "<<Y<<"\n";
    }
};
// initialization of static characteristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    Demo :: gun();
    
    Demo obj1;
    obj1.fun();
    obj1.gun();

    Demo obj2(11,12);
    obj1.fun();
    obj1.gun();
    
    return 0;
}