/*
1.WAP to print "I am a Programmer" while user enters 'x'
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    char mychar;
    cout<<"Enter a character: ";
    cin>> mychar;
    while(mychar == 'x')
    {
        cout<<"I am a Programmer\n"<<"Enter a character again: ";
        cin>>mychar;

    }
    cin>>n;
    while (n>0)
    {
        cout<<n<<endl;
        cin>>n;        
    }
    
    return 0;
}
