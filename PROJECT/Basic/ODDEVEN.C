/*
	To check the value is odd or even.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n\t\tEnter a value of N:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n\t\tNo is even.");
		printf("\n\t\t%d is even.",n);
	}
	else
	printf("\n\t\tNo is odd.");
	n%2==0?printf("\n\t\t No : %d is even",n):printf("\n\t\t No : %d is odd",n);
	getch();
}