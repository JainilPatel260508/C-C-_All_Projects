/*
	Static data member
*/
#include<iostream.h>
#include<conio.h>

class item
{
	static int cnt;
	int number;
	public :
		void getdata(int i)
		{
			number=i;
			cnt++;
			showcount();
		}
		void getcount()
		{
			cout<<"\n\t\t Count:"<<cnt;
			cout<<"\n\t\t Number:"<<number;
		}
		static void showcount()
		{
			cout<<"\n\t\tstatic Count:"<<cnt;
		      //cout<<"\n\t\t Number:"<<number;
		      //putdata();
		}
		void putdata(void)
		{
		  cout<<"\n\t\t Number:"<<number;
		}
};
int item :: cnt=10;

void main()
{
	item a,b,c;
	clrscr();
	a.getcount();
	b.getcount();
	c.getcount();

	item :: showcount();

	a.getdata(100);
	a.putdata();
	a.getcount();
	b.getcount();
	c.getcount();

	item :: showcount();

	b.getdata(200);
	b.putdata();
	a.getcount();
	b.getcount();
	c.getcount();

	item :: showcount();

	c.getdata(300);
	c.putdata();
	a.getcount();
	b.getcount();
	c.getcount();

	item :: showcount();
	getch();
}