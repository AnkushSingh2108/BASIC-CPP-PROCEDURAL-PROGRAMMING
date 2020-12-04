//Basics of array / array initialization / array traversing / taking user inputs into arrays / printing output

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // datatype array_name[size]
    // int arr[3] ={1,2,3};
    // double arr1[5];
    // arr1[0] = 1.2;
    // arr1[1] = 2.1;
    // char arrc[4];
    // arrc[0] = 'a';

    float temp_arr[5];
    double temp_arr1[5];
    cout<<"Enter 5 decimal values for temp_arr\n";
    cout<<"chl jaaa😒😒😒😒\n";

    for (int i = 0; i < 5; i++)
    {
        cin>>temp_arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<temp_arr[i]<<endl;
    }
    cout<<"Enter 5 decimal values for temp_arr1 \n";
    for (int j = 0; j < 5; j++)
    {
        cin>>temp_arr1[j];
    }
    for (int j = 0; j < 5; j++)
    {
        cout<<temp_arr1[j]<<endl;
    }

    return 0;
} 