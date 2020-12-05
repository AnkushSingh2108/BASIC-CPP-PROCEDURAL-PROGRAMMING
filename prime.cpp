#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,i;
    bool flag;
    cout<<"Enter a number\n";
    cin>>n;


    for (i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"It is NOT a prime number"<<endl;
            flag=1;
            break;
        }
       
    }
    if (flag==0)
    {
        cout<<"PRIME NUMBER\n";
    }
    return 0;
}
