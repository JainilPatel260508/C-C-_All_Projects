#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
	int info;
	struct node * next;
};

void disp();
struct node * first,* temp,* curr = NULL;

void main()
{
	int ch;
	void push();
	void pop();
	void peep();
	void change();
	do
	{
	clrscr();
	printf("\n\t\tLink list Using Stack Operation: ");
	printf("\n\t\t1. Push.");
	printf("\n\t\t2. POP.");
	printf("\n\t\t3. Peep.");
	printf("\n\t\t4. Change.");
	printf("\n\t\t5. Display.");
	printf("\n\t\t6. Exit.");
	printf("\n\n\t\tEnter Your Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		default:
			printf("\n\t\tEntered the wrong choice.. Enter the number Between 1 to 4..");
		break;

		case 1:
			push();
		break;
		case 2: pop();
		break;
		case 3: peep();
		break;
		case 4: change();
		break;
		case 5: disp();
		break;
		case 6:	break;
	}
	getch();
	}while(ch!=6);
}

void push()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n\t\tEnter the Value: ");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(first==NULL)
	{
	first=temp;
	}
	else
	temp->next=first;

	first=temp;
	disp();
};

void pop()
{
     temp=first;
     first=temp->next;
	printf("\n\n\t\t%d is Deleted from the link.",temp->info);
     free(temp);
      /*	if(first==NULL)
	{
	    return;
	}
	else if(first->next==NULL)
	{
	printf("\n\n\t\t%d is Deleted from the link.",first->info);
	first=NULL;
	}
	else
	{
	temp=first;
	first=first->next;
	printf("\n\n\t\t%d is Deleted from the link.",temp->info);
	free(temp);
	}*/
	disp();
};

void peep()
{
	int cnt=1,pos;
	curr=first;
	printf("\n\t\tEnter the position you want to peep: ");
	scanf("%d",&pos);

	while(cnt != pos)
	{
		curr=curr->next;
		cnt++;
	}

	if(curr==NULL)
		{
			printf("\n\t\tPosition not found..");
			return;
		}
	printf("\n\t\tThe Value at position %d is %d",pos,curr->info);
	disp();
};

void change()
{
	int cnt=1,pos,item,a;
	curr=first;
	printf("\n\t\tEnter the position you want to peep: ");
	scanf("%d",&pos);

	while(cnt != pos)
	{
		curr=curr->next;
		cnt++;
	}

	if(curr==NULL)
		{
			printf("\n\t\tPosition not found..");
			return;
		}
	a=curr->info;

	printf("\n\t\tEnter the Value to be change: ");
	scanf("%d",&item);
	curr->info=item;
	printf("\n\t\tThe Value %d at position %d is changed to %d",a,pos,curr->info);
	disp();
};

void disp()
{
	if(first==NULL)
	{
		printf("\n\n\t\tLink List is Empty..");
	}
	else
	{
	curr=first;
	printf("\n\n\t\tTop ->\t");
	while(curr!=NULL)
	{
		printf("%4d\n\t\t\t",curr->info);
		curr=curr->next;
	}
	}
};