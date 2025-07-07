/*
	construtor Return object
*/
#include<iostream.h>
#include<conio.h>

class complex
{
	int x,y;
	public:
		complex(){} //default constructor
		complex(int m)
		{
		 x=y=m;
		}
		complex(int image,int real)
		{
		 x=image;y=real;
		}
		complex(complex &  c)  //copy constructor
		{
		   x=c.x;
		   y=c.y;
		}
		complex operator +(complex);
		void show()
		{
			cout<<"\n\n\t\t x:"<<x<<"  Y:"<<y;
		}
};
complex complex :: operator +(complex c)
{
	complex c3;
	c3.x=x + c.x;
	c3.y=y + c.y;
	return c3;
}
void main()
{
	complex C1(10),C2(10,20),C3;
	clrscr();

	C3=C1+C2;

	C1.show();
	C2.show();
	C3.show();
	getch();
	}