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
	int i,j,k,l=1;


	clrscr();

	printf("\n\t Enter the No. of rows:- ");
	scanf("%d",&k);

	for(i=1;i<=k;i++)
	{
		for(j=1,l=-1;j<=i;j++)
		{
		       l=l+2;
		       printf("%2d   ",l);
		}

		printf("\n");

	}

	getch();
}