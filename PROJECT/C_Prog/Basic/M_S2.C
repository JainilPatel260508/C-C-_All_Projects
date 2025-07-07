// small 2
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	clrscr();
	printf("\n\t\tUsing pseudo code");
	printf("\n\t\tEnter the value of x:");
	scanf("%d",&x);
	printf("\n\t\tEnter the value of y:");
	scanf("%d",&y);

	if(x>y)
	printf("\n\t\ty is smaller than x");
	else
	printf("\n\t\tx is smaller than y");

	printf("\n\t\t----------------------------");
	printf("\n\t\tternery operation");
	x>y?printf("\n\t\ty is smaller"):printf("\n\t\tx is smaller");

	getch();
}