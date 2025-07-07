#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
	clrscr();
	ofstream outf("item");

	cout<<"\n\n\t\tEnter Item Name : ";
	char name[30];
	cin>>name;

	outf<<name<<"\n";

	cout<<"\n\n\t\tEnter Item Cost : ";
	float cost;
	cin>>cost;

	outf<<cost<<"\n";
	cost=0;
	outf.close();
	ifstream inf("item");

	inf>>name;
	inf>>cost;

	cout<<"\n\n\n\n";
	cout<<"\t\tItem Name : "<<name;
	cout<<"\n\n\t\tItem Cost : "<<cost;

	inf.close();

	getch();
}
