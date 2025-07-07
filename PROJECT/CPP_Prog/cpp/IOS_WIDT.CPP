#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	int iqty[4]={10,12,-5,4},i,j;
	float icost[4]={12.35,523.40,754.25,2.85},tot=0.0;
	clrscr();

	cout.width(10);
	cout<<"Item Qty";
	cout.width(15);
	cout<<"Item Cost";

	cout.width(20);
	cout<<"Total Value\n\n";
	cout.fill('_');


	for(i=0;i<4;i++)
	{
		cout.width(5);
		cout.setf(ios::showpoint);
			cout.setf(ios::showpos);
		cout.setf(ios::internal,ios::adjustfield);
		cout<<iqty[i];
		cout.width(20);
		cout.precision(2);
		cout<<icost[i];
		cout.precision(3);
		cout.width(15);

		cout<<iqty[i]*icost[i]<<"\n";
		tot=tot+iqty[i]*icost[i];

	}
	cout<<"\n\n";
	cout.width(20);
	cout<<"Grand Total:";
	cout.fill('*');
	cout.setf(ios::internal);
	cout.width(20);
	cout.precision(	3);
	cout<<tot;


getch();
}