#include<iostream>
using namespace std;
class complex_no
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_Data()
    {
        cout<<"\nThe sum is: ";
        cout<<a<<"+"<<b<<"i";
    }
    complex_no operator +(complex_no c)
    {
        complex_no t;
        t.a=a+c.a;
        t.b=b+c.b;
        return(t);
    }
};
int main()
{
    complex_no c1,c2,c3;
    int u,v,x,y;
    cout<<"\nEnter first complex number:\n";
    cout<<"Constant part and Imaginary: ";
    cin>>u>>v;
    cout<<"\nEnter second complex number:\n";
    cout<<"Constant part and Imaginary: ";
    cin>>x>>y;
    c1.set_data(u,v);
    c2.set_data(x,y);
    c3=c1+c2;
    c3.show_Data();
    return 0;
}
