#include<iostream.h>
#include<conio.h>

class BC
{
	public:
	   int b;
	   void disp(){ cout<<"\n Display Base B"<<b;}
	   void show()
		{
			cout<<"\nshow Base "<<endl;
		}
};
class DC : public BC
{
	public:
		int d;
		void disp(){ cout<<"\n Display Derived d:"<<d;}
		void show()
		{
		 //	cout<<"B= "<<b<<endl;
			cout<<"\nD= "<<d<<endl;
		}
};
void main()
{
	BC *bptr;
	clrscr();
	BC base;
	bptr = &base;
	bptr->b=100;
	bptr->disp();
//	bptr->show();

	DC derived;
//	derived.d=200;
	bptr = &derived;
	bptr->b=200;
	bptr->disp();
//	bptr->show();
	DC *dptr;
	dptr=&derived;
	dptr->d=300;
	dptr->disp();

	((DC*)bptr)->d=400;
	((DC*)bptr)->disp();

	getch();
}