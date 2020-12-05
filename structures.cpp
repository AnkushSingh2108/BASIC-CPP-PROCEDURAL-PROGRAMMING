//create a structure named- person to store his name,age,salary
#include<iostream>
using namespace std;

struct person
{
    char name[50];
    int age;
    double salary;
};

int main(int argc, char const *argv[])
{
    person p1,p2,p3,p4;
    cout<<"Person details"<<endl<<"Enter person name\n";
    cin.getline(p1.name,100);
    cout<<"Enter age\n";
    cin>>p1.age;
    cout<<endl<<"Enter salary\n";
    cin>>p1.salary;
    cout<<endl<<"Person Details are as follows:\n";
    cout<<"Person Name "<<p1.name<<endl;
    cout<<"Person Age "<<p1.age<<endl;
    cout<<"Person Salary "<<p1.salary<<endl;

    return 0;
}
