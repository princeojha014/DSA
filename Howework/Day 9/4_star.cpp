/*
A B C D
A B C
A B
A
*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=4; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            char ch= 'A' +  j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}