/*
	Return object
*/
#include<iostream.h>
#include<conio.h>

class complex
{
	int x,y;
	public:
		void input(int p,int q)
		{
			x=p;
			y=q;
		}
		friend complex sum(complex, complex);
		void show()
		{
			cout<<"\n\n\t\t x:"<<x<<"  Y:"<<y;
		}
};
complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x=c1.x + c2.x;
	c3.y=c1.y + c2.y;
	return c3;
}
void main()
{
	complex C1,C2,C3;
	clrscr();
	C1.input(10,20);
	C2.input(5,25);

	C3=sum(C1,C2);

	C1.show();
	C2.show();
	C3.show();
	getch();
	}