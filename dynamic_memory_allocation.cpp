#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int *ptr;
    cout<<"Enter the number of values u want to store (size of array)\n";
    cin>>a;

    // Syntax of creating a dynamic array using pointer
    // pointer_name = new datatype_of_the_array[size_of_the_array]
    ptr = new int[a];
    cout<<"Enter the value to be stored in the array\n";
    for (int i = 0; i < a; i++)
    {
        cin>>ptr[i];
    }
    cout<<"values in the array are\n";
    for (int i = 0; i < a; i++)
    {
        cout<<ptr[i]<<endl;
    }
    

    return 0;
}
