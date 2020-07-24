#include<iostream.h>
	#include<conio.h>

	class Rectangle
	{

		int L,B;

		public:

		Rectangle()           //Default Constructor
		{
			L = 0;
			B = 0;
		}

		Rectangle(int x,int y)           //Parameterize Constructor
		{
			L = x;
			B = y;
		}

		Rectangle operator+(Rectangle Rec)      //Binary operator overloading func.
		{
			Rectangle R;

				R.L = L + Rec.L;
				R.B = B + Rec.B;

			return R;
		}

		void Display()
		{
			cout<<"\n\tLength : "<<L;
			cout<<"\n\tBreadth : "<<B;
		}

	};

	void main()
	{

		Rectangle R1(2,5),R2(3,4),R3;
		//Creating Objects


		cout<<"\n\tRectangle 1 : ";
		R1.Display();

		cout<<"\n\n\tRectangle 2 : ";
		R2.Display();

		R3 = R1 + R2;       Statement 1

		cout<<"\n\n\tRectangle 3 : ";
		R3.Display();
	}

