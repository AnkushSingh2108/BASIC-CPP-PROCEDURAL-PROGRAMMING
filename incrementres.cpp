#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    int i=1, j=2, k;
    //  1     2+1=3
    i= i++ + ++i;    
    cout<<"The value of i is "<<i<<endl;
//  k= 1 + 2 + 1   + 3   + 2   +  4     
    k= i + j + i++ + ++i + j++ + ++j;
    cout<<"The value of k is "<<k<<endl;

    int i = 0;
    //  0   -  0  +   1  -  1
    i = i++ - --i + ++i - i--;
    cout<<i<<endl;
    */
   int i=1,m, j =2 , k= 3;
   // 1    - 2    - 3
   m = i-- - j-- - k--;
   cout<<i<<endl;//0
   cout<<j<<endl;//1
   cout<<k<<endl;//2
   cout<<m<<endl;//-4
    return 0;
}