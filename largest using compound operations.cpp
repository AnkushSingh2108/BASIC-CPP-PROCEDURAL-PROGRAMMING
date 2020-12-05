#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y,z;
    cout<<"Enter three numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"Printing B4 all if elses"<<endl;
    if (x>y && x>z)
    {
        cout<<x<<" is greatest"<<endl;
        //x is greatest
    }
    else if (y>x&&y>z)
    {
        cout<<y<<" is greatest"<<endl;
        // y is greatest
        /* code */
    }
    else
    {
        cout<<z<<" is greatest"<<endl;
        //z is greatest
    }
    return 0;
}
