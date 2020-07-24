#include <iostream>
using namespace std;
class A
{
private:
  int a, b;

public:
  void getdata(int x, int y)
  {
    a = x;
    b = y;
  }
  void showdata()
  {
    cout << "The sum of two private integer data members are = " << a + b << endl;
    cout << "The product of two private integer data members are = " << a * b << endl;
  }
};
int main()
{
  A obj;
  obj.getdata(4, 5);
  obj.showdata();
  return (0);
}
