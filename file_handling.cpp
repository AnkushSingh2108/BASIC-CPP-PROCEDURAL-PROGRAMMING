#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    char c[100];
    cout<<"Enter your name and age\n";
    cin.getline(c,100);

    fstream myfile("xyz.txt", ios::out);  // ofstream is a datatype and myfile is a user defined name like we do int x

    myfile.open("xyz.txt");
    myfile<<c;
    myfile.close();
    cout<<"File op performed successfullly\n"<<endl<<endl;

    cout<<"Reading from file operation\n";
    char c1[100];
    ifstream obj("xyz.txt");
    obj.getline(c1,100);
    cout<<"Array content:"<<c1<<endl;
    cout<<"File read operation completed successfully\n";
    obj.close();
    return 0;
}
