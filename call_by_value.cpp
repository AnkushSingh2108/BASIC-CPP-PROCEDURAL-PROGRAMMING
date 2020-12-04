#include<iostream>
using namespace std;

void PassByValue(int x, int y){
    int z =x;
    x = y;
    y = z;
}

// pass by reference
void PassByPtr(int *x , int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

void PassByRef(int &x , int &y){
    int z = x;
    x = y;
    y = z;
}
int main(int argc, char const *argv[])
{
    int a =5, b=55;
    cout<<"Call by value before swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;
    
    //call function
    PassByValue(a,b);
    cout<<"Call by value after swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;

    int c =5, d=55;
    cout<<"Call by reference before swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;
    
    //call function
    PassByRef(c,d);
    cout<<"Call by reference after swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;

    int e =5, f=55;
    cout<<"Call by pointer before swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;
    
    //call function
    PassByPtr(&e,&f);
    cout<<"Call by pointer after swapping"<<endl<<"a:"<<a<<"b: "<<b<<endl<<endl;

    return 0;
}