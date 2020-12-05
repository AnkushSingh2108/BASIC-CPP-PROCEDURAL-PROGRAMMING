// Q) WAP to check if entered year is leap year or not 
//  1. Every leap year is divisible by 4
//  2. If leap year is divisible by 100 and 400 both then it is a leap year else not
//  3. If year is not divisible by 100 then it is not a leap year

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cout<<"Enter the year";
    cin>>x;
    if (x%4==0 && x%100==0 && x%400==0)
    {
        cout<<x<<" is a leap year"<<endl;
    }
    else
    {
        cout<<x<<" is not a leap year";
    }    
    return 0;
}
