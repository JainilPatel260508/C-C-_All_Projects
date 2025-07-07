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
//: public virtual student
class sport : virtual public student
{
	protected:
		float score;
	public:
		void get_score(float s)
		{
			score=s;
		}
		void put_score()
		{
			cout<<"\n\n\t\tScore : "<<score;
		}
};

class test :  public virtual student
{
	protected:
		int sub1;
		int sub2;
	public:
		void get_mark(int a,int b)
		{
	     //		get_no(102);
			sub1=a;
			sub2=b;
		}
		void put_mark()
		{
	     //		put_no();
			cout<<"\n\n\t\tSubject 1 : "<<sub1;
			cout<<"\n\t\tSubject 2 : "<<sub2;
		}
};

class result : public test,public sport
{
	float total;
	public:
		void display()
		{
			//get_score(6.0);
			//get_mark(99,100);
			total=sub1+sub2+score;
			put_no();
			put_mark();
			put_score();
			cout<<"\n\n\t\tTotal : "<<total;
		}
};

void main()
{
	clrscr();
	result r;
	r.get_score(6.5);
	r.get_no(102);
	r.get_mark(99,100);
	r.display();
	getch();
}