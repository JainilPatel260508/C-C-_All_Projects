/*
	     sort the linked list.

*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
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
	  printf("\n\n\t\t Simple Circular linked list");
	  printf("\n\t\t 1. Create linked list.");
	  printf("\n\t\t 2. Sort Linked list.");
	  printf("\n\t\t 3. Display .");
	  printf("\n\t\t 4. Exit.");
	  printf("\n\n\t\t Enter your choice.");
	  scanf("%d",&ch);
	  switch(tolower(ch))
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
void sort()
{
  int i,j,t;
   for(i=0;i<n-1;i++)
   {
      curr1=first;
      curr2=curr1->next;
      for(j=0;j<n-i-1;j++)
      {
	  if(curr1->info > curr2->info)
	  {
	      t=curr1->info;
	      curr1->info=curr2->info;
	      curr2->info=t;
	  }
	  curr1=curr1->next;
	  curr2=curr2->next;
      }
   }
   printf("\n\n\t\t Successfuly Sorted.");
}
void disp()
{
       if(first==NULL)
       {
	printf("\n\n\t\tSimple Circular Linked list is empty.");
	return;
       }
       printf("\n\n\t\t\t");
       curr1=first;
       while(curr1!=NULL)
       {
	   printf(" %d ",curr1->info);
	   curr1=curr1->next;
       }

}
/*

  s|10 x  <- 20 <- 30 <- 40
    l                    top




*/

