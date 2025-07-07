#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<ctype.h>

struct dpq
{
	int info,p;
	struct dpq *next;
}*node,*tmp,*curr,*first;

void main()
{
	int ch;
	void cnode();
	void del();
	void create();
	void disp();
	clrscr();
	first=tmp=node=curr=NULL;
	do
	{
	clrscr();
	printf("\n\n\t\tMenu...");
	printf("\n\t\t1.Create.");
	printf("\n\t\t2.Delete.");
	printf("\n\t\t3.Display.");
	printf("\n\t\t4.Exit.");
	printf("\n\n\t\tEnter your choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			create(); break;
		case 2:
			del(); break;
		case 3:
			disp(); break;
		case 4:
			break;
		default:
			printf("\n\n\t\tWrong Choice... Try again...!");
	}
	getch();
	}while(ch!=4);
}

void cnode()
{
	node=(struct dpq *)malloc(sizeof(struct dpq));
	node->next=NULL;
}

void create()
{
	cnode();
	printf("\n\n\t\tEnter priority : ");
	scanf("%d",&node->p);
	printf("\n\t\tEnter data : ");
	scanf("%d",&node->info);

	if(first==NULL)
	{
		first=node;
		return;
	}
	curr=first;
	tmp=first;
	while(curr->p <= node->p)
	{
		if(curr->next==NULL) //Last Ins
		{
			curr->next=node;
			return;
		}
		tmp=curr;
		curr=curr->next;
	}
	if(tmp==first && first->p > node->p)//First ins
	{
		node->next=first;
		first=node;
		return;
	}
	tmp->next=node;  //Middle ins
	node->next=curr;
}
void del()
{
	if(first==NULL)
	{
		printf("\n\n\t\tDynamic priority queue is empty...");
		return;
	}
	tmp=first;
	first=tmp->next;
	free(tmp);
}
void disp()
{
	if(first==NULL)
	{
		printf("\n\n\t\tDynamic Priority Queue is empty...");
		return;
	}
	curr=first;
	while(curr!=NULL)
	{
		printf("  %d | %d ->",curr->p,curr->info);
		curr=curr->next;
	}
}






