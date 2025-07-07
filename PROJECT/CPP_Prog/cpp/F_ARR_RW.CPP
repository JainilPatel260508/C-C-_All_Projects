#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
const char * filename="binary";
void main()
{
	clrscr();
	float height[4]={175.5,153.0,167.25,160.70};

	ofstream outfile;

	outfile.open(filename);

	outfile.write((char *) &height,sizeof(height));
	cout<<"\n\nFile Write Process is over.";
	outfile.close();

	for(int i=0;i<4;i++)
		height[i]=0;

	ifstream infile;
	infile.open(filename);

	infile.read((char *) & height,sizeof(height));
	cout<<"\n\nFile read Process is over.";
	for(i=0;i<4;i++)
	{
		cout.setf(ios::showpoint);
		cout<<setw(10)<<setprecision(2)<<height[i];
	}
	infile.close();

	getch();
}
