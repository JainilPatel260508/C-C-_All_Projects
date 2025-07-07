#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	swap();
}
int swap()
{
	int a,b;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\n the swapped first number is %d",a);
	printf("\n the swapped second number is %d",b);


getch();
}