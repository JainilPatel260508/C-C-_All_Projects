#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	int size=20;
	char ct[20];
	clrscr();
	cout<<"\n\n\t\tEnter a city:";
	cin>>ct;
	cout<<"\n\t\tCity:"<<ct;

	cout<<"\n\n\t\tEnter a city:";
	cin.getline(ct,size);
	cout<<"\n\t\tCity:"<<ct;

	cout<<"\n\n\t\tEnter again city:";
	cin.getline(ct,size);
	cout<<"\n\t\tCity:"<<ct;
		getch();
}