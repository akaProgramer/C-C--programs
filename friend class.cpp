#include <iostream>
#include<conio.h>
using namespace std;
class Square
{
	friend class Rectangle;
	int side;
	public:
		Square ( int s )
		{
			side = s;
		}
};
class Rectangle
{
	int length;
	int breadth;
	public:
	int getArea()
	{
		return length * breadth;
	}
	void shape( Square a )
	{
		length = a.side;
		breadth = a.side;
	}
};
int main()
{
    int s;
    cout<<"Enter a value for Side: ";
    cin>>s;
	Square square(s);
	Rectangle rectangle;
	rectangle.shape(square);
	cout <<"Area of square: "<< rectangle.getArea() << endl;
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
	getch();
	return 0;
}
