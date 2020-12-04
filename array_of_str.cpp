/*
program 1: Create a array of structures and accept input and display output
structure name: person
data members: name, age, salary
*/
#include<iostream>
#include<string>
using namespace std;

struct person
{
    string name;
    int age;
    double salary;
};

int main(int argc, char const *argv[])
{
    person p[2];  /// HERE ARRAY IS USED IN STRUCTURE THEN IT IS CALLED ARRAY OF STRUCTURES
    cout<<"Enter person details like name, age, salary\n";

    for (int i = 0; i < 2; i++)
    {
        cout<<"Details of person "<<i+1<<endl;
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }
    cout<<"Details of users\n";
    for (int i = 0; i < 2; i++)
    {
        cout<<"Details of person "<<i+1<<endl;
        cout<<"Name: "<<p[i].name<<endl;
        cout<<"Age: "<<p[i].age<<endl;
        cout<<"Salary: "<<p[i].salary<<endl;
        
    }
    


    return 0;
}
