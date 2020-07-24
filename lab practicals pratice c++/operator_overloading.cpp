#include<iostream>
using namespace std;
class sum
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"The sum is: ";
        cout<<a<<"+"<<b<<"i";
    }
    sum operator +(sum c)
    {
        sum r;
        r.a=a+c.a;
        r.b=b+c.b;
        return r;
    }
};
int main()
{
    sum c1,c2,c3;
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
    c3.show_data();
    return 0;

}
