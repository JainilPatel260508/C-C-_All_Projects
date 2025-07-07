#include<iostream.h>
#include<conio.h>

class invent2;
class invent1
{
	int code,item;
	float price;

	public:
		invent1(int a,int b,float c)
		{
			code=a;
			item=b;
			price=c;
		}

		void putdata()
		{
			cout<<"\n\n\t\tCode : "<<code;
			cout<<"\n\t\tItem : "<<item;
			cout<<"\n\t\tValue : "<<price;
		}


		int getcode()
		{
			return code;
		}

		int getitem()
		{
			return item;
		}

		float getprice()
		{
			return price;
		}

		operator float()
		{
			return price*item;
		}

};

class invent2
{
	int code;
	float value;

	public:
		invent2()
		{
			code=0;
			value=0;
		}

		invent2(int x,float y)
		{
			code=x;
			value=y;
		}

		void putdata()
		{
			cout<<"\n\n\t\tCode : "<<code;
			cout<<"\n\t\tValue : "<<value;
		}

		invent2(invent1 p)
		{
			code=p.getcode();
			value=p.getitem() * p.getprice();
		}

};


void main()
{
	clrscr();
	invent1 s1(101,5,140.00);
	invent2 d1,d2;
	float tot_value;

	tot_value=s1;

	d2=invent2(101,tot_value);

	d1=s1;

	cout<<"\n\n\t\tProduct Details - invent1 type";
	s1.putdata();

	cout<<"\n\n\t\tStock Value";
	cout<<"\n\t\tValue : "<<tot_value;

	cout<<"\n\n\t\tProduct Details - invent2 type";
	d1.putdata();

	cout<<"\n\n\t\tProduct Details - invent2 type";
	d2.putdata();

	getch();
}








