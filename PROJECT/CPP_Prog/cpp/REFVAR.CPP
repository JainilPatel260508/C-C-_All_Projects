#include<iostream.h>
#include<conio.h>

void main()
{
	void swap(int &, int &);
	int sum=100;
	int x=100,y=200;
	clrscr();

	int & total = sum;

	cout<<"\n\n\t\tSum:"<<sum;
	cout<<"\n\n\t\tTotal:"<<total;
	total=total+50;
	cout<<"\n\n\t\tSum:"<<sum;
	cout<<"\n\n\t\tTotal:"<<total;

	cout<<"\n\n\t\tBefore X:"<<x;
	cout<<"\n\n\t\tBefore Y:"<<y;
	swap(x,y);
	cout<<endl<<endl<<"\t\tafter X:"<<x;
	cout<<"\n\n\t\tafter Y:"<<y<<endl;

	getch();

}
void swap(int & a, int & b)
{
	int c=a;
	a=b;
	b=c;
}
