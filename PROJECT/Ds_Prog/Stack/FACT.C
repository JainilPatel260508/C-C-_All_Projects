/*
	Fact(n)  1 if n=1
		   n*fact(n-1) otherwise
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int fact(int);
	int n;
	clrscr();
	printf("\n\n\t\tEnter the value of N:");
	scanf("%d",&n);
	printf("\n\t\tFact: %d",fact(n));
	getch();
}
int fact(int n)
{
	static int f=1;
	if(n==1)
	  return 1;
	 else
	   f=n*fact(n-1);  //push operation
     return f;//pop operation
}
