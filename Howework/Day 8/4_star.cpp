/*

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K

*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        
        for(int j=1; j<=6; j++)
        {
            char ch= 'F'+ j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }

}