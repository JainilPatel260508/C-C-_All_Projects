/*
	Book Details...
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
static cnt;
static int s,us;
class book
{

	int *b_id,*stock,no;
	float *price;
	char **title,**author,**publisher;

	void update();

	public:
		void count()
		{
			cnt=-1;
			s=0;
			us=0;
		}

		book(int x);
		void insert()
		{
			if(cnt>=no-1)
			{
				cout<<"\n\n\t\tNo space for Insert record...";
				return;
			}
			cnt++;
			cout<<"\n\n\t\tEnter Book ID : ";
			cin>>b_id[cnt];
			cout<<"\n\n\t\tEnter Book Title : ";
			gets(title[cnt]);
			cout<<"\n\n\t\tEnter Book Author : ";
			gets(author[cnt]);
			cout<<"\n\n\t\tEnter Book Publisher : ";
			gets(publisher[cnt]);
			cout<<"\n\n\t\tEnter Book Price : ";
			cin>>price[cnt];
			cout<<"\n\n\t\tEnter Book Stock : ";
			cin>>stock[cnt];
		}

		void status();
		void display();
		void sell();

		void temp()
		{
			update();
		}

		~book()
		{
			delete	b_id,stock,price,title,author,publisher;
		}

};

book :: book(int x)
{
	no=x;
	b_id = new int[no];
	stock = new int[no];
	price = new float[no];
	title = new char *[no];
	author = new char *[no];
	publisher = new char *[no];
	for(int i=0;i<no;i++)
	{
		title[i]=new char[15];
		author[i]=new char[15];
		publisher[i]=new char[15];
	}
}
void book :: status()
{
	cout<<"\n\n\t\tTotal Records : "<<cnt+1;
	cout<<"\n\n\t\tSuccessful Transaction : "<<s;
	cout<<"\n\n\t\tUnsuccessful Transaction : "<<us;
}
void book :: update()
{
	if(cnt==-1)
	{
		cout<<"\n\n\t\tNo record...";
		return;
	}

	int temp;
	cout<<"\n\n\t\tEnter the Book ID for Update Price : ";
	cin>>temp;

	for(int i=0;i<=cnt;i++)
	{
		if(temp==b_id[i])
		{
			cout<<"\n\n\t\tEnter the New Price : ";
			cin>>price[i];
			return;
		}
	}

	cout<<"\n\n\t\tNo Book found for this Id...";
	return;

}


void book :: sell()
{
	char ttemp[15],atemp[15];
	int qty;

	if(cnt==-1)
	{
		cout<<"\n\n\t\tNo record...";
		return;
	}
	cout<<"\n\n\t\tEnter the Title : ";
	gets(ttemp);
	cout<<"\n\t\tEnter the Author : ";
	gets(atemp);

	for(int i=0;i<=cnt;i++)
	{
		if(strcmp(ttemp,title[i])==0 && strcmp(atemp,author[i])==0)
		{
			cout<<"\n\n\n\n\t\tBook ID : "<<b_id[i];
			cout<<"\n\n\t\tTitle : "<<title[i];
			cout<<"\n\n\t\tAuthor : "<<author[i];
			cout<<"\n\n\t\tPublisher : "<<publisher[i];
			cout<<"\n\n\t\tPrice : "<<price[i];
			cout<<"\n\n\t\tStock : "<<stock[i];

			cout<<"\n\n\n\n\t\tEnter the quantity : ";
			cin>>qty;

			if(qty<=stock[i])
			{
				cout<<"\n\n\n\t\tTotal amount is "<<price[i]*qty;
				stock[i]-=qty;
				s++;
				cout<<"\n\n\n\n\t\tTransaction Successfully Completed...";
				return;
			}
			else
			{
				cout<<"\n\n\n\t\tRequired copies not in Stock...";
				us++;
				return;
			}
		}
	}

	cout<<"\n\n\n\t\tNo Record Found...";
	us++;

}


void book :: display()
{
	if(cnt==-1)
	{
		cout<<"\n\n\t\tNo record...";
		return;
	}

	for(int i=0;i<=cnt;i++)
	{
		cout<<"\n\n\n\n\t\tBook ID : "<<b_id[i];
		cout<<"\n\n\t\tTitle : "<<title[i];
		cout<<"\n\n\t\tAuthor : "<<author[i];
		cout<<"\n\n\t\tPublisher : "<<publisher[i];
		cout<<"\n\n\t\tPrice : "<<price[i];
		cout<<"\n\n\t\tStock : "<<stock[i];
	}
}
void main()
{
	clrscr();
	int no1;
	cout<<"\n\n\t\tEnter the total number of book : ";
	cin>>no1;
	book b(no1);
	b.count();
	int ch;

	do
	{
		clrscr();
		cout<<"\n\n\t\t1.Insert...";
		cout<<"\n\t\t2.Display...";
		cout<<"\n\t\t3.Sell...";
		cout<<"\n\t\t4.Update_Price...";
		cout<<"\n\t\t5.Status...";
		cout<<"\n\t\t6.Exit...";
		cout<<"\n\n\n\n\t\tEnter your choice :";
		cin>>ch;

		switch(ch)
		{
			case 1:
				b.insert();
				break;

			case 2:
				b.display();
				break;

			case 3:
				b.sell();
				break;

			case 4:
				b.temp();
				break;

			case 5:
				b.status();
				break;

			case 6:
				break;

			default:
				cout<<"\n\n\n\t\tWrong Choice...";

		}

	getch();
	}while(ch!=6);
}





