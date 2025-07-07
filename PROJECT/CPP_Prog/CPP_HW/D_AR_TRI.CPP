  // area of triangle
#include<iostream.h>
#include<conio.h>

class object
{
 private:
 int b,h,a;

       public:
      void area()
    {

	cout<<"enter the value of base(b):";
	cin>>b;
	cout<<"enter the value of height(h):";
	cin>>h;
	a=0.5*b*h;
	cout<<"\n\n\t\t area of triangle:"<<a;

		    }
 };
	void main()
	{
	   object d;
	   clrscr();
	   d.area();
	   getch();
	   }