/*
Q. WAP to perform the arithmetic operations on 2 numbers by creating a menu driven program 
where user inputs a number from 1 to 5 and each number corresponds to a particular arithmetic operation 
1- addition
2- subtraction
3- multiplication
4- division
5- modulo ooperation
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"aruthmetic operations program"<<endl;
    cout<<"Enter the operation number to perform the sppropriste operation"<<endl;
    cout<<"1. addition"<<endl<<"2.subtraction"<<endl<<"3. multiplication"<<endl<<"4. division"<<endl<<"5. modulo operation"<<endl;
    cout<<"Enter the operation number"<<endl;
    int option_no;
    cin>>option_no;
    int x,y;

    switch (option_no)
    {
    case 1:
        cout<<"Addition Operation"<<endl<<"Enter two numbers"<<endl;
        cin>>x>>y;
        cout<<"The addition of "<<" the numbers entered is "<<x+y<<endl;
        break;
    case 2:
        cout<<"Subtraction Operation"<<endl<<"Enter two numbers"<<endl;
        cin>>x>>y;
        cout<<"The subtraction of "<<" the numbers entered is "<<x-y<<endl;
        break;
    case 3:
        cout<<"Multiplication Operation"<<endl<<"Enter two numbers"<<endl;
        cin>>x>>y; 
        cout<<"The multiplication of "<<" the numbers entered is "<<x*y<<endl;
        break;
    case 4:
        cout<<"Division Operation"<<endl<<"Enter two numbers"<<endl;
        cin>>x>>y;
        cout<<"The division of "<<" the numbers entered is "<<x/y<<endl;
        break;
    case 5:
        cout<<"Modulo Operation"<<endl<<"Enter two numbers"<<endl;
        cin>>x>>y;
        cout<<"The modulo of "<<" the numbers entered is "<<x%y<<endl;
        break;
    
    default:
        cout<<"No operation is there in this number";
        break;
    }
    return 0;
}
