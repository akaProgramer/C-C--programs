#include<iostream>
using namespace std;
class area
{
public:
    area(int s)
    {
        cout<<"\nVolume of cube: "<<s*s*s;
        cout<<"\nTotal Surface area: "<<6*(s*s);
        cout<<"\nCurved Surface Area: "<<4*(s*s);
    }
    ~area()
    {
        cout<<"\n\n\n-------------Destructor called-----------------\n\n";
    }
};
int main()
{
    int s;
    cout<<"Enter the measurement of side of the cube: ";
    cin>>s;
    area ob(s);
}
