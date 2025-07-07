// simple queue
#include<iostream.h>
#include<conio.h>

class queue
{
	int size;
	int *p;
	int f,r;

	public:
		queue(int);
		void insert();
		void remove();
		void display();

};
queue :: queue(int x)
{
    size=x;
    p=new int[size];
    r=-1;
    f=-1;
}
void queue :: insert()
{
	int data;

	if(r>=size-1)
	{
		cout<<" Queue Overflow";
		getch();
	}
	else
	{
		r=r+1;
		cout<<"Enter the data ";
		cin>>data;
		p[r]=data;
	}
}
void queue :: remove()
{
	if(f==r)
	{
		cout<<"Queue underflow";
		getch();
	}
	else
	{
		f++;
		cout<<p[f]<<" is successfully deleted ";
		p[f]='\0';
		getch();
	}
}
void queue :: display()
{
	int i;

	if(f==r)
	{
		cout<<"Queue underflow";
		getch();
	}
	else
	{
		cout<<"front => ";
		for(i=0;i-1<r;i++)
		{
			if(p[i]!='\0')
			cout<<p[i]<<"  ";
		}
		cout<<" <= Rear";
		getch();
	}
}
int main()
{
	int n,choice,flag=0;;
	clrscr();
	cout<<"enter the size of queue ";
	cin>>n;

	queue p1(n);

	do
	{
		flag=0;
		clrscr();
	    do{
		if(flag!=0)
		{
			cout<<"Enter a correct choice";
			getch();
			clrscr();
		}

		cout<<"\t\t\t1. Enter data\n";
		cout<<"\t\t\t2. Delete data\n";
		cout<<"\t\t\t3. Display data\n";
		cout<<"\t\t\t4. Exit\n\n";
		cout<<"\t\t\t enter your choice :";
		cin>>choice;

		if(choice>4 || choice<1)
		flag=1;

	    }while(choice>4 || choice<1);

		switch(choice)
		{
			case 1:
				p1.insert();
			break;
			case 2:
				p1.remove();
			break;
			case 3:
				p1.display();
			break;
			case 4:
			break;
		}


	}while(choice!=4);


	getch();
}