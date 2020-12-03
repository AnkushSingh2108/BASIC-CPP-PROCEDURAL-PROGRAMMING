/*Basics of 2d-array / array initialization / array traversing / taking user inputs into arrays / printing output 
 addn subn mul operations
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int j,i,k,a,s;
    int arr3[3][3];
    int arr1[3][3];
    int arr2[3][3];
    cout<<"What is the dimensionality of your array\n";
    cin>>a;


    cout<<"For arr1\n";
    for ( i = 0; i < a; i++)
    {
    for ( j = 0; j < a; j++)
        {
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
    for ( j = 0; j < a; j++)
    {
        for ( i = 0; i < a; i++)
        {
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<"for arr2\n";
    for ( i = 0; i < a; i++)
    {
    for ( j = 0; j < a; j++)
        {
            cin>>arr2[i][j];
        }
        cout<<endl;       
    }
    for ( j = 0; j < a; j++)
    {
        for ( i = 0; i < a; i++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"what u want to compute   for addition press1     for subtraction press 2     for multiplication press 3\n";
    cin>>s;
    
    switch (s)
    {
    case 1:
        cout<<"the addition of arr1 and arr2\n";
    for ( j = 0; j < a; j++)
    {
        for ( i = 0; i < a; i++)
        {
            cout<<arr2[i][j]+arr1[i][j]<<"\t";
        }
        cout<<endl;
    }    
        break;
    case 2:
    cout<<"the subtraction of arr1 and arr2\n";
    for ( j = 0; j < a; j++)
    {
        for ( i = 0; i < a; i++)
        {
            cout<<arr2[i][j]-arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    case 3:
    cout<<"the multiplication of arr1 and arr2\n";
    for ( j = 0; j < a; j++)
    {
        for ( i = 0; i < a; i++)
        {
            cout<<arr2[i][j]*arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    default:
        break;
    }
    
    return 0;
}