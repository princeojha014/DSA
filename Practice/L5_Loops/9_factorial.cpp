#include<iostream>
using namespace std;
int main()

{
    int n,fact;
    cout<<"Enter Number : ";
    cin>>n;
    fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial Of Number Is : "<<fact;
}