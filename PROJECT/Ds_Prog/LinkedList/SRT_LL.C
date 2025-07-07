/*      6666666666
	     sort the linked list.
*/

#include<stdio.h>
#include<conio.h>
struct node
{
    int info;
    struct node *next;
}*first,*last,*tmp,*curr1,*curr2;

void disp();
void cnode();
int n;
void main()
{
	int ch;
	void create();
	void sort();
	first=last=tmp=curr1=curr2=NULL;
	do
	{
	  clrscr();
	  printf("\n\n\t\t Simple linked list");
	  printf("\n\t\t 1. Create linked list.");
	  printf("\n\t\t 2. Sort Linked list.");
	  printf("\n\t\t 3. Display .");
	  printf("\n\t\t 4. Exit.");
	  printf("\n\n\t\t Enter your choice:");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	     case 1:
			create(); break;
	     case 2:
			sort(); break;
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
void create()
{
	int i=1;
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
void cnode()
{       int data;
	tmp=(struct node*) malloc(sizeof(struct node));
	printf("\n\n\t\tEnter a data:");
	scanf("%d",&data);
	tmp->next=NULL;
	tmp->info=data;
}
void disp()
{
    curr1=first;
    if(first==NULL)
    {
       printf("\n\n\t\tLinked list is empty....");
       return;
    }
	printf("\n\n\t\t Linked list data:");
    while(curr1!=NULL)
    {
	printf(" %d",curr1->info);
	curr1=curr1->next;
    }
}
/*
    first
	44 22 55 41 66
	c2 c1
*/
void sort()
{
  int i,j,t;
  disp();
  for(i=0;i<n-1;i++)
  {
    curr2=first;
    curr1=curr2->next;
    for(j=0;j<n-i-1;j++)
    {
	   if(curr2->info>curr1->info)
	   {
	      t=curr2->info;
	      curr2->info=curr1->info;
	      curr1->info=t;
	   }
	   curr2=curr1;
	   curr1=curr1->next;
    }
  }
  disp();
}