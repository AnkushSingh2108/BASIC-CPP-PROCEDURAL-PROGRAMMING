// armstrong number is a number whose sum of the cube of each digit is equal to the number itself
#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,sum=0;
    int originaln;
    cout<<"Enter a number to be checked that is it a armstrong number\n";
    cin>>n;
    cout<<"b4 while";
    while (n>0)
    {
        int lastdigit = n%10;
        sum= sum+ pow(lastdigit,3);
        n = n%10;
    }
    cout<<"After while";
    if (sum==originaln)
    {
        cout<<"The entered number is a Armstrong number\n";
    }
//    cout<<"after if";    
    else
    {
        cout<<"The entered number is not a Armstrong number\n";
    }
    cout<<"after if-else";
    return 0;
}
