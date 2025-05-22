#include<iostream>
using namespace std;
int main ()
{
    int n,ans;
    cout<<"Enter Number : ";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        ans=i*n;
        cout<<n<<" * "<<i<<" = "<<ans<<endl;
    }
}