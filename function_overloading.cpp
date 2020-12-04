#include<iostream>
using namespace std;

double add(int a, int b)
{
    cout<<"Function 1\n";
    return (a+b);
}
double add(double a, double b)
{
    cout<<"Function 2\n";
    return (a+b);
}
double add(int a,int b,int c)
{  
    cout<<"Function 3\n";
    return(a+b+c);
}
double add(int a, double b)
{
    cout<<"Function 4\n";
    return(a+b);
}
double add(double a, int b)
{
    cout<<"Function 5\n";
    return(a+b);
}
double mul(double a, double b)
{
    cout<<"Function 6\n";
    return(a*b);
}
int main(int argc, char const *argv[])
{
    cout<<add(1,2)<<endl;
    cout<<add(1.5,2.5)<<endl;
    cout<<add(1,2,4)<<endl;
    cout<<add(1,2.5)<<endl;
    cout<<add(1.5,2)<<endl;
    cout<<mul(4.0,2.5)<<endl;

    return 0;
}