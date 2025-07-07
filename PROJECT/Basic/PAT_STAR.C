/*
	*
	* *
	* * *
	* * * *
	* * * * *
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
		  printf("* ");
		}
	   printf("\n");
	}

getch();
}