/*
	-ve, +ve, zero

*/
#include<stdio.h>
#include<conio.h>

void main()

{
	int n;
	clrscr();
	printf("\n\t\tEnter the value of N;");
	scanf("%d",&n);

	if(n<0)
	{
		printf("\n\t\tno. is negative.");
	       printf("\n\t\tno. %d is -ve",n);
	}
	else
		if(n==0)
	{
		printf("\n\t\tno. is zero.");
	}
	else
		printf("\n\t\tno. is positive.");


	printf("\n\t\using operation");

	n==0?printf("\n\t\t no. is zero."):n<0?printf("\n\t\tno. is negative."):printf("\n\t\tno. is positive");

	      getch();

}