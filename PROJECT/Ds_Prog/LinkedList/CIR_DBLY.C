/*
	Circular Doubly linked list
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
}*first,*last,*tmp,*curr;

void disp();
void cnode();
void main()
{
	char ch;
	void create();
	void bins();
	void mdins();
	void msins();
	void eins();
	void bdel();
	void mddel();
	void msdel();
	void edel();

	first=last=tmp=curr=NULL;

	do
	{
	  clrscr();
	  printf("\n\n\t\t Doubly linked list");
	  printf("\n\t\t a. Create linked list.");
	  printf("\n\t\t b. Begin Insert.");
	  printf("\n\t\t c. Middle After Which data.");
	  printf("\n\t\t d. Middle Which position.");
	  printf("\n\t\t e. End Insert.");
	  printf("\n\t\t g. Begin Delete.");
	  printf("\n\t\t h. Delete Which data.");
	  printf("\n\t\t i. Delete Which position.");
	  printf("\n\t\t j. End Delete.");
	  printf("\n\t\t f. Display .");
	  printf("\n\t\t x. Exit.");
	  printf("\n\n\t\t Enter your choice.");
	  fflush(stdin);
	  ch=getchar();
	  switch(tolower(ch))
	  {
	     case 'a':
			create(); break;
	     case 'b':
			bins(); break;
	     case 'c':
			mdins(); break;
	     case 'd':
			msins(); break;
	     case 'e':
			eins(); break;
	     case 'g':
			bdel(); break;
	     case 'h':
			mddel(); break;
	     case 'i':
			msdel(); break;
	     case 'j':
			edel(); break;
	     case 'f':
			disp(); break;
	     case 'x':
			break;
	     default :
			printf("\n\n\t\t Wrong choice. Try again....");
			break;
	  }
	 getch();
	}while('x'!=ch);
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
	{   first=tmp;
	    tmp->prev=tmp;
	}
	else
	{
	   last->next=tmp;
	   tmp->prev=last;
	 }
	tmp->next=first;
	last=tmp;
	first->prev=last;
	i++;
	}
}
/*
     101f       101          102	     103
	    101<-10->102   101<-20->103   102<-30->101
					       last
*/
void cnode()
{       int data;
	tmp=(struct node*) malloc(sizeof(struct node));
	printf("\n\n\t\tEnter a data:");
	scanf("%d",&data);
	tmp->next=NULL;
	tmp->prev=NULL;
	tmp->info=data;
}
/*
201f 201          101            102	        103
    103<-100->101 201<-10->102   101<-20->103   102<-30->101
					       last
*/

void bins()
{
	cnode();

	tmp->next=first;
	tmp->prev=last;
	first->prev=tmp;
	first=tmp;
}
/*
     101f       101          102	  205   tmp	 103
	    101<-10->102   101<-20->205  102<-200->103	 205<-30->101
				curr	       		 last
    tmp->next=curr->next;
    tmp->prev=curr;
    curr->next->prev=tmp;
    curr->next=tmp;

*/

void mdins()
{
    int vdata;
    printf("\n\n\t\tAfter Which data:");
    scanf("%d",&vdata);
    curr=first;
    while(curr->info!=vdata && curr->next!=first)
    {
       curr=curr->next;
    }
    if(curr->next==first)
    {
       printf("\n\n\t\tData not found.");
       return ;
    }
    cnode();
    tmp->next=curr->next;
    tmp->prev=curr;
    curr->next->prev=tmp;
    curr->next=tmp;
}
void msins()
{
    int pos,cnt=1;
    printf("\n\n\t\tWhich Position:");
    scanf("%d",&pos);
    curr=first;
    while(cnt!=pos-1 && curr->next!=first)
    {
       curr=curr->next;
       cnt++;
    }
    if(curr->next==first)
    {
       printf("\n\n\t\tPosition not found.");
       return ;
    }
    cnode();
    tmp->next=curr->next;
    tmp->prev=curr;
    curr->next->prev=tmp;
    curr->next=tmp;


}
/*
     101f       101          102	     103	203
	    203<-10->102   101<-20->103   102<-30->203  103<-200->101
							last
*/

void eins()
{
	cnode();
	tmp->next=first;
	tmp->prev=last;
	last->next=tmp;
	last=tmp;
	first->prev=last;

}
//Delete operation
/*
     102f       101          102	     103	203
	    203<-10->102   203<-20->103   102<-30->203  103<-200->101
		 tmp					last
*/

void bdel()
{
       if(first==NULL)
       {
	printf("\n\n\t\tCirular Doubly Linked list is empty.");
	return;
       }
	if(first==last)
	{
	   tmp=first;
	   first=NULL;
	   last=NULL;
	}
	else
	{
		tmp=first;
		first=tmp->next;
		first->prev=last;
	}
	printf("%d is deleted from linked list.",tmp->info);
	free(tmp);
	disp();
}

void mddel()
{
       int vdata;
       if(first==NULL)
       {
	printf("\n\n\t\tDoubly Linked list is empty.");
	return;
       }
       printf("\n\n\t\tWhich data:");
       scanf("%d",&vdata);
       curr=first;
       while(curr->next->info!=vdata && curr->next!=last)
       {
	  curr=curr->next;
       }
       if(curr->next==last)
       {
	 printf("Data not found.");
	 return;
	}
       tmp=curr->next;
       tmp->next->prev=curr;
       curr->next=tmp->next;

       printf("%d is deleted from linked list.",tmp->info);
       free(tmp);
       disp();
}
void msdel()
{
       int pos,cnt=1;
       if(first==NULL)
       {
	printf("\n\n\t\tSimple Linked list is empty.");
	return;
       }
       printf("\n\n\t\tWhich Position:");
       scanf("%d",&pos);
       curr=first;
       while(cnt != pos-1 && curr->next!=last)
       {
	  curr=curr->next;
	  cnt++;
       }
       if(curr->next==last)
       {
	 printf("Position not found.");
	 return;
	}
       tmp=curr->next;
       tmp->next->prev=curr;
       curr->next=tmp->next;
       printf("%d is deleted from linked list.",tmp->info);
       free(tmp);
       disp();
}
void edel()
{
       if(first==NULL)
       {
	printf("\n\n\t\tDoubly Linked list is empty.");
	return;
       }

       if(first==last)  //if linked list has only one node
       {
	   tmp=first;
	   first=NULL;
	   last=NULL;
       }
       else
       {
       tmp=last;
       last=tmp->prev;
       last->next=first;
       first->prev=last;
       }
       printf("%d is deleted from linked list.",tmp->info);
       free(tmp);
       disp();
}
void disp()
{
       if(first==NULL)
       {
	printf("\n\n\t\tCircular Doubly Linked list is empty.");
	return;
       }
       printf("\n\n\t\tForward :");
       curr=first;
       while(curr!=last)
       {
	   printf(" %d ",curr->info);
	   curr=curr->next;
       }
       printf(" %d ",curr->info);
       printf("\n\n\t\tBackward :");
       curr=last;
       while(curr!=first)
       {
	   printf(" %d ",curr->info);
	   curr=curr->prev;
       }
	   printf(" %d ",curr->info);

}