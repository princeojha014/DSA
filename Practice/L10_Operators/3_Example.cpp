#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter A Chractor : ";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"Vovel";
    }
    else
    {
        cout<<"Consonant ";
    }
}