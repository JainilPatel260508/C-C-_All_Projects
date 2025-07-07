/*
	Simple Queue
*/

#include<stdio.h>
#include<conio.h>
int q[5],n=5,f=-1,r=-1;
void main()
{
   void insert();
   void del();
   void disp();
   int ch;
   do
   {   clrscr();
       printf("\n\n\t\t\t Simple Queue Operation");
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

	if(r>=n-1)
	{
		printf("\n\n\t\t\tQueue is overflow...");
		return;
	}
		r++;
		printf("\n\n\t\t\tEnter the element : ");
		scanf("%d",&itm);
		q[r]=itm;

	if(f==-1)
		f=0;

}

void del()
{
	int itm;

	if(f==-1)
	{
		printf("\n\n\t\t\tQueue is Underflow...");
		return;
	}

	itm=q[f];

	if(f==r)
		f=r=-1;
	else
		f++;

	printf("\n\n\t\t\t%d item is deleted from the simple queue",itm);

}

void disp()
{
	int i;

	if(f==-1)
	{
		printf("\n\n\t\t\tQueue is Underflow...");
		return;
	}

	printf("\n\n\t\tFront ->");

	for(i=f;i<=r;i++)
		printf("  %d ",q[i]);

	printf("<- Rear");


}
