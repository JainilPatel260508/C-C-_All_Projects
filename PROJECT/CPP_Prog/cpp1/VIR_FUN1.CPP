#include<iostream.h>
#include<conio.h>

class BC
{
	public:
	   void disp(){ cout<<"\n Display Base";}
	   virtual void show()
		{
			cout<<"\nshow Base "<<endl;
		}
};
class DC : public BC
{
	public:
		void disp(){ cout<<"\n Display Derived";}
		void show()
		{
			cout<<"\n\n 	show derived";
		}
};
void main()
{
	BC *bptr;
	clrscr();
	BC base;
	bptr = &base;
	bptr->disp();
	bptr->show();

	DC derived;
	bptr = &derived;
	bptr->disp(); //base
	bptr->show(); //derived

	getch();
}