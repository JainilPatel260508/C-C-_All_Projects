#include<iostream.h>
#include<conio.h>
class shape
{
	protected:
		float x,y;
	public:
		shape(float a,float b=0.0)
		{
			x=a;
			y=b;
		}
		virtual void display_area()=0;
		};

class rectangle:public shape
{
	public:
		rectangle(float a,float b):shape(a,b)
		{
		}
		void display_area()
		{
			cout<<"\n\n\t\tArea of Rectangle : "<<x*y;
		}
};

class triangle:public shape
{
	public:
		triangle(float a,float b):shape(a,b)
		{
		}
		void display_area()
		{
			cout<<"\n\n\t\tArea of Triangle : "<<0.5*x*y;
		}
};

class circle : public shape
{
	public:
		circle(float a):shape(a)
		{
		}
		void display_area()
		{
			cout<<"\n\n\t\tArea of Circle : "<<3.14*x*x;
		}
};

void main()
{
	clrscr();
	shape* s;
	rectangle r(8.5,5.1);
	triangle t(4.5,6.0);
	circle c(4.15);

	s=&r;
	s->display_area();

	s=&t;
	s->display_area();

	s=&c;
	s->display_area();
	getch();
}