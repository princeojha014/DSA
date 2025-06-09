/*
        A
      A B
    A B C 
  A B C D
A B C D E

*/

#include<iostream>
using namespace std;
int main()
{
    int i;
    char ch;
    for(i=1; i<=5;i++)
    {
        for(ch='A'; ch<='E'-i; ch++)
        {
            cout<<" ";
        }
        for(ch='A'; ch<='A'+ i-1; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}