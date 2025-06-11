/*


*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
* 

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter A Number : ";
    cin>>n;

    //Top Star
    for(i=1; i<=n; i++)
    {
      //Left Star
      for(j=1;j<=i;j++)
      {
        cout<<"* ";
      }      
      //Space
      for(j=1; j<=2 * (n - i);j++)
      {
        cout<<"  ";
      }
      //Right Star
      for(j=1;j<=i;j++)
      {
        cout<<"* ";
      }

      cout<<endl;
    }
    

    //Bottom Star
    for(i=n-1; i>=1; i--)
    {
      //Left Star
      for(j=1;j<=i;j++)
      {
        cout<<"* ";
      }      
      //Space
      for(j=1; j<=2 * (n - i);j++)
      {
        cout<<"  ";
      }
      //Right Star
      for(j=1;j<=i;j++)
      {
        cout<<"* ";
      }

      cout<<endl;
    }
}