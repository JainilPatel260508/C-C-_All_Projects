#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>

void main()
{
	clrscr();
	const int n=80;
	char line[n];

	ifstream fin1,fin2;

	fin1.open("country");
	fin2.open("capital");

//	for(int i=0;i<=10;i++)
	while(1)
	{
		if(fin1.eof()!=0)
		{
			cout<<"Exit from country...\n";
//			exit(1);
			break;
		}
		fin1.getline(line,n);
		cout<<"\n\t\tCapital of "<<line;

		if(fin2.eof()!=0)
		{
			cout<<"Exit from capital...\n";
//			exit(1);
			break;
		}
		fin2.getline(line,n);
		cout<<line;
	}
	fin1.close();
	fin2.close();
	getch();
	}
