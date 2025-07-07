// circular queue
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
	cout<<"Enter the Data";
	cin>>data;

	if(r==size-1)
	r=0;
	else
	r++;

	if(r==f)
	{
		if(f==0)
		r=size-1;
		else
		r--;

		cout<<"Queue Overflow";
		getch();
	}
	else
	{
		p[r]=data;
	}
	if(f==-1)
	f++;
}
void queue :: remove()
{
	if(f==-1)
	{
		cout<<"Underflow";
		getch();
	}
	p[f]='\0';

	if(f==r)
	f=r=-1;
	else if(f==size-1)
	f=0;
	else
	f++;
}
void queue :: display()
{
	int i;

		for(i=0;i<size;i++)
		{
		cout<<p[i]<<endl;
		}getch();

}
void main()
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