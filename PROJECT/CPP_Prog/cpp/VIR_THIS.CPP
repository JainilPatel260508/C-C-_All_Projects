#include<iostream.h>
#include<conio.h>
#include<string.h>

class person
{
	char name[30];
	float age;
	public:
		person(char *s,float age)
		{
			strcpy(name,s);
			this->age=age;
		}

		person & person :: greater(person & x)
		{
			if(x.age>age)
				return x;
			else
				return *this;
		}
		void putdata()
		{
			cout<<"\n\n\t\t\t\tName : "<<name;
			cout<<"\n\n\t\t\t\tAge : "<<age;
		}
};

void main()
{
	clrscr();
	person p1("Janmesh",39.40),p2("Saurabh",87.90),p3("Sajan",8.12);

	person p=p1.greater(p3);
	cout<<"\n\n\t\tElder person...";
	p.putdata();

	p=p3.greater(p2);
	cout<<"\n\n\n\n\t\tElder person...";
	p.putdata();

	getch();
}
