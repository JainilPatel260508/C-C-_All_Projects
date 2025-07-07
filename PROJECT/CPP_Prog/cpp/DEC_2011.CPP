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
		tour operator *(int a);
		tour operator /(int a);
};

tour tour :: operator *(int a)
{
	tour t1;
	strcpy(t1.name,name);
	t1.code=code;
	t1.cost=cost+(cost*a/100);
	return t1;
}


tour tour :: operator /(int a)
{
	tour t1;
	strcpy(t1.name,name);
	t1.code=code;
	t1.cost=cost-(cost*a/100);
	return t1;
}

void tour::getdata()
{
	cout<<"\n\n\t\tEnter tour name : ";
	cin>>name;
	cout<<"\n\t\tEnter code : ";
	cin>>code;
	cout<<"\n\t\tEnter cost : ";
	cin>>cost;
}

void tour::upgetdata()
{
	cout<<"\n\n\t\tEnter tour name : ";
	cin>>name;
	cout<<"\n\t\tEnter cost : ";
	cin>>cost;
}

void tour::putdata()
{
	cout<<setiosflags(ios::left)
	    <<setw(10)<<name
	    <<setiosflags(ios::right)
	    <<setw(10)<<code
	    <<setiosflags(ios::fixed)<<setprecision(2)
	    <<setw(10)<<cost
	    <<endl;
}

void main()
{
	clrscr();
	int cnt=0;
	int ch,no,loc;
	tour dtl,tmp;
	fstream file;
	file.open("tour.dat",ios::ate|ios::in|ios::binary|ios::out);
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
			cout<<"\n\n\t\tEnter the tour code : ";
			cin>>no;
			if(file.eof())
				file.clear();
			file.seekg(0);

			while(file.read((char *)& tmp,sizeof (tmp)))
			{
				cnt++;
				if(tmp.code==no)
				{
					tmp.upgetdata();
					if(file.eof())
						file.clear();
					loc=(cnt-1)*sizeof(tmp);
					file.seekp(loc);
					file.write((char *)& tmp,sizeof(tmp));
					break;
				}
			}
			break;
		case 3:
			int ch1;
			cout<<"\n\n\t\t1.Increment cost...";
			cout<<"\n\t\t2.Decrement cost...";
			cout<<"\n\n\t\tEnter your choice : ";
			cin>>ch1;
			switch(ch1)
			{
			case 1:
				cnt=0;
				if(file.eof())
					file.clear();
				file.seekg(0);

				while(file.read((char *)& tmp,sizeof (tmp)))
				{
					cnt++;
					tmp=tmp*10;
					if(file.eof())
						file.clear();
					loc=(cnt-1)*sizeof(tmp);
					file.seekp(loc);
					file.write((char *)& tmp,sizeof(tmp));
				}
				break;
			case 2:
				cnt=0;
				if(file.eof())
					file.clear();
				file.seekg(0);

				while(file.read((char *)& tmp,sizeof (tmp)))
				{
					cnt++;
					tmp=tmp/5;
					if(file.eof())
						file.clear();
					loc=(cnt-1)*sizeof(tmp);
					file.seekp(loc);
					file.write((char *)& tmp,sizeof(tmp));
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
