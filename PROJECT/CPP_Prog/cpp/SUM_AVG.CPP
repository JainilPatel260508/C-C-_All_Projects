#include<iostream.h>
#include<conio.h>

void main()
{
	int no1,no2,sum;
	float avg;
	clrscr();

/*	cout<<"\n\n\t\tEnter a No1:";cin>>no1;
	cout<<"\n\t\tEnter a No2:";cin>>no2;*/
	cout<<"\n\t\tEnter a no1 and no2:";
	cin>>no1>>no2;


	sum=no1+no2;
	avg=sum/2.0;
	cout<<"\n\n\t\tSum of "<<sum<<"\n\t\t"
	    <<"Avg of "<<avg;
	getch();
}