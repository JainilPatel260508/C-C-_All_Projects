/*
	Linked list in queue..
*/
#include<stdio.h>
#include<conio.h>

struct node
{
	int info;
	struct node *next;
};

struct node *first,*last,*temp,*curr=NULL;
void disp();
void node();

void main()
{
	int ch;
	void insert();
	void del();
	do
	{
	clrscr();
	printf("\n\t\tOptions for linked list in queue: ");
	printf("\n\t\t1. Insert.");
	printf("\n\t\t2. Delete.");
	printf("\n\t\t3. Display.");
	printf("\n\t\t4. Exit.");
	printf("\n\t\tEnter Your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		default:
			printf("\n\t\tEntered the Wrong Value..Please insert it between 1 to 4..");
		break;
		case 1:	insert();
		break;
		case 2:	del();
		break;
		case 3:	disp();
		break;
		case 4:	break;
	}
	getch();
	}while(ch!=4);
}

void node()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n\t\tEnter the value to node: ");
	scanf("%d",&temp->info);
	temp->next=NULL;
};

void insert()
{
	node();
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		last->next=temp;
	}
	last=temp;
	disp();
};

void del()
{
	if(first==NULL)
	{
		printf("\n\t\tLinked list is Empty..");
	}
	else
	{
		temp=first;
		first=first->next;
		printf("\n\t\t%d is deleted from the link list..\n",temp->info);
		free(temp);
		disp();
	}
};

void disp()
{
	if(first==NULL)
	{
		printf("\n\t\tLinked list is Empty..");
	}
	curr=first;
	printf("\n\t\t");
	while(curr!=NULL)
	{
		printf("%4d",curr->info);
		curr=curr->next;
	}
};