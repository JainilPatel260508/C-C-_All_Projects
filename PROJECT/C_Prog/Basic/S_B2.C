/*
   Big 2
*/

#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z;

	clrscr();

	printf("\n\tEnter x:");
	scanf("%d",&x);

	printf("\n\tEnter y:");
	scanf("%d",&y);

	if(x>y)
	printf("x is greater than y");

	else
	printf("y is greater than x");

/*----------------------------------------------------------------------------*/
	printf("\n--------------------------------------------------------------------------------------");

	(x>y)?printf("\nx is greater than y"):printf("\ny is greater than x");

	printf("\n\t\t%d is big",x>y?x:y);
	z=x>y?x:y;
	printf("\n\t\t%d is big",z);
	getch();
}