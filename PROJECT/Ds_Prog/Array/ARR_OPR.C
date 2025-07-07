/*
	Array Operation
		1. insert
		2. Delete
		3. Traverse  (Display the contain)
		4. Exit
*/
#include<stdio.h>
#include<conio.h>

int arr[5],n=0;
void disp();
void main()
{
	void ins();
	void del();

	int op;
	do
	{
	clrscr();
	printf("\n\n\t\t Array Operation");
	printf("\n\n\t\t 1. Insert");
	printf("\n\t\t 2. Delete");
	printf("\n\t\t 3. Display");
	printf("\n\t\t 4. Exit");
	printf("\n\n\t\t Enter your option:");
	scanf("%d",&op);

		switch(op)
		{
			case 1:
				ins();
			      //	disp();
				break;
			case 2:
				del();
			      //	disp();
				break;
			case 3:		disp();
				break;
			case 4:
				break;
			default:
				printf("\n\n\t\tWrong choice ! Try again.....");

		}

		getch();
	}while(op!=4);
}
void ins()
{
	int j,p,itm;
	j=n;
	printf("Enter the position:");
	scanf("%d",&p);
	p--;
	if(!(p>=0 && p<=n))
	{
		printf("\n\n\t\tPosition must be between 1 and %d",n+1);
		return;
	}

	while(j>=p)
	{
	   arr[j+1]=arr[j];
	   j--;
	}
	printf("Enter the Item:");
	scanf("%d",&itm);
	arr[p]=itm;
	if (n!=5)
		n++;

	disp();
}
void disp()
{
   int k=0;
   if (n==0)
   {
	printf("\n\n\t\tData does not exist.");
	return;

   }
   while(k<n)
   {
	printf(" %d",arr[k]);
	k++;
   }
}
void del()
{
	int j,p,itm;

	printf("Enter the position:");
	scanf("%d",&p);
	p--;
	if(!(p>=0 && p<n))
	{
		printf("\n\n\t\tPosition does not exist.");
		return;
	}
	itm=arr[p];
	for(j=p;j<=n;j++)
	{
		arr[j]=arr[j+1];
	}
	n--;
	printf("%d item is deleted.",itm);
}