// Q) WAP to perform swapping of two variable values without using the third variable
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;
    x = 5;
    y = 6;
    cout<<"before swapping value of x is "<<x<<" and of y is "<<y<<endl;
    
    x = x+y; // x = 5+6=11
    y = x-y;   //y = 11-6=5
    x = x-y;  //x= 11-5=6
    cout<<"After swapping value of x is "<<x<<" and value of y is "<<y<<endl;
    return 0;
}
