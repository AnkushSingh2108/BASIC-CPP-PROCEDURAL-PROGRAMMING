#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    char mychar;
    do
    {
        cout<<"I am a Programmer\n"<<"Enter a character again to print the message again: ";
        cin>>mychar;
        } while (mychar == 'x');
        cout<<"Enter a number u want  to print";
        cin>>n;
        do
        {
            cout<<n<<endl;
            cin>>n;
        } while (n>0);
        
    return 0;
}
