#include <iostream>
#include<conio.h>
using namespace std;
class A
{
    int x, y;
public:
    A(int a, int b)
    {
        cout << "Parametrized Constructor called!\n";
        x = a;
        y = b;
    }
    A(const A &old)
    {
        x = old.x;
        y = old.y;

        cout << "Copy Constructor called!\n";
    }
    void print()
    {
        cout << x << " " << y << "\n";
    }
};
int main()
{
    A obj(10, 20);
    A obj2(obj);
    obj2.print();
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
    getch();
    return 0;
}
