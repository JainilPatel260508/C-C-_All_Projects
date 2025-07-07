#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>
class invnt
{
	char name[10];
	int code;
	float cost;

	public:
		void getdata();
		void putdata();
		int chkdata();
};

int invnt::chkdata()
{
	if(cost>500)
		return 1;
	else
		return 0;
}


void invnt::getdata()
{
	cout<<"\n\n\t\tEnter name : ";
	cin>>name;
	cout<<"\n\t\tEnter code : ";
	cin>>code;
	cout<<"\n\t\tEnter cost : ";
	cin>>cost;
}

void invnt::putdata()
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
 //	int cnt=0;
	int ch,no,loc;
	invnt itm;
	fstream file,file2;
	file.open("stock.dat",ios::ate|ios::in|ios::binary|ios::out);
	file2.open("newstock.dat",ios::in|ios::binary|ios::out);
	do
	{
	clrscr();
	cout<<"\n\n\t\tMenu...";
	cout<<"\n\t\t1.Insert...";
	cout<<"\n\t\t2.Update...";
	cout<<"\n\t\t3.Trasfer another file...";
	cout<<"\n\t\t4.Display...";
	cout<<"\n\t\t5.Exit...";
	cout<<"\n\n\t\tEnter your choice : ";
	cin>>ch;

	switch(ch)
	{
		case 1:
			if(file.eof())
				file.clear();
			file.seekp(0,ios::end);
			itm.getdata();
			file.write((char *)& itm,sizeof (itm));
			break;
		case 2:
			cout<<"\n\n\t\tEnter the object no : ";
			cin>>no;
			loc=(no-1)*sizeof(itm);
			if(file.eof())
				file.clear();
			file.seekp(loc);
			itm.getdata();
			file.write((char *)& itm,sizeof (itm));
			break;
		case 3:
			if(file.eof())
				file.clear();
			file.seekg(0);

			while(file.read((char *)& itm,sizeof (itm)))
			{
				itm.putdata();
				if(itm.chkdata()==1)
					file2.write((char *)& itm,sizeof (itm));
			}
			if(file2.eof())
				file2.clear();
			file2.seekg(0);
			cout<<"\n\n\t\tDisplay file content of newstock..\n";
			while(file2.read((char *)& itm,sizeof (itm)))
			{
				itm.putdata();
			}
			file2.close();
			break;
		case 4:
			if(file.eof())
				file.clear();
			file.seekg(0);
			cout<<"\n\n\t\tDisplay file content..\n";
			while(file.read((char *)& itm,sizeof (itm)))
			{
				itm.putdata();
			}
			break;
		case 5:
			exit(1);
			break;
		default:
			cout<<"\n\n\t\tWrong Choice...";
		}
	getch();
	}while(ch!=5);
	file.close();

}
