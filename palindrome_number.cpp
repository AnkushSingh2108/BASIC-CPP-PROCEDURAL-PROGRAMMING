// Q) WAP to check a number is a palindrome or not.
// A palindrome number is a number if it is written reversely is the same value of the original one

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter a number to check if its a palindrome or not\n";
    int n,nnum,num,digit,rev = 0;
    cin>>num;
    nnum = num;
    while (num!=0)
    {
        digit = num%10;   //digit = 121%10=1
        rev = (rev*10) + digit; //rev = (0*10) + 1 = 1
        num = num/10; // num = 121/10 =12
    }
    if (nnum==rev)
    {
        cout<<nnum<<" is a palindrome number"<<endl;        
    }
    else
    {
        cout<<nnum<<" is not a palindrome number"<<endl;
    }    
    return 0;
}
