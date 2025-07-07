#include<iostream.h>
#include<conio.h>


void main()
{
	float no1,no2,total,avg;
	clrscr();

/*	cout<<"\n\n\t\tEnter a no1:";
	cin>>no1;
	cout<<"\n\n\t\tEnter a no2:";
	cin>>no2;*/
	cout<<"\n\n\t\tEnter the no1 and no2:";
	cin>>no1>>no2;

	total=no1+no2;
	avg=total/2;

	cout<<"\n\n\t\tSum :"<<total<<"\n\t\t"
	     <<"Average:"<<avg;
	getch();
}