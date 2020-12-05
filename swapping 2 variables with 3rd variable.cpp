#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Swapping variables";
    int x,y,z;
    x =5;
    y =7;
    cout<<"Before Swapping"<<endl;
    cout<<"x is"<< x<<" before swapping"<<endl;
    cout<<"y is"<< y<<" before swapping"<<endl;
   
    z = x; //z = 5
    x = y; // x= 7
    //z = x+y; // y = 12
    y = z; // y = 5
    cout<<"After Swapping"<<endl;
    cout<<"x is"<< x<<" after swapping"<<endl;
    cout<<"y is"<< y<<" after swapping"<<endl;
    return 0;
}
