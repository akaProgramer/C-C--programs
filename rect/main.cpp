#include <iostream>

using namespace std;
class area
{
    float r;
public:
    float rectangle(float a,float b)
    {
        return a*b;
    }
private:
    float circle()
    {
        cout<<"Enter the radius of circle: ";
        cin>>r;
        return 3.14*r;
    }
public:
    float s;
    float square(float s)
    {
        return s*s;
    }
};

int main()
{
   area obj1;
   float a,b;
   cout<<"Enter length and breath: ";
   cin>>a>>b;
   cout<<obj1.rectangle(a,b)<<endl;
   cout<<obj1.square(3);
}
