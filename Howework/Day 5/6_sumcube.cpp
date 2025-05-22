
#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter Number : ";
    cin>>n;
    sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i*i*i;
    }
    cout<<sum;
}
