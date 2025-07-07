#include<stdio.h>
#include<conio.h>
void getmat(int [][3]);
void dispmat(int [][3]);
void addmat(int [][3],int [][3], int [][3]);

void main()
{
	int m1[3][3],m2[3][3],rm[3][3];
	int i,j;
	clrscr();
	getmat(m1);
	getmat(m2);
	addmat(m1,m2,rm);
	dispmat(m1);
	dispmat(m2);
	printf("\n\tAddition of two Matrix(Resulted matrix) :\n");
	dispmat(rm);
getch();
}

void addmat(int m1[][3],int m2[][3], int r[][3])
{
	int i,j;
	printf("\n\n\t\tAdded Two matrix");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   r[i][j]=m1[i][j]+m2[i][j];
		}
	}
}
void getmat(int m[][3])
{
	int i,j;
	printf("\n\n\t\tEntera value of Matrix:");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   scanf("%d",&m[i][j]);
		}
	}
}
void dispmat(int m[][3])
{
	int i,j;
	printf("\n\n\t\tMatrix:\n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		{
		   printf(" %3d",m[i][j]);
		}
		printf("\n");
	}
}