/*

Take three numbers a,b,c from the user, print yes if a is either
greater than b or c. Otherwise print NO

*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    
    if(a>b || a>c)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}