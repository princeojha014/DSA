#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    if(n>0 && n<13)
    {
        if(n==1)
        {
            cout<<"January";
        }
        if(n==2)
        {
            cout<<"February";
        }
        if(n==3)
        {
            cout<<"March";
        }
        if(n==4)
        {
            cout<<"April";
        }
        if(n==5)
        {
            cout<<"May";
        }
        if(n==6)
        {
            cout<<"June";
        }
        if(n==7)
        {
            cout<<"July";
        }
        if(n==8)
        {
            cout<<"August";
        }
        if(n==9)
        {
            cout<<"September";
        }
        if(n==10)
        {
            cout<<"October";
        }
        if(n==11)
        {
            cout<<"November";
        }
        if(n==12)
        {
            cout<<"December";
        }
    }
    else 
    {
        cout<<"Invalid Entry";
    }
}