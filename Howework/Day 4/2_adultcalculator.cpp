#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age >0 && age<18)
    {
        cout<<"You Are A Teenager";
    }
    else if(age>0 && age>18)
    {
        cout<<"You  Are A Adult ";
    }
    else
    {
        cout<<"Invalid Entry";
    }

    
}
