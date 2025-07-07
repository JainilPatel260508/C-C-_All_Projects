/*
	power(double m , int n=2)
	power(int m,int n=2)

	m^n
*/
#include<iostream.h>
#include<conio.h>

class  raise
{
	public:
		double power(double m,int n=2);
		int power(int m, int n=1);
		float power(float m,int n=2);
		void pline(char c='-',int n=50);
};
void raise :: pline(char c,int n)
{
	int i;
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
	  cout<<c;
	}
	cout<<"\n";
}

int raise :: power(int m,int n)
{
	int p=1;
	int i;
	for(i=1;i<=n;i++)
	  p=p*m;

       return p;
}

double raise :: power(double m,int n)
{
	double p=1;
	int i;
	for(i=1;i<=n;i++)
	  p=p*m;

       return p;
}
float raise :: power(float m,int n)
{
	float p=1;
	int i;
	for(i=1;i<=n;i++)
	  p=p*m;

       return p;
}

void main()
{
	raise r;
	clrscr();
	r.pline('#');
	cout<<"\n\n\t\t power(5,4):"<<r.power(5,4);
	r.pline('=',60);
	cout<<"\n\n\t\t power(2.5):"<<r.power(2.5);
	r.pline();
	cout<<"\n\n\t\t power(2.5,5):"<<r.power(2.5,5);
	r.pline('*');
	cout<<"\n\n\t\t power(2,5):"<<r.power(2,5);
	r.pline('*');

	getch();
}