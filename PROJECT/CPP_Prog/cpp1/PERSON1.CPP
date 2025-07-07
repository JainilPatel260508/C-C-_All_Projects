#include<iostream.h>
#include<conio.h>

class person
{
   private:
   char name[10];
   int age;

   public:
   void getdata()
   {
	cout<<"\n\n\t\tEnter a Name:";
	cin>>name;
	cout<<"\n\n\t\tEnter a Age:";
	cin>>age;
   }

   void disp()
   {
	cout<<"\n\n\tName:"<<name;
	cout<<"\n\tAge:"<<age;
   }
};

void main()
{
	person p1,p2,p3;

	clrscr();
	cout<<"\n\n\t\t Person 1:\n";

	p1.getdata();
	//p1.age=20;
	p1.disp();
       /*	cout<<"\n\n\t\t Person 2:\n";

	p2.getdata();

	cout<<"\n\n\t\t Person 3:\n";

	p3.getdata();

	cout<<"\n\n\tPerson Details";
	p1.disp();
	p2.disp();
	p3.disp();                   */

	getch();
}