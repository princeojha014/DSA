#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 1st Number : ";
    cin>>n1;
    cout<<"Enter 2nd Number : ";
    cin>>n2;
    if(n1>n2)
    {
        cout<<n1<<" Is Bigger Number";
    }
    if(n2>n1)
    {
        cout<<n2<<" Is Bigger Number";
    }
    if(n1==n2)
    {
        cout<<"False Entry Numbers Can't Be Same";
    }
}
