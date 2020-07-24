#include<iostream>
#include<conio.h>
using namespace std;
class Shape {
protected:
  int width;
  int height;
public:
  void setWidth(int w) {
    width = w;
  }
  void setHeight(int h) {
    height = h;
  }
};
class Rectangle: public Shape {
  public:
  int getArea() {
    return (width * height);
  }
};

int main(void) {
  Rectangle Rect;
  int l,b;
  cout<<"Enter Length: ";
  cin>>l;
  cout<<"Enter Breath: ";
  cin>>b;
  Rect.setWidth(l);
  Rect.setHeight(b);
  cout << "Total area: " << Rect.getArea() << endl;
  cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
  getch();
  return 0;
}
