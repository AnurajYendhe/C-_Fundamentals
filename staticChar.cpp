#include<iostream>
using namespace std;

class Demo
{
    public:
    int A,B; // non static characteristics
    static int X,Y; // static characteristics
    Demo()
    {
        // initialization of non static characteristics
        A = 0;
        B = 0;
    }
};
// initialization of static characteristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    cout<<"value of X : "<<Demo :: X<<"\n";
    cout<<"Value of Y : "<<Demo :: Y<<"\n";
    

    Demo obj1;
    
    cout<<"value of A from obj1 is : "<<obj1.A<<"\n";
    cout<<"value of B from obj1 is : "<<obj1.B<<"\n";
    cout<<"value of X from obj1 is : "<<obj1.X<<"\n";
    cout<<"value of Y from obj1 is : "<<obj1.Y<<"\n";

    obj1.X = 12; // we can change the value of static variables using object but it's applicable for all object after change
    cout<<"value of X from obj1 is : "<<obj1.X<<"\n";
    cout<<"Value of X : "<<Demo :: X<<"\n";

    cout<<"size of Demo object is : "<<sizeof(obj1)<<"\n"; // 8byte

    return 0;
}