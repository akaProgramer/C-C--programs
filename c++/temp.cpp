#include<iostream>
using namespace std;
template<class T>
{

  T largest(T a,T b,T c)
  {
     return((a>b&&a>c)?a:(b>a&&b>c)?b:c)
  }
}
int main()
{
    int x,y,z;
    char p,q,r;
    float g,h,i;
    cout<<"Enter 3 integers number: ";
    cin>>x>>y>>z;
    cout<<"Enter 3 character: ";
    cin>>p>>q>>r;
    cout<<"Enter 3 float number: ";
    cin>>g>>h>>i;
    cout<<"is greatest integer "<<largest(x.y.z)<<"value"<<endl;
    cout<<"is greatest integer "<<largest(p,q,r)<<"value"<<endl;
    cout<<"is greatest integer "<<largest(g,h,i)<<"value"<<endl;
}
