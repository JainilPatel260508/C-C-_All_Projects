/*
	Double ended Queue -->
				  Input Restricted
				  ->Right Insert
				  ->Left and Right Delete
				   Output Restricted
				  ->Left Delete
				  ->Left and Right Insert
*/
#include<stdio.h>
#include<conio.h>
int dq[5],r=-1,f=-1,n=5;
void rins();
void rdel();
void ldel();
void disp();
void main()
{
   int ch;
   do
   {   clrscr();
	   printf("\n\n\t\t\t DQ Inputed Restricted Operation\n");
	   printf("\n\t\t\t 1. Insert");
	   printf("\n\t\t\t 2. Left Delete");
	   printf("\n\t\t\t 3. Right Delete");
	   printf("\n\t\t\t 4. Display");
	   printf("\n\t\t\t 5. Exit");
	   printf("\n\n\t\t\tEnter your choice:");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	   case 1:
			rins();
			break;
	   case 2:
			ldel();
			break;
	   case 3:
			rdel();
			break;
	   case 4:
			disp();
			break;
	   case 5:
			break;
	   default:
		   printf("\n\n\t\tWrong choice ..! try again....");
		   break;
	   }
	   getch();
   }while (ch!=5);
//getch();
}
void rins()
{
	if(r>=n-1)
	{
	   printf("\n\n\t\t Dq is overflow.");
	   return;
	}
	r++;
	printf("\n\n\t\tEnter the item:");
	scanf("%d",&dq[r]);
	if(f==-1)
	   f=0;
	disp();
}

void ldel()
{
	if(f==-1)
	{
	   printf("\n\n\t\t Dq is underflow.");
	   return;
	}
	printf("\n\n\t\t %d is deleted from dq.",dq[f]);
	dq[f]=0;
	if(f==r)
	  f=r=-1;
	else
	  f++;
	disp();
}
void rdel()
{
  if(r==-1)
	{
	   printf("\n\n\t\t Dq is underflow.");
	   return;
	}
	printf("\n\n\t\t %d is deleted from dq.",dq[r]);
	dq[r]=0;
	if(f==r)
	  f=r=-1;
	else
	  r--;
	disp();
}
void disp()
{
  int i;
  if(f==-1)
	{
	   printf("\n\n\t\t Dq is underflow.");
	   return;
	}
   printf("\n\n\t\t Dq:");
   for(i=0;i<n;i++)
	 printf(" %d",dq[i]);
}

