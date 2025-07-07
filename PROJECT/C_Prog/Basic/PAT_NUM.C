/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("\n\n\t\t Enter a value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d ",j);
		}
	   printf("\n");
	}

	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d ",j);
		}
	   printf("\n");
	}

getch();
}