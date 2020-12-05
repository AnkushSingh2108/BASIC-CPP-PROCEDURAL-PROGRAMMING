#include<iostream>
using namespace std;
// WAP to take input from user (1-7) and print the corresponding week day
//ie 1- Monday 2- Tuesday
int main(int argc, char const *argv[])
{
    cout<<"Enter a number between 1&7\n";
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
    cout<<"Its Monday";
        break;
    case 2:
    cout<<"Its Tuesday";
        break;
    case 3:
    cout<<"Its Wednesday";
        break;
    case 4:
    cout<<"Its Thursday";
        break;
    case 5:
    cout<<"Its Friday";
        break;
    case 6:
    cout<<"Its Saturday";
        break;
    case 7:
    cout<<"Its Sunday";
        break;
    default:
    cout<<"In valid input";
        break;
    }
    return 0;
}
