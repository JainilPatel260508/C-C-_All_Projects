#include<iostream.h>
#include<conio.h>

class dollar;
class rupees
{
	int rs;
	public:
		rupees(int a)
		{
			rs=a;
		}

		void putdata()
		{
			cout<<"\n\n\t\tRuppes : "<<rs;
		}

		int getrs()
		{
			return rs;
		}


		operator float()
		{
			return rs/55.0;
		}

};

class dollar
{

	float dolr;

	public:
		dollar()
		{
			dolr=0;
		}

		void putdata()
		{
			cout<<"\n\t\tDollar : "<<dolr;
		}

		dollar(rupees p)
		{
			dolr=p.getrs() / 55.0;
		}

};

void main()
{
	clrscr();
	rupees r1(1100);
	dollar d1;
	float tot_value;

	tot_value=r1;

	d1=r1;

	cout<<"\n\n\t\tRuppes --> ";
	r1.putdata();

	cout<<"\n\t\tDollar : "<<tot_value;
	cout<<"\n\n\t\tDollar --> ";
	d1.putdata();

	getch();
}