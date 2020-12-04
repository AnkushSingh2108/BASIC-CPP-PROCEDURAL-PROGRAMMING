#include<iostream>
using namespace std;

//int maximum(int a,int b); //forward declaration
int mul(int v,int z, int s=0)
{
    return (v*z*s);
}
int maximum(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;   
}
main(int argc, char const *argv[])

{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    int c = maximum(a,b);  // function call
    cout<<"greatest value is "<<c<<endl;
    cout<<"another greatest value out of 5,6 is"<<maximum(5,6)<<endl;
    cout<<"the multiplication is "<<mul(2,4,8)<<endl;
    return 0;
}

