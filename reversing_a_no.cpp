#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number to be reversed\n";
    cin>>n;
    int reverse = 0;
    cout<<"hey its b4 while loop\n";
    while (n>0)
    {
        int lastdigit=n%10;
        reverse = reverse*10 +lastdigit;
        n=n/10;
    }
    cout<<"hey its after while loop\n";
    cout<<"reversed number is "<<reverse<<endl;
    
    return 0;
}
