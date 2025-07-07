/*
	Circular  Queue
*/

#include<stdio.h>
#include<conio.h>
int cq[5],n=5,f=-1,r=-1;
void main()
{
   void insert();
   void del();
   void disp();
   int ch;
   do
   {   clrscr();
       printf("\n\n\t\t\t Circular Queue Operation");
       printf("\n\t\t\t 1. Insert");
       printf("\n\t\t\t 2. Delete");
       printf("\n\t\t\t 3. Display");
       printf("\n\t\t\t 4. Exit");
       printf("\n\n\t\t\tEnter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
	   case 1:
		    insert();
		    break;
	   case 2:
		    del();
		    break;
	   case 3:
		    disp();
		    break;
	   case 4:
		    break;
	   default:
		   printf("\n\n\t\t\tWrong choice ..! try again....");
       }

       getch();
   }while (ch!=4);
//getch();
}


void insert()
{
	int itm;

	if(r==n-1)
	  r=0;
	else
	  r++;

	if(r==f)
	{
		printf("\n\n\t\t\tCircular Queue is overflow...");
		if(r==0)
		  r=n-1;
		else
		  r--;
		return;
	}
		printf("\n\n\t\t\tEnter the element : ");
		scanf("%d",&itm);
		cq[r]=itm;

	if(f==-1)
		f=0;

}

void del()
{
	int itm;

	if(f==-1)
	{
		printf("\n\n\t\t\tCircular Queue is Underflow...");
		return;
	}

	itm=cq[f];
	cq[f]=0;
	if(f==r)
	  {
		  f=r=-1;
		  return;
	  }
	if(f==n-1)
	   f=0;
	else
	   f++;
	printf("\n\n\t\t\t%d item is deleted from the Circular queue",itm);
}

void disp()
{
	int i;

	if(f==-1)
	{
		printf("\n\n\t\t\tCircular Queue is Underflow...");
		return;
	}

	for(i=0;i<n;i++)
		printf("\n\t\t cq[%d] : %d ",i,cq[i]);
}
