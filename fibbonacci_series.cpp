// Q)  WAP to print the fibbonaci series ex 0 1 1 2 3 5 8 

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,a,n1=0, n2 =1;
    cout<<"how many fibbonacci numbers u want to print"<<endl;
    cin>>a; // a=5
    // cout<<"How many terms of fibbonaci series do you want to print "<<endl;
    cout<<"FIBBONACCI SERIES\n";
    for (int i = 0; i<a; i++)
    {/*
        cout<<n1<<endl;  //1) op=0      2)op=1          3) op=1     4) op=2     5) op=3
        n = n1+n2;  //1) n=0+1=1        2)n=1+1=2       3)n=1+2=3   4)n=5       5) n=8
        n1 = n2;  //1)n1= 1             2)n1=1          3)n1=2      4)n1=3      5)n1=5
        n2 = n;  //1)n2 =1              2)n2=2          3)n2=3      4)n2=5      5)n2=8
        cout<<n2<<endl; //op=1           2)op=2        3)op=3    4)op=5    5)op=8
        // fop =
        /*
        0
        1
        1
        2
        1                                           WRONG OUTPUT AS PER THE INTUTION
        3
        2
        5
        3
        8
        */
       cout<<n1<<endl;//    op=0        op=1        op=1        op=2        op=3        op=5    
       n = n1+n2;//         n=1         n=2         n=3         n=5         n=8         n=13
       n1 = n2;//           n1=1        n1=1        n1=2        n1=3        n1=5        n1=8
       n2 = n;//            n2=1        n2=2        n2=3        n2=5        n2=8        n2=13

    }
    


    
    return 0;
}
