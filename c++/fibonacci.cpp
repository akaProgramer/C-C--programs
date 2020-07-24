#include<iostream>
using namespace std;
int main()
{
    int i,n1=0,n2=1,n3,number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<n1<<" "<<n2<<" ";
    for(i=2;i<number;i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
}
