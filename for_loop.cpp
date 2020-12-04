#include<iostream>
using namespace std;
/*
1. WAP to print "I am a programmer" 5 times
2. WAP to print multiplication table of 5
*/
int main(int argc, char const *argv[])
{
    int sum=0;
    int n;
    cout<<"Enter the number upto which u want to add\n";
    cin>>n;

    for(int i = 1; i<=5; i++){
        cout<<"I am a Programmer\n";
    }
    cout<<"Table of 5:\n";
   
    for(int i = 1; i <= 10; i++){
        cout<<"5 x "<< i <<" = "<<5*i<< endl;
    }

    for (int i = 1; i <=n ; i++)
    {
        sum = i+sum;
    }
    
    cout<<"sum is "<<sum<<endl;

    return 0;
}