#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct node
{
    int info;
    struct node *next;
}node,*first,*first2,*last2,*last,*tmp,*curr;
void disp();
void cnode();
void split();
void merge();
void main()
{
	int ch;
	void create();
	void create_s();

	first=last2=first2=last=tmp=curr=NULL;

	do
	{
	  clrscr();
	  printf("\n\n\t\t Simple linked list");
	  printf("\n\t\t 1. Create 1st linked list.");
	  printf("\n\t\t 2. Create 2nd linked list.");
	  printf("\n\t\t 3. Split.");
	  printf("\n\t\t 4. Merge.");
	  printf("\n\t\t 5. Display.");
	  printf("\n\t\t 6. Exit.");
	  printf("\n\n\t\t Enter your choice : ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	     case 1:
			create(); break;
	     case 2:
			create_s(); break;
	     case 3:
			split(); break;
	     case 4:
			merge(); break;
	     case 5:
			disp(); break;
	     case 6:
			break;
	     default :
			printf("\n\n\t\t Wrong choice. Try again....");
			break;
	  }
	 getch();
	}while(ch!=6);
}

void create()
{
	int n,i=1;
	printf("\n\n\t\tHow many nodes:");
	scanf("%d",&n);
	while(i<=n)
	{
	cnode();
	if (first==NULL)
		first=tmp;
	else
	   last->next=tmp;
	last=tmp;
	i++;
	}

}


void create_s()
{
	int n,i=1;
	printf("\n\n\t\tHow many nodes:");
	scanf("%d",&n);
	while(i<=n)
	{
	cnode();
	if (first2==NULL)
		first2=tmp;
	else
	   last2->next=tmp;
	last2=tmp;
	i++;
	}

}

void cnode()
{       int data;
	tmp=(struct node*) malloc(sizeof(struct node));
	printf("\n\n\t\tEnter a data:");
	scanf("%d",&data);
	tmp->next=NULL;
	tmp->info=data;
}

void split()
{
	int cnt=1,p;

	if(first==NULL)
	{
		printf("\n\n\t\tList is empty...");
		return;
	}

	printf("\n\n\t\tEnter the position : ");
	scanf("%d",&p);

	curr=first;
	while(cnt!=p-1 && curr->next!=NULL)
	{
		curr=curr->next;
		cnt++;
	}

	if(curr->next==NULL)
	{
		printf("\n\n\t\tPosition not found...");
		return;
	}

	first2=curr->next;
	curr->next=NULL;
	printf("\n\n\t\tSplited successfully...");
}

void merge()
{
	if(first==NULL)
	{
		printf("\n\n\t\tList is empty...");
		return;
	}

	curr=first;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=first2;
	first2=NULL;
}




void disp()
{
       if(first==NULL)
       {
	printf("\n\n\t\tSimple Linked list is empty.");
	return;
       }
       printf("\n\n\t\t\tFirst List\n\t\t");
       curr=first;
       while(curr!=NULL)
       {
	   printf(" %d ",curr->info);
	   curr=curr->next;
       }

       if(first2==NULL)
       {
	return;
       }
       printf("\n\n\t\t\tSecond List\n\t\t");

       if(first==NULL)
       {
	return;
       }

       curr=first2;
       while(curr!=NULL)
       {
	   printf(" %d ",curr->info);
	   curr=curr->next;
       }
}