/*
	Priority Queue
*/
#include<stdio.h>
#include<conio.h>
int pq[5][5],r[5],f[5],n=5;
void insert();
void disp();
void del();
void main()
{
   int ch,i;
    for(i=0;i<5;i++)
    {
       f[i]=-1;
       r[i]=-1;
    }
   do
   {   clrscr();
       printf("\n\n\t\t\t Priority Queue Operation");
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
		   printf("\n\n\t\tWrong choice ..! try again....");
		   break;
       }
       getch();
   }while (ch!=4);
//getch();
}
void insert()
{
	int pri,itm;
	printf("\n\n\t\tEnter the priority[0 to 4]:");
	scanf("%d",&pri);
	if(r[pri]==n-1)
	   r[pri]=0;
	else
	   r[pri]=r[pri]+1;
	//overflow
	if(f[pri]==r[pri])
	 {
	     printf("\n\n\t\t Priority Queue is overflow..");
	     if(r[pri]==0)
		r[pri]=n-1;
	     else
		r[pri]=r[pri]-1;
		return;
	 }
	 printf("\n\n\t\tEnter the Item:");
	 scanf("%d",&itm);
	    pq[pri][r[pri]]=itm;
	    if(f[pri]==-1)
	       f[pri]=0;
     disp();
}
void del()
{
	int k=0,itm;
	while(f[k]==-1 && k!=n)
	{
	   k++;
	}
	if(k==n)
	{
	   printf("\n\n\t\tPriority Queue is underflow...");
	   return;
	}
	itm=pq[k][f[k]];
	pq[k][f[k]]=0;

	if(f[k]==n-1)
	  f[k]=0;
	else if(f[k]==r[k])
	      {
		f[k]=r[k]=-1;
	      }
	      else
		f[k]=f[k]+1;
	 printf("\n\n\t\t %d is deleted from priority queue.",itm);
	 disp();
}
void disp()
{
	int i,j;
	printf("\n\n\t\t pri Front Rear  Priority Queue");
	printf("\n\t\t ~~~ ~~~~~ ~~~~  ~~~~~~~~~~~~~~\n");

	for(i=0;i<n;i++)
	{
	   printf("\n\t\t %2d   %2d    %2d",i,f[i],r[i]);
	   for(j=0;j<n;j++)
	   {
	       printf("	 %4d ",pq[i][j]);
	   }
	}
}
