/*
	Array of object
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
		cout<<"\n\n\t\tEnter a name:";
		cin>>name;
		cout<<"\n\t\tEnter an age:";
		cin>>age;
	   }
	   void putdata()
	   {
	     cout<<"\nEmp Name:"<<name;
	     cout<<"\t\t Age :"<<age;
	   }
};
void main()
{
	emp e[3];
	clrscr();
	for(int i=0;i<3;i++)
	{
	   cout<<"\nEmployee "<<i+1;
	   e[i].getdata();
	}

	for(i=0;i<3;i++)
	{
	   cout<<"\nEmployee "<<i+1;
	   e[i].putdata();
	}
  getch();
}