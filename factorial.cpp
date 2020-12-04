// Q) WAP to calculate factorial of a number
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;
    cout<<"Enter the number you want to take the factorial of"<<endl;
    cin>>x;
    y = x;
    while (x>1)
    {
        x--;
        y = x*y;
    }
    
    cout<<y<<" is the factorial "<<endl;
    return 0;
}
