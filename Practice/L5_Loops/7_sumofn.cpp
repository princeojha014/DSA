#include<iostream>
using namespace std;
int main()

{
    int n,ans;
    cout<<"Enter Your Number : ";
    cin>>n;
    ans=n*(n+1)/2;         // Sum Of ap  
    cout<<ans;
}
/*

{
    int n,sum;
    cout<<"Enter Number : ";
    cin>>n;
    sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum Of Numbers Are : "<<sum;
}

*/