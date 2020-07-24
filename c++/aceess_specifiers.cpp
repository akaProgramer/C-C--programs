#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
  int a, b;
public:
  int j,k;
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
  void showdataP(int j,int k)
  {
      cout << "The sum of two public integer data members are = " << j + k << endl;
      cout << "The product of two public integer data members are = " << j * k << endl;
  }
};
int main()
{
  A obj;
  obj.getdata(4, 5);
  obj.showdata();
  obj.showdataP(9,6);
  cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
  getch();
  return (0);
}
