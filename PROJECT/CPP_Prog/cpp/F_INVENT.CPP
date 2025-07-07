#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
class invnt
{
	char name[10];
	int code;
	float cost;

	public:
		void readdata();
		void writedata();
};

void invnt::readdata()
{
	cout<<"\n\n\t\tEnter name : ";
	cin>>name;
	cout<<"\n\t\tEnter code : ";
	cin>>code;
	cout<<"\n\t\tEnter cost : ";
	cin>>cost;
}

void invnt::writedata()
{
	cout<<setiosflags(ios::left)
	    <<setw(10)<<name
	    <<setiosflags(ios::right)
	    <<setw(10)<<code
	    <<setprecision(2)
	    <<setw(10)<<cost
	    <<endl;
}

void main()
{
	clrscr();
	int cnt=0;
	invnt itm;
	fstream file;

	file.open("stock.dat",ios::in | ios::out);

	cout<<"\n\n\t\tEnter details for items...";
	//for(int i=0;i<3;i++)
	char c;
	while(1)
	{
		clrscr();
		itm.readdata();
		file.write((char *)& itm,sizeof(itm));
		cout<<"\n\n\t\tDo You want to continue.:";
		cin>>c;
		cnt++;
		if(c=='n' || c=='N')
		break;
	}

	file.seekg(0);

	cout<<"\n\n\t-----OUTPUT-----\n\n";
	for(int i=0;i<cnt;i++)
	{
		file.read((char *)& itm,sizeof(itm));
		itm.writedata();
	}
	file.close();
	getch();
}
