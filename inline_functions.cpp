#include<iostream>
using namespace std;

inline int add(int a, int b, int c=10)
{
    return (a+b+c);
}
int main(int argc, char const *argv[])
{
    cout<<"Addition of 3 and 4 is "<<add(3,4)<<endl;
    cout<<"Addition is "<<add(20,25,24)<<endl;
    cout<<"Addition is "<<add(20,25)<<endl;
    return 0;
}