/*
A = {1,2,3} B={2,4,6}
addn = {3,6,9}
subn = {-1,-2,-3}
mul = {2,8,18}
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[3] , B[3] , add[3] , sub[3], mul[3];

    cout<<"Enter three integers for array A\n";
    for (int i = 0; i < 3; i++)
    {
        cin>>A[i];
    }
    cout<<"Entered array of numbers for array A is \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<A[i]<<endl;;
    }
    cout<<"Enter three integers for array B\n";
    for (int i = 0; i < 3; i++)
    {
        cin>>B[i];
    }
    cout<<"Entered array of numbers for array B is \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<B[i]<<endl;
    }
    cout<<"Addition of Array A and B is \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<A[i]+B[i]<<endl;
    }
    cout<<"Subtraction of Array A and B is \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<A[i]-B[i]<<endl;
    }
    cout<<"Multiplication of Array A and B is \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<A[i]*B[i]<<endl;
    }
    cout<<"Powers of Array A to the array B by brute force is \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<pow(A[i],B[i])<<endl;
    }    
    return 0;
}
