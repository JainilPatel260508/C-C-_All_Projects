#include<iostream.h>
#include<conio.h>

void main()
{
	int & max(int &, int &);
	int x=100,y=100,z;
	clrscr();


	z=max(x,y);
       // z=& max()
	cout<<"\n\n Max:"<<z;
	getch();
}
int & max(int & a, int &b)
{
	if (a>b)
	   return a;
	else
	   return b;
}