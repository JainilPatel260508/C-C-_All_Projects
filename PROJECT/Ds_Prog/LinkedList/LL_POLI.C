/*
	Addition of two Polinomial Notation
*/
#include<stdio.h>
#include<conio.h>

struct node
{
    int coeff,exp;
    struct node *next;
}node,*first,*first1,*first2,*last,*tmp,*curr,*curr1,*curr2;
void disp();
void cnode();
void Add();
void main()
{
	int ch;
	void create();
	void create_s();

	first=first1=first2=last=tmp=curr=curr1=curr2=NULL;

	do
	{
	  clrscr();
	  printf("\n\n\t\t Add Polinomial Notation");
	  printf("\n\t\t 1. Create 1st Polinomial.");
	  printf("\n\t\t 2. Create 2nd Polinomial.");
	  printf("\n\t\t 3. Add Polinomial.");
	  printf("\n\t\t 4. Display.");
	  printf("\n\t\t 5. Exit.");
	  printf("\n\n\t\t Enter your choice : ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	     case 1:
			create(); break;
	     case 2:
			create_s(); break;
	     case 3:
			Add(); break;
	     case 4:
			disp(); break;
	     case 5:
			break;
	     default :
			printf("\n\n\t\t Wrong choice. Try again....");
			break;
	  }
	 getch();
	}while(ch!=5);
}

void create()
{
	while(1)
	{
	  cnode();
	  if(tmp->exp==0 && tmp->coeff==0)
	  break;

	if (first1==NULL)
		first1=tmp;
	else
	   last->next=tmp;
	last=tmp;
	}

}
void create_s()
{
	while(1)
	{
	  cnode();
	  if(tmp->exp==0 && tmp->coeff==0)
	  break;

	if (first2==NULL)
		first2=tmp;
	else
	   last->next=tmp;
	   last=tmp;
	}

}

void cnode()
{
	tmp=(struct node*) malloc(sizeof(struct node));
	printf("\n\n\t\tEnter a Co-Efficient:");
	scanf("%d",&tmp->coeff);
	printf("\n\n\t\tEnter a Exponent:");
	scanf("%d",&tmp->exp);
	tmp->next=NULL;
}
void Add()
{
	curr1=first1;
	curr2=first2;
	first=NULL;

	while(curr1!=NULL && curr2 != NULL)
	{
	    tmp=(struct node*) malloc(sizeof(struct node));
	    tmp->next=NULL;
	    if(curr1->exp == curr2->exp)
	    {
	      tmp->coeff=curr1->coeff+curr2->coeff;
	      tmp->exp=curr1->exp;
	      curr1=curr1->next;
	      curr2=curr2->next;
	    }
	    else if(curr1->exp > curr2->exp)
	    {
	      tmp->coeff=curr1->coeff;
	      tmp->exp=curr1->exp;
	      curr1=curr1->next;
	    }
	    else
	    {
	      tmp->coeff=curr2->coeff;
	      tmp->exp=curr2->exp;
	      curr2=curr2->next;
	    }
	    if(first==NULL)
	       first=tmp;
	     else
	       last->next=tmp;
	     last=tmp;
	}//end of while loop

	while(curr1!=NULL)
	{
	     tmp=(struct node*) malloc(sizeof(struct node));
	     tmp->next=NULL;

	      tmp->coeff=curr1->coeff;
	      tmp->exp=curr1->exp;
	      curr1=curr1->next;
	     if(first==NULL)
	       first=tmp;
	     else
	       last->next=tmp;
	     last=tmp;
	}

	while(curr2!=NULL)
	{
	    tmp=(struct node*) malloc(sizeof(struct node));
	    tmp->next=NULL;
	    tmp->coeff=curr2->coeff;
	    tmp->exp=curr2->exp;
	      curr2=curr2->next;
	     if(first==NULL)
	       first=tmp;
	     else
	       last->next=tmp;
	     last=tmp;
	}
	printf("\n\n\t\tSuccessfully Added.");
}
void disp()
{
       if(first1==NULL)
       {
	printf("\n\n\t\t1st Polinomial is empty.");
       }
       else
       {
       printf("\n\n\t\t1st Polinomial\n\t\t");
       curr=first1;
       while(curr!=NULL)
       {
	   printf(" %dx%d +",curr->coeff,curr->exp);
	   curr=curr->next;
       }
       }

       if(first2==NULL)
       {
	printf("\n\n\t\t2nd Polinomial is empty.");
       }
       else
       {
       printf("\n\n\t\t2nd Polinomial\n\t\t");
       curr=first2;
       while(curr!=NULL)
       {
	   printf(" %dx%d +",curr->coeff,curr->exp);
	   curr=curr->next;
       }
       }

       if(first==NULL)
       {
	return;
       }
       printf("\n\n\t\tAdded Polinomial\n\t\t");
       curr=first;
       while(curr!=NULL)
       {
	   printf(" %dx%d +",curr->coeff,curr->exp);
	   curr=curr->next;
       }

}