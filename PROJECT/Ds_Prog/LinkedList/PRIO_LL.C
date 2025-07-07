/*
	Linked list in priority queue..
*/
#include<stdio.h>
#include<conio.h>

struct node
{
	int info;
	struct node *next;
}*last,*temp,*curr,*first=NULL,*f[5]={NULL,NULL,NULL,NULL,NULL},*r[5]={NULL,NULL,NULL,NULL,NULL};

int n=5;
void node();
void disp();

void main()
{
	int ch,i;
	void insert();
	void del();
	do
	{
	clrscr();
	printf("\n\t\t\Options for linked list in priority Queue: ");
	printf("\n\t\t1. Insert.");
	printf("\n\t\t2. Delete.");
	printf("\n\t\t3. Display.");
	printf("\n\t\t4. Exit.");
	printf("\n\t\tEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		default:
			printf("\n\t\tWrong choice..\n\t\tPlease enter between 1 to 4..");
		break;

		case 1: insert();
		break;

		case 2: del();
		break;

		case 3: disp();
		break;

		case 4:	break;
	}
	getch();
	}while(ch!=4);
}

void node()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n\t\tEnter the item: ");
	scanf("%d",&temp->info);
	temp->next=NULL;
};

void insert()
{
	int i,j;
	printf("\n\t\tEnter the priority you want to insert: ");
	scanf("%d",&i);
	i=i-1;
	node();
	if(r[i]==NULL)
	{
		if(first==NULL)
		{
			first=temp;
			r[i]=first;
			f[i]=first;
		}
		else
		{
			if(i==0)
			j=i;
			else
			j=i-1;
			while(r[j]==NULL)
			{
				j=j-1;
				if(j<0)
				{
				j=i;
				break;
				}
			}
			if(j<i)
			{
				temp->next=r[j]->next;
				r[j]->next=temp;
				r[i]=temp;
				f[i]=temp;
			}
			else
			{
			j=i+1;
			while(r[j]==NULL)
			{
				j=j+1;
			}
			temp->next=f[j];
			first=temp;
			r[i]=temp;
			f[i]=temp;
			}
		}
	}
	else
	{
		if(r[i]->next==NULL)
		{
			r[i]->next=temp;
			r[i]=temp;
		}
		else
		{
			temp->next=r[i]->next;
			r[i]->next=temp;
			r[i]=temp;
		}

	}


	disp();
};

void del()
{
	int i=0;
	if(first==NULL)
	{
		disp();
		return;
	}
	while(f[i]==NULL)
	{
		i=i+1;
	}
	if(f[i]==r[i])
	{
		f[i]=r[i]=NULL;
	}
	else
		f[i]=f[i]->next;
	temp=first;
	first=first->next;
	printf("\n\t\t%d is deleted from the list..\n",temp->info);
	free(temp);
	disp();
};

void disp()
{
	if(first==NULL)
	{
		printf("\n\t\tLink List is empty..");
	}
	curr=first;
	while(curr!=NULL)
	{
		printf("%4d",curr->info);
		curr=curr->next;
	}
};