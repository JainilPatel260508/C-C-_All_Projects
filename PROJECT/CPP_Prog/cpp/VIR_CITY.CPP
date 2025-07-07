#include<iostream.h>
#include<conio.h>
#include<string.h>

class city
{
	char *name;
	int len;
	public:
		city()
		{
			len=0;
			name=new char[len+1];
		}

		void getdata()
		{
			char *s;
			s=new char[30];

			cout<<"\n\t\tEnter city name : ";
			cin>>s;
			len=strlen(s);
			name=new char[len+1];
			strcpy(name,s);
		}
		void putdata()
		{
			cout<<"\n\n\t\tCity : "<<name;
		}
};

void main()
{
	city *ct[2];
	int n=1;
	int opt;
	clrscr();

	do
	{
		ct[n]=new city;
		ct[n]->getdata();
		n++;
		cout<<"\n\t\tDo you want to continue..?";
		cout<<"\n\t\tPress 1 for yes OR 0 for no : ";
		cin>>opt;
	}while(opt);

	clrscr();
	for(int i=1;i<n;i++)
	{
		ct[i]->putdata();
	}
	getch();
}
