#include <iostream>

using namespace std;

class comp
{
    double a,b;
public:
    void set_data(double x,double y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<"  b="<<b<<endl;
        cout<<"no= "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    comp ob1;
    double c,d;
    cout<<"Enter real part: ";
    cin>>c;
    cout<<"Enter imaginary part: ";
    cin>>d;
    ob1.set_data(c,d);
    ob1.show();
    return 0;
}
