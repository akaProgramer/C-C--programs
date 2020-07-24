#include<iostream>
#include<conio.h>
using namespace std;
class base
{
 	public:
 	int x;
 	void getdata()
 	{
    	cout << "Enter value of x= "; cin >> x;
 	}
};
class derive1 : public base
{
 	public:
 	int y;
 	void readdata()
 	{
 	    cout << "\nEnter value of y= "; cin >> y;
 	}
};
class derive2 : public derive1
{
 	private:
 	int z;
 	public:
 	void indata()
 	{
    	cout << "\nEnter value of z= "; cin >> z;
 	}
 	void product()
 	{
 	    cout << "\nProduct= " << x * y * z;
 	}
};
int main()
{
     derive2 a;
     a.getdata();
     a.readdata();
     a.indata();
     a.product();
     cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
     getch();
     return 0;
}
