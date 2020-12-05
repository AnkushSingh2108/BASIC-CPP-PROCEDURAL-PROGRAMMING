/*
Q) WAP to check the largest numbers using 3 different numbers
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y,z;
    cout<<"Enter three numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"Printing B4 all if elses"<<endl;
    if (x>y)
    {
        if (x>z)
        {
            cout<<"The largest number is"<<x<<endl;
        }
        else  //z>x
        {
            cout<<"The largest number is"<<z<<endl;            
        }
    }
    else //y>x
    {
        /* y>x */
        if (x>z)
        {
            cout<<"THe largest number is "<<y<<endl;
        }
        else
        {
            cout<<"All the enetered numbers are same"<<endl;
        }
        
    }
    cout<<"Printing after all if elses"<<endl;
    return 0;
}
