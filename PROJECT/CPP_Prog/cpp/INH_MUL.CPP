#include<iostream.h>
#include<conio.h>

class student
{
	protected:
		int rno;
	public:
		void get_no(int x)
		{
			rno=x;
		}
		void put_no()
		{
			cout<<"\n\n\t\tRoll number : "<<rno;
		}
};

class test : private student
{
	protected:
		int sub1;
		int sub2;
	public:
		void get_mark(int a,int b)
		{
			get_no(102);
			sub1=a;
			sub2=b;
		}
		void put_mark()
		{
			put_no();
			cout<<"\n\n\t\tSubject 1 : "<<sub1;
			cout<<"\n\t\tSubject 2 : "<<sub2;
		}
};

class result : private test
{
	int total;
	public:
		void display()
		{

		      get_mark(58,68);
		      total=sub1+sub2;
		      put_mark();
			cout<<"\n\n\t\tTotal : "<<total;
		}
};

void main()
{
	clrscr();
	result r;
      //	r.get_no(102);
      //	r.get_mark(99,100);
     //	r.put_no();
     //	r.put_mark();
	r.display();
	getch();
}