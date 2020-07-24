ri#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    string name;
    cout<<"Enter Ur age: ";
    cin>>a;
    fflush(stdin);
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"\nYour name is: "<<name;
    cout<<"\nAGE= "<<a;
}
