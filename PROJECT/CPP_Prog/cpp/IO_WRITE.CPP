/*
	Write
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *str1="C++",*str2="Programming";
	int l1,l2,i,j;
	clrscr();
	l1=strlen(str1);
	l2=strlen(str2);
	cout<<"\n\n\n";
	for(i=1;i<l2;i++)
	{
		   cout.write(str2,i);
		   cout<<"\n";
	}
	for(i=l2;i>0;i--)
	{
		   cout.write(str2,i);
		   cout<<"\n";
	}
	cout.write(str1,l1).write(str2,l2);
	cout<<"\n\n";
	cout.write(str1,10);
	cout<<"\n\n";
	cout.write(str1,15);
	cout<<"\n";
	cout.write(str2,15);
	getch();
}