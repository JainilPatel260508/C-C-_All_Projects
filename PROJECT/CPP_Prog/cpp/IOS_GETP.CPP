#include<iostream.h>
#include<conio.h>

void main()
{
	char c;
	int cnt=0;
	clrscr();
	cout<<"Enter a string:";
	cin.get(c);
	cout<<"\n\nString:";
	while(c!='\n')
	{
	  cout.put(c);
	  cin.get(c);
	  cnt++;
	}
	cout<<"\n\nTotal char:"<<cnt;
	getch();

	}


