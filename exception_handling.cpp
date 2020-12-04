#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nr,dr,result;
    cout<<"Enter Nr and Dr\n";
    cin>>nr>>dr;


    try
    {
        if (dr == 0)
        {
            throw dr;
        }
        
        result = nr/dr;  //division happens here
    }
    catch(int exception)
    {
        cout<<"Exception: Divide by zero not allowed "<<exception<<endl;
    }
    

    cout<<"Division is "<<result<<endl;

    return 0;
}
