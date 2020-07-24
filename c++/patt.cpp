#include<iostream>
using namespace std;

int main()
{
    int i,k,j,l,n;
    cout<<"Enter any value: ";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        for(k=1; k<=2; k++)
        {
          for (l=1; l<n-i+4; l++)
         {
            cout<<" ";
         }
          for(j=1; j<=i+1; j++)
          {
            cout<<"* ";
          }
          cout<<"\n";
        }
    }
}
