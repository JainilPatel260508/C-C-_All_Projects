/*
	to Convert the Cel to Feh and vice vers
*/
#include<iostream.h>
#include<conio.h>
class temp
{
	float f,c;
	public:
	void getCeldata()
	{
		cout<<"\n\t\tEnter a Celsious:";
		cin>>c;
	}
	void getFerdata()
	{
		cout<<"\n\t\tEnter a Ferenhit:";
		cin>>f;
	}

	void putCeldata()
	{
		cout<<"\n\n\t\tCelsious:"<<c;
		f=c*1.8+32;
	       // c=(f-32)/1.8
		cout<<"\n\t\tFerenhit:"<<f;
	}
	void putFerdata()
	{
		cout<<"\n\t\tFerenhit:"<<f;
		cout<<"\n\n\t\tCelsious:"<<F2C();
	}

	float F2C()
	{
		return (f-32)/1.8;
	}
};
void main()
{
	temp t1,t2;
	clrscr();
	t1.getCeldata();
	t1.putCeldata();
	t2.getFerdata();
	t2.putFerdata();
	getch();
}
/*
ci=p*(1+r/100)^n
	ci=p*pow(1+r/100,n);
	1. to calculate the area of triange, ractangel ,circle
	2. to calculate the simple interest and compound interest
	3. to find the largest value about the three values
	4. to interechange two value with and without third var
	5. to calculate the student result with total,per,grade
*/