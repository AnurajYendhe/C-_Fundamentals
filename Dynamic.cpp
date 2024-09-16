#include<iostream>

using namespace std;

int main()
{
    int size = 0;
    int *ptr = NULL;
    cout<<"Enter the size of array : ";
    cin>>size;

    ptr = new int[size];
    cout<<"Enter the elements : \n";
    for(int i = 0;i < size;i++)
    {
        int x = 0;
        cin>>x;
        ptr[i] = x;
    }
    cout<<"Elements in the array is : \n";
    for(int j = 0;j < size;j++)
    {
        cout<<ptr[j]<<"\n";
    }
    delete []ptr;

    return 0;
}