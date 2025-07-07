#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<string.h>
class tour
{
	char name[10];

	float cost;

	public:
		int code;
		void getdata();
		void upgetdata();
		void putdata();
		tour operator*(int b);
		tour operator/(int b);
};
tour tour ::operator*(int a)
{
	tour t1;
	t1.code=code;
	strcpy(t1.name,name);
	t1.cost=cost;
	t1.cost=cost+(cost*a/100);
	return t1;
}
tour tour ::operator/(int a)
{
	tour t1;
	t1.code=code;
	strcpy(t1.name,name);
	t1.cost=cost;
	t1.cost=cost-(cost*a/100);
	return t1;
}

void tour::getdata()
{
	cout<<"\n\n\t\tEnter Tour name : ";
	cin>>name;
	cout<<"\n\t\tEnter Tour code : ";
	cin>>code;
	cout<<"\n\t\tEnter Tour cost : ";
	cin>>cost;
}
void tour::upgetdata()
{
	cout<<"\n\n\t\tEnter Tour name : ";
	cin>>name;
	cout<<"\n\t\tEnter Tour cost : ";
	cin>>cost;
}

void tour::putdata()
{
	cout<<setiosflags(ios::left)
	    <<setw(10)<<name
	    <<setiosflags(ios::right)
	    <<setw(10)<<code
	    <<setprecision(2)
	    <<setw(10)<<setiosflags(ios::fixed)<<cost
	    <<endl;
}

void main()
{
	clrscr();
	int cnt=0;
	int ch,no,loc,ch1;
	tour dtl,tmp;
	fstream file,file2;
	file.open("tours.dat",ios::ate|ios::in|ios::binary|ios::out);
	do
	{
	clrscr();
	cout<<"\n\n\t\tMenu...";
	cout<<"\n\t\t1.Insert...";
	cout<<"\n\t\t2.Update...";
	cout<<"\n\t\t3.Increment/Decrement...";
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
			dtl.getdata();
			file.write((char *)& dtl,sizeof (dtl));
			break;
		case 2:
			 cnt=0;
			cout<<"\n\n\t\tEnter the Tour code : ";
			cin>>no;
			if(file.eof())
				file.clear();
			file.seekg(0);
			while(file.read((char *)& dtl,sizeof (dtl)))
			{
				dtl.putdata();
				cnt++;
				if(dtl.code==no)
				{
				    loc=(cnt-1)*sizeof(dtl);
				    dtl.upgetdata();
				    file.seekp(loc,ios::beg);
				    file.write((char *)& dtl,sizeof (dtl));
				    break;
				}
			}
			break;
		case 3:
			cout<<"\n\n\t\tIncrement.";
			cout<<"\n\n\t\tDecrement.";
			cout<<"\n\t\tEnter choice:";
			cin>>ch1;
			switch(ch1)
			{
			case 1:
				int c;
				cout<<"\n\n\t\tIncrement percentage :";
				cin>>c;
				cnt=0;
				if(file.eof())
					file.clear();
				file.seekg(0);
				while(file.read((char *)& dtl,sizeof (dtl)))
				{
					cnt++;
					dtl=dtl*c;
					dtl.putdata();
					loc=(cnt-1)*sizeof(dtl);
					if(file.eof())
						file.clear();
					file.seekp(loc);
					file.write((char *)& dtl,sizeof (dtl));
				}
				break;
			case 2:
				int b;
				cout<<"\n\n\t\tDecrement percentage :";
				cin>>b;
				cnt=0;
				if(file.eof())
					file.clear();
				file.seekg(0);

				while(file.read((char *)& dtl,sizeof (dtl)))
				{
					cnt++;
					dtl=dtl/b;
					loc=(cnt-1)*sizeof(dtl);
					if(file.eof())
						file.clear();

					file.seekp(loc,ios::beg);
					file.write((char *)& dtl,sizeof (dtl));
				}
				break;
			}
			break;
		case 4:
			if(file.eof())
				file.clear();
			file.seekg(0);
			cout<<"\n\n\t\tDisplay file content..\n";
			while(file.read((char *)& dtl,sizeof (dtl)))
			{
				dtl.putdata();
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
