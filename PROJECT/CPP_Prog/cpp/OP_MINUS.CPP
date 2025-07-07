#include<iostream.h>
#include<conio.h>

class space
{
	int x,y,z;
	public:
	     void getdata(int a,int b,int c)
	     {
		 x=a;
		 y=b;
		 z=c;
	     }
	     void disp()
	     {
		cout<<"\n\n\t\tX:"<<x;
		cout<<"\n\t\tY:"<<y;
		cout<<"\n\t\tZ:"<<z;
	     }
	     void operator -();
};
void space :: operator -()
{
	x=-x;
	y=-y;
	z=-z;
}
void main()
{
	space s;
	clrscr();
	s.getdata(20,-10,30);
	s.disp();
	-s;
	s.disp();
	getch();
}