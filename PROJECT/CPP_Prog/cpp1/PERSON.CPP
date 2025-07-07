//#include<stdio.h>
#include<iostream.h>
//#include<conio.h>

class person
{
  private:
  int pid;
  int age;
  char *name;

  public:
     void getdata()
     {
	 cout<<"\n\nEnter a Person Id:";
	 cin>>pid;
	 cout<<"\nEnter a Person Name:";
	 cin>>name;
	 cout<<"\nEnter a Person Age:";
	 cin>>age;
     }
     void putdata();
/*     {
	 cout<<"\n\n Person Id:"<<pid;
	 cout<<"\n Person Name:"<<name;
	 cout<<"\n Person Age:"<<age;
     }*/
};
void person :: putdata()
     {
	 cout<<"\n\n Person Id:"<<pid;
	 cout<<"\n Person Name:"<<name;
	 cout<<"\n Person Age:"<<age;
     }

void main()
{
     person p1,p2,p3;
     clrscr();
     //p1.pid=10;
     cout<<"\n\nPerson 1\n";
     p1.getdata();
     cout<<"\n\nPerson 2\n";
     p2.getdata();
     cout<<"\n\nPerson 3\n";
     p3.getdata();

     p1.putdata();
     p2.putdata();
     p3.putdata();
     getch();

}
/*
     To calculate area of triangle,ractangle,circle
     to calculate the simple int and compound int
     to find the largest no about three value
     to swap two value with and without third var
     to calculate the student result with total,per,grade
     to convert cel to feh and vice versa


*/
