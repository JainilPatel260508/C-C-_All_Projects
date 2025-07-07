#include<iostream.h>
#include<conio.h>

class B
{
	int a;
	public:
	int b;
	void get_ab()
	{
	  a=10,b=20;
	}
	int get_a()
	{
	 return a;
	}
	void show_a();
};
void B :: show_a()
{
    cout<<"\n\t\tPri A:"<<a;
}
class D : public B
{
	int c;

	public:
	   void mul();
	   void disp();
};
void D :: mul()
{
      //	get_ab();

	c=get_a() * b;
}
void D :: disp()
{
	show_a();
	cout<<"\n\t\t pri A:"<<get_a();
	cout<<"\n\t\t B :"<<b;
	cout<<"\n\t\t C :"<<c;
}
void main()
	{
	D d;
	clrscr();
	d.get_ab();
	d.show_a();
	d.mul();
	d.disp();

	d.b=30;
	d.mul();
	d.disp();

	getch();
}