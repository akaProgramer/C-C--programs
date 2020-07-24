#include<iostream>
using namespace std;
template <class T>
void sort_array(T a[],int n)
{
    int i,j;
    T t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int a[5],i;
    char b[5];
    float f[5];
    cout<<"Enter 5 integer values:\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter 5 float values:\n";
    for(i=0;i<5;i++)
    {
        cin>>f[i];
    }
    cout<<"Enter 5 characters values:\n";
    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    sort_array(b,5);
    cout<<"\nSorted 5 characters values:\n";
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<endl;
    }
    sort_array(a,5);
    cout<<"\nInteger 5 characters values:\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    sort_array(f,5);
    cout<<"\nSorted 5 characters values:\n";
    for(i=0;i<5;i++)
    {
        cout<<f[i]<<endl;
    }
}
