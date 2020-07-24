#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class Calculator
{
private:
	T num1, num2;

public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}
	T add() { return num1 + num2; }
	T subtract() { return num1 - num2; }
	T multiply() { return num1 * num2; }
	T divide() { return num1 / num2; }
};
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter 2 integer numbers: ";
    cin>>a>>b;
	Calculator<int> intCalc(a, b);
	cout<<"\nEnter 2 float numbers: ";
    cin>>c>>d;
	Calculator<float> floatCalc(c, d);
	cout << "\nInt results:" << endl;
	intCalc.displayResult();
	cout << endl << "\nFloat results:" << endl;
	floatCalc.displayResult();
    cout<<"\n----------------------------------------------------------\n\nName:- Akash Shiva\n\n";
    getch();
	return 0;
}
