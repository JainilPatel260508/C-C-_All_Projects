#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
	clrscr();
	ofstream fout;
	fout.open("country");

	fout<<"United States Of America...\n";
	fout<<"United Kingdom...\n";
	fout<<"South Korea...\n";

	fout.close();

	fout.open("capital");

	fout<<"Washington...\n";
	fout<<"London...\n";
	fout<<"Seoul...\n";

	fout.close();

	const int n=80;
	char line[n];

	ifstream fin;

	fin.open("country");

	cout<<"Contents of country file...\n";

	while(fin)
	{
		fin.getline(line,n);
		cout<<"\n\t\t"<<line;
	}

	fin.close();

	fin.open("capital");

	cout<<"\nContents of capital file...\n";

	while(fin.eof()!=1)
	{
		fin.getline(line,n);
		cout<<"\n\t\t"<<line;
	}
	fin.close();

	getch();
}