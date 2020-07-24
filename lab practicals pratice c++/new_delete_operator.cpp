#include<iostream>
using namespace std;
class rec
{
private:
    float l,b,per;
public:
    void set()
    {
        cout<<"Enter dimensions of a rectangle: ";
        cin>>l>>b;
    }
    void perimeter()
    {
        cout<<"perimeter of rectangle for given dimensions= "<<2*(l+b);
    }
};
int main()
{
    rec *p;
    p=new rec;
    p->set();
    p->perimeter();
    delete p;
    return 0;
}
