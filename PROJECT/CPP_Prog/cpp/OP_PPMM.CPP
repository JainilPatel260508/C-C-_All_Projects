#include<iostream.h>
#include<conio.h>
class space
{
	int x;
	public:
	     void getdata(int a)
	     {
		 x=a;
	     }
	     void disp()
	     {
		cout<<"\n\n\t\tX:"<<x;
	     }
	     void operator --();
	     friend void operator ++(space &);
};
void space :: operator --()
{
//	x=x-1;
	x--;
}
void operator ++(space &s)
{
     s.x=s.x+1;
}
void main()
{
	space s;
	clrscr();
	s.getdata(20);
	s.disp();
	++s;
	s.disp();
	--s;
	s.disp();
	getch();
}