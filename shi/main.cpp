#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout<<"Hello form base";
    }
};
class derived : public base
{

};
int main()
{
    derived ob1;
}
