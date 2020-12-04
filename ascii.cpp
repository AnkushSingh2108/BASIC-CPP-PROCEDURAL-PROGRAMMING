#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    char an;
    cout<<"Enter a number whose ascii value to be found\n";
    cin>>n;
    an = char(n);
    cout<<"ASCII value of "<<n<<" "<<"is "<<an<<endl;
    return 0;
}
