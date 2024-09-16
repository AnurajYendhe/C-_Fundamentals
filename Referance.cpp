#include<iostream>
using namespace std;

int main()
{
    int No = 11;
    int &x = No;
    int &A = No;

    cout<<"Value of No is : "<<No<<"\n";
    cout<<"Value of x is : "<<x<<"\n";

    cout<<"Address of No is : "<<&No<<"\n";
    cout<<"Address of x is : "<<&x<<"\n"; // it's prove there is no seperate memory allocate for referance variables

    return 0;
}