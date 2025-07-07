/*
	1
	2 3
	4 5 6
	7 8 9 10

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k=1;
	clrscr();
	printf("\n\n\t\t Enter a value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%2d ",k++);
		}
	   printf("\n");
	}


getch();
}