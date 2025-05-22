#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age <= 12 || age>=60 )
    {
        cout<<"You Are Elligble For Discount ";
    }
    else if(age>0 && age>18)
    {
        cout<<"Invalid Entry ";
    }
    else
    {
        cout<<"You Are Not Elligble";
    }

    
}
