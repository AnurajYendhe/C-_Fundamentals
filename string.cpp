#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char Name1[6] = {'H','e','l','l','o','\0'};
    
    char Name2[] = {'H','e','l','l','o','\0'};

    char Name3[] = "Hello";

    cout<<"size of Name1 is : "<<sizeof(Name1)<<"\n";
    cout<<"size of Name2 is : "<<sizeof(Name2)<<"\n";
    cout<<"size of Name3 is : "<<sizeof(Name3)<<"\n";

    cout<<"length of Name1 is : "<<strlen(Name1)<<"\n";
    cout<<"length of Name2 is : "<<strlen(Name2)<<"\n";
    cout<<"length of Name3 is : "<<strlen(Name3)<<"\n";

    cout<<Name1<<"\n";
    cout<<Name2<<"\n";
    cout<<Name3<<"\n";


    return 0;
}