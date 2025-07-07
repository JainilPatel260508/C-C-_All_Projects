/*
	object as array
*/
#include<iostream.h>
#include<conio.h>

class emp
{
	char name[20];
	int age;
	public:
		void getdata()
		{
			cout<<"\n\n\t\tEnter a Name:";
			cin>>name;
			cout<<"\n\t\tEnter the age:";
			cin>>age;
		}
		void putdata()
		{
		   cout<<"\n\t\tName:"<<name;
		   cout<<"\n\t\tAge:"<<age;
		}
};
const size=3;
void main()

{
	emp e[size];
	int i;
	clrscr();
	for(i=0;i<size;i++)
	{
	    cout<<"\n\n\t\tEmployee :"<<i+1;
	    e[i].getdata();
	}

	for(i=0;i<size;i++)
	{
	    cout<<"\n\n\t\tEmployee :"<<i+1;
	    e[i].putdata();
	}
getch();
}
