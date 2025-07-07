// big 3 and big 2

#include<iostream.h>
#include<conio.h>

class largest
{
	private:
		int n1,n2,n3;
	public:
		void input()
		{
			cout<<"\n\tEnter 1st no : ";
			cin>>n1;
			cout<<"\n\tEnter 2nd no : ";
			cin>>n2;
			cout<<"\n\tEnter 3rd no : ";
			cin>>n3;
		}
		void big3()
		{
			if(n1>n2)
			{
				if(n1>n3)
				cout<<"\n\tThe largest number is "<<n1;
				else
				cout<<"\n\tThe largest number is "<<n3;
			}
			else
			{
				if(n2>n3)
				cout<<"\n\tThe largest number is "<<n2;
				else
				cout<<"\n\tThe largest number is "<<n3;
			}
		}
		void big2()
		{
			if(n1>n2)
			cout<<"\n\tThe largest number is "<<n1<<" in first two numbers";
			else
			cout<<"\n\tThe largest number is "<<n2<<" in first two numbers";

		}
};
void main()
{
	largest no;
	clrscr();

	no.input();

	no.big3();
	no.big2();

	getch();
}