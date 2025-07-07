#include<stdio.h>
#include<conio.h>

void main()
{
	int m1[3][3],m2[3][3],rm[3][3];
	int i,j;
	clrscr();
	printf("\n\n\t\tEntera value of Matrix 1:");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   scanf("%d",&m1[i][j]);
		}
	}
	printf("\n\n\t\tEntera value of Matrix 2:");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   scanf("%d",&m2[i][j]);
		}
	}
	printf("\n\n\t\tAdded Two matrix");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   rm[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("\n\tMatrix 1:");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   printf("%d",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n\tMatrix 2:");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   printf("%d",m2[i][j]);
		}
		printf("\n");
	}
	printf("\n\tAddition of two Matrix(Resulted matrix) :");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   printf("%d",rm[i][j]);
		}
		printf("\n");
	}

getch();
}