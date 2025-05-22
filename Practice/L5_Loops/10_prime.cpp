#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    if(n<2)
    {
        cout<<"Not a Prime Number";
        return 0;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<"Not A Prime Number";
                return 0;
            }
            else
            {
                cout<<"Prime Number";
                return 0;
            }
        }
    }
}