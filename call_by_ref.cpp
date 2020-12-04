#include<iostream>
using namespace std;

// pass by reference
void PassByRef(int &x , int &y){
    int z = x;
    x = y;
    y = z;
}
int main(int argc, char const *argv[])
{
    int a =5, b=55;
    cout<<"Before Swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;
    
    //call function
    PassByRef(a,b);
    cout<<"After Swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;

    return 0;
}