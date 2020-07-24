#include<iostream>
using namespace std;
class rec
{
private:
        int I;
        int b;
public:
        void read()
        {
             cout<<"Enter length & breadth : ";
             cin>>I>>b;
        }
        void area()
        {
            cout<<"Area is "<<I*b <<endl;
        }
};
int main()
{
    rec *p;
    p = new rec;
    p->read();
    p->area();
    delete p;
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
    return 0;
}
