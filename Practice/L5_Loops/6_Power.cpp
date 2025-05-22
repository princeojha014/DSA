#include<iostream>
using namespace std;
int main ()
{
    int p,n;            // 2^5   2=p, 5=n
    cout<<"Enter  Number : ";
    cin>>p;
    cout<<"Enter Power : ";
    cin>>n;
    int num=p;
    for(int i=1; i<n; i++)
    {
        num=num*p;
    }
    cout<<num;
}