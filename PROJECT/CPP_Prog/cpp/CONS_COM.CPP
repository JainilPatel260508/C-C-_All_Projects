/*
	construtor Return object
*/
#include<iostream.h>
#include<conio.h>

class complex
{
	int x,y;
	public:
		complex(){}
		complex(int m)
		{
		 x=y=m;
		}
		complex(int image,int real)
		{
		 x=image;y=real;
		}
		complex(complex &  c)
		{
		   x=c.x;
		   y=c.y;
		}
      /*		void input(int p,int q)
		{
			x=p;
			y=q;
		}*/
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
	complex C1(10),C2(10,20),C3;
	clrscr();

	C3=sum(C1,C2);

	C1.show();
	C2.show();
	C3.show();
	getch();
}