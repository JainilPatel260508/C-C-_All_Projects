// menu driven multi operation

#include<iostream.h>
#include<conio.h>

class list
{
	private:
		int a[10];

	public:
		int menu();
		int input(int);
		int fn_delete(int);
		void sort(int);
		void output(int);
};

int list :: menu()
{
	int choice_menu,l1,flag=0;

 l1:	clrscr();

	if(flag==1)
	cout<<"\t\t\tenter a valid choice"<<endl<<endl;

	cout<<"\t\t\t1 --> Insert the data"<<endl;
	cout<<"\t\t\t2 --> Delete the data"<<endl;
	cout<<"\t\t\t3 --> Sort the data"<<endl;
	cout<<"\t\t\t4 --> Display all the data"<<endl;
	cout<<"\t\t\t0 --> Exit"<<endl<<endl;

	cout<<"\t\t\tEnter your choice : ";
	cin>>choice_menu;

	if(choice_menu<0 || choice_menu>4)
	{
		flag=1;
		goto l1;
	}

	return(choice_menu);
}

int list :: input(int i)
{
	int position,data,l1,choice,in_loops,j,m;

l1:	cout<<"\tEnter your position to enter the data : ";
	cin>>position;

	if(i<11)
	{
		m=i;
		if(position<11 && position>0)
		{
			if(position<=i)
			{
				cout<<"\tEnter the data : ";
				cin>>data;

				in_loops=i-position ;
				if(position>0 && position<i)
				{
					for(j=0;j<in_loops;j++,m--)
					{
						a[m-1]=a[m-2];
					}
				}
				a[position-1]=data;
			}
			else
			{
				clrscr();
				cout<<endl<<"Enter a correct position from 1 to "<<i<<endl;
				goto l1;
			}
		}
		else
		{
			cout<<endl<<"\tEnter a correct position from 1 to "<<i<<endl;
			goto l1;
		}
		cout<<endl<<"\tEnter 1 to input again and any other number to go to menu : "<<endl;
		cin>>choice;
	}
	else
	{
		cout<<"\tdata overflewed can not enter the data"<<endl;
		cout<<"\tEnter any number except '1' to go to the menu : ";
		cin>>choice;
	}

	return(choice);
}

int list :: fn_delete(int b)
{
	int pos_del,del_loops,choice_del,o,e;
	clrscr();
	a[10]=0;

l1:	cout<<" Enter the position to delete : ";
	cin>>pos_del;

	if(pos_del<11)
	{
		o=pos_del;
		if(pos_del<b && pos_del>0)
		{
			cout<<a[pos_del-1]<<" is successfully deleted"<<endl;

			del_loops=b-pos_del;

			for(e=0;e<del_loops;e++,o++)
			{
				a[o-1]=a[o];
			}
		}
		else
		{
			clrscr();
			cout<<"data under flowed"<<endl;
			cout<< "Enter a correct position from 1 to "<<b-1<<endl;
			goto l1;
		}
		cout<<"Enter 1 to delete again and any other number to go to menu : "<<endl;
		cin>>choice_del;

	}
	return(choice_del);
}

void list :: sort(int q)
{
	int r,s,t,any;
	q--;
	for(r=0;r<q;r++)
	{
		for(s=0;s<q;s++)
		{
			if(a[r]<a[s])
			{
				t=a[s];
				a[s]=a[r];
				a[r]=t;
			}
		}
	}
	clrscr();

	cout<<"Successfully sorted"<<endl;
	cout<<"Enter any number to go to menu : ";
	cin>>any;
}
void list :: output(int u)
{
	int v,any;

	clrscr();
	cout<<endl<<endl<<endl;

	for(v=0;v<u-1;v++)
	{
		cout<<v+1<<" position --> "<<a[v]<<endl;
	}
	cout<<"Enter any number to continue : ";
	cin>>any;
}
void main()
{
	list p1;
	int n,z=1,x;
	clrscr();

	do{
		x=p1.menu();
		switch(x)
		{
			case 1:
			{
				do{
					clrscr();
					n=p1.input(z);
					z++;
				}while(n==1);
			}
			break;

			case 2:
			{
				do{
					clrscr();
					n=p1.fn_delete(z);
					z--;
				}while(n==1);
				x=2;
			}
			break;

			case 3:
				p1.sort(z);
				x=3;
			break;

			case 4:
				p1.output(z);
				x=4;
			break;
		}
	}while(x>0);
	getch();
}