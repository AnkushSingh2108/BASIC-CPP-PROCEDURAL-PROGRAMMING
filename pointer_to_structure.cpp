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
    person p1;
    cout<<"Enter details of person as name,age, and salary\n";
    // with the help if variable accessing the i/o
    cin>>p1.name;
    cin>>p1.age;
    cin>>p1.salary;

    cout<<"Details of the person is: \n";
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary: "<<p1.salary<<endl;
    
    // with the help if pointer accessing the i/o    
    person *ptr = &p1;
    cin>>ptr->name;
    cin>>ptr->age;
    cin>>ptr->salary;

    cout<<"Details of the person is: \n";
    cout<<"Name: "<<ptr->name<<endl;
    cout<<"Age: "<<ptr->age<<endl;
    cout<<"Salary: "<<ptr->salary<<endl;
    return 0;
}
