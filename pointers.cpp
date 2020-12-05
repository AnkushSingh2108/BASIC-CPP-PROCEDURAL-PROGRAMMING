#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int var=5;

    
    // syntax os pointer is     ->  datatype *pointer_name;
    int *ip;        // pointer to an integer
    double *dp;     // pointer to a double
    float *fp;      // pointer to a float  
    char *cp;       // pointer to a character
    ip = &var;
    cout<<"variable value is "<<var<<endl;
    cout<<"Address to integer pointer is "<<ip<<endl;
    cout<<"Pointer is pointing to "<<*ip<<endl;

    *ip=6;
    cout<<"updated variable value is "<<var<<endl;
    cout<<"updated Address to integer pointer is "<<ip<<endl;
    cout<<"updated Pointer is pointing to "<<*ip<<endl;

    *ip=6002000;
    cout<<"1    updated variable value is "<<var<<endl;
    cout<<"1    updated Address to integer pointer is "<<ip<<endl;
    cout<<"1    updated Pointer is pointing to "<<*ip<<endl;

    *ip=60;
    cout<<"2    updated variable value is "<<var<<endl;
    cout<<"2    updated Address to integer pointer is "<<ip<<endl;
    cout<<"2    updated Pointer is pointing to "<<*ip<<endl;


    return 0;
}