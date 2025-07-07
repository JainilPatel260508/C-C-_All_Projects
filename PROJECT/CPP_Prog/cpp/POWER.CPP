/*
	     int power(int,int)
	     double power(double,int)
	     using default argu and function overloading.
*/
#include<iostream.h>
#include<conio.h>

class raise
{

	public:
		int power(int,int=2);
		double power(double,int=2);
};
int raise :: power(int m,int n)
{
	int res=1,i;
	for(i=1;i<=n;i++)
	{
	   res=res*m;
	}
	return res;
}

double raise :: power(double m,int n)
{
	double res=1;
	int i;
	for(i=1;i<=n;i++)
	{
	   res=res*m;
	}
	return res;
}
void main()
{
	raise r1,r2,r3,r4;
	clrscr();
	cout<<"\n\n\t\tpower(5):"<<r1.power(5);
	cout<<"\n\n\t\tpower(5,3):"<<r2.power(5,3);
	cout<<"\n\n\t\tpower(2.5):"<<r3.power(2.5);
	cout<<"\n\n\t\tpower(2.5,3):"<<r4.power(2.5,3);
	getch();
}