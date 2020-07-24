#include<iostream>
using namespace std;
class demo_op1
{
private :
   int num;
public:
  void input( )
  {
    cout<<"Enter the number: "<<endl;
    cin>> num;
  }
    void operator + (int x)
    {
        num=num+x;
    }
    void show( )
    {
     cout<<"The num is: "<<num<<endl;
   }
};
int main( )
{
  demo_op1 d1;
  d1.input( );
  d1.show( );
  int x;
  cout<<"Enter the value you want to add\n";
  cin>>x;
  d1+x;


  d1.show( );
}
