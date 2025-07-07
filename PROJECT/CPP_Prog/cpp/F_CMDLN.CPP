#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>

void main(int argc,char * argv[])
{
	  //	int no[9]={11,22,33,44,55,66,77,88,99};
	clrscr();
/*	if(argc!=3)
	{
		cout<<"\n\n\t\tArgc = "<<argc;
		cout<<"\n\t\tError in argument...";
		exit(1);
	} */
	ofstream fout1,fout2;
	fout1.open(argv[1]);
	if(fout1.fail())
	{
		cout<<"\n\n\t\tCould not open the file "<<argv[1];
		exit(1);
	}
	fout2.open(argv[2]);
	if(fout2.fail())
	{
		cout<<"\n\n\t\tCould not open the file "<<argv[2];
		exit(1);
	}
	for(int i=3;i<argc;i++)
	{
		if(atoi(argv[i])%2==0)
			fout2<<" "<<argv[i];  //Even
		else
			fout1<<" "<<argv[i];  //Odd
	}
	fout1.close();
	fout2.close();

	ifstream fin;
	char ch;
	for(i=1;i<3;i++)
	{
		fin.open(argv[i]);
		cout<<"\n\n\t\tContents of "<<argv[i]<<"\n\t\t";
		do
		{
			fin.get(ch);
			cout<<ch;
		}while(fin);
		cout<<"\n\n";
		fin.close();
	}
	getch();
}


