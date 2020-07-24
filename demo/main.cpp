#include <iostream>

using namespace std;
class test
{
    int x,y;
public:
    test()
    {
        x=10;
        y=20;
        cout<<x<<" "<<y<<endl;
    }
    test(int a,int b)
    {
        x=a;
        y=b;
        cout<<x<<" "<<y<<endl;
    }
} ;
int main()
{
    test obj;
    test obj2(40,50);
    test obj3=test();
    test obj4=test(30,40);
}
