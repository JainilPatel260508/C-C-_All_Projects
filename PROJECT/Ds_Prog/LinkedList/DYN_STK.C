#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct node
{
    int info;
    struct node *next;
}*top,*last,*tmp,*curr;
void disp();
void cnode();
void push();
void pop();
void main()
{
	int ch;

	top=last=tmp=curr=NULL;

	do
	{
	  clrscr();
	  printf("\n\n\t\t Dynamic Stack");
	  printf("\n\t\t 1. Push.");
	  printf("\n\t\t 2. Pop.");
	  printf("\n\t\t 3. Display.");
	  printf("\n\t\t 4. Exit.");
	  printf("\n\n\t\t Enter your choice : ");
	  scanf("%d",&ch);
	  switch(tolower(ch))
	  {
	     case 1:
			push(); break;
	     case 2:
			pop(); break;
	     case 3:
			disp(); break;
	     case 4:
			break;
	     default :
			printf("\n\n\t\t Wrong choice. Try again....");
			break;
	  }
	 getch();
	}while(ch!=4);
}

void push()
{
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->next=NULL;

	printf("\n\n\t\tEnter data : ");
	scanf("%d",&tmp->info);

	if(top==NULL)
	{
		top=tmp;
		return;
	}
	tmp->next=top;
	top=tmp;
}

void pop()
{
	if(top==NULL)
	{
		printf("\n\n\t\tStack is underflow.");
		return;
	}

	tmp=top;
	top=tmp->next;
	printf("\n\n\t\t%d is deleted from dynamic stack.",tmp->info);
	free(tmp);
}

void disp()
{
	if(top==NULL)
	{
		printf("\n\n\t\tStack is underflow.");
		return;
	}

	curr=top;
	printf("\n\n\t\tTop..");
	while(curr!=NULL)
	{
		printf("%d\n\t\t     ",curr->info);
		curr=curr->next;
	}
}


