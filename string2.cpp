// calculate the length of string using user-define function

#include<iostream>
using namespace std;

int strlenX(char *str)
{
    int icent = 0;
    while(*str != '\0')
    {
        icent++;
        str++;
    }
    return icent;
}
int main()
{
    char Arr[10];
    int iRet = 0;

    cout<<"Enter a String : ";
    cin>>Arr;

    iRet = strlenX(Arr);
    cout<<"length of String is : "<<iRet<<"\n";

    return 0;
}