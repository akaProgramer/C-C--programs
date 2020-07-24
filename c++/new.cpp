#include<iostream>
#include<conio.h>
using namespace std;
class rec
{
private:
        int l;
        int b;
public:
        void read()
        {
             cout<<"Enter length & breadth : ";
             cin>>l>>b;
        }
        void area()
        {
            cout<<"Area is "<<l*b <<endl;
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
    getch();
    return 0;
}
