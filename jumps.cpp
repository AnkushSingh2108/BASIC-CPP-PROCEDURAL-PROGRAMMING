#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int paisa=3000;
    for (int date = 0; date <= 30; date++)
    {
        if (date%2==0)
        {
            continue;                       //comtinue statement is used to jump to the next iteration
        }
        if (paisa==0)
        {
            break;                         // break statement is used to terminat the iteration
        }
        
        cout<<"Go Out Today\n";
        paisa=paisa-300;
    }
    
    return 0;
}
