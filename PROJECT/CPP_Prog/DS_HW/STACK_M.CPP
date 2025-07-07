// stack menu driven operation

#include<iostream.h>
#include<conio.h>

class stack
{
	int arr[20];
	int top,stack_size;

	public:
		void initialize();
		void menu();
		void push();
		void pop();
		void peep();
		void change();
		void display();
};
void stack :: initialize()
{
	 top=-1;
}

void stack :: menu()
{
	int choice;
	clrscr();
	cout<<"\n\n\t\tEnter stack size (max 20) :";
	cin>>stack_size;
	do
	{
	clrscr();
		cout<<"\n\n\t\t\t1 --> PUSH\n";
		cout<<"\t\t\t2 --> POP\n";
		cout<<"\t\t\t3 --> PEEP\n";
		cout<<"\t\t\t4 --> CHANGE\n";
		cout<<"\t\t\t5 --> DISPLAY\n";
		cout<<"\t\t\t6 --> EXIT\n";
		cout<<"\n\t\t\tEnter your choice : ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				push();
				break;

			case 2:
				pop();
				break;

			case 3:
				peep();
				break;

			case 4:
				change();
				break;

			case 5:
				display();
				break;

			case 6:
				break;

			default :
				cout<<"Enter a correct choice";
				getch();
		}
	}while(choice!=6);
}

void stack :: push()
{
	int i,j,data;

	if(top<stack_size-1)
	{
		cout<<"Enter your data : ";
		cin>>data;
		top++;

		arr[top]=data;
		getch();
	}
	else
	{
		cout<<"Data overflew ..!";
		getch();
	}
}

void stack :: pop()
{
	if(top>-1)
	{
		cout<<arr[top]<<" is successfully deleted";
		arr[top]=0;
		top--;

		getch();
	}
	else
	{
		cout<<"Data underflew ..!";
		getch();
	}
}
void stack :: peep()
{
	int peep_pos;
	cout<<"Enter the position : ";
	cin>>peep_pos;

	if(peep_pos<1 || peep_pos>top+1)
	{
		cout<<"Data underflewed...!";
		getch();
	}
	else
	{
		cout<<arr[top-peep_pos+1]<<" is peeped from ther stack";
		getch();
	}
}
void stack :: change()
{
	int change_pos,new_data;
	cout<<"Enter the position : ";
	cin>>change_pos;

	if(change_pos<1 || change_pos>top+1)
	{
		cout<<"Data underflewed...!";
		getch();
	}
	else
	{
		cout<<"Enter the new data :";
		cin>>new_data;

		cout<<"\n\n Previous data :"<<arr[top-change_pos+1];
		arr[top-change_pos+1]=new_data;
		getch();
	}
}
void stack :: display()
{
	int i;
	cout<<"top --> ";
	for(i=top;i>-1;i--)
	{
		cout<<arr[i]<<"\n\t";
	}
	getch();
}
void main()
{
	stack p1;
	clrscr();
	p1.initialize();
	p1.menu();

	getch();
}