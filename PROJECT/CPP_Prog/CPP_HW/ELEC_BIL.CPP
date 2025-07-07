// electricity bill
#include<iostream.h>
#include<conio.h>

class bill
{
	private:
		char name[5][20];
		float units[5],n;
		float total[5];

	public:
		void input();
		float calculation(float);
		float net_amt();


};
void bill :: input()
{
	int i;
	cout<<"enter number of names you want to enter (max 5) :";
	cin>>n;
	cout<<"\n";

	for(i=0;i<n;i++)
	{
		cout<<"\tEnter a name :\n\t";
		cin>>name[i];
		cout<<"\tnumber of units consumed :\n\t";
		cin>>units[i];
		cout<<"\n\n";
	}
}
float bill :: calculation(float x)
{
	int i,j;
	float temp,temp1;
	for(i=0;i<n;i++);
	{
		if(x <= 100)
		{
			temp=x*60;
			temp=temp+5000;
			return(temp);
		}
		else if(x >100 && x <=300)
		{
			temp1=x-100;
			temp=temp1*80;
			temp=temp+6000;
			temp=temp+5000;
			return(temp);
		}
		else
		{
			temp1=x-300;
			temp=temp1*90;
			temp=temp+22000;
			temp=temp+5000;

			if(temp>=30000)
			{
				temp=temp+(temp*0.15);
			}
			return(temp);
		}
	}
}
float bill :: net_amt()
{
	int i;
	for(i=0;i<n;i++)
	{
		total[i]=calculation(units[i]);
		cout<<total[i]<<"\n";

	}
	return 0;
}
void main()
{
	bill p1[3];
	clrscr();
	p1.input();
	p1.net_amt();


	getch();
}
/*
	Bill p1
	p1
	3
	x	500
	y       750
	z       1000
	cal


*/
