/*
	GCD(m,n)  GCD(n,m) if n>m
		  m        if n=0
			   GCD(n,mod(m,n)) otherwise
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int GCD(int,int);
	int n,m;
	clrscr();
	printf("\n\n\t\tEnter the value of N:");
	scanf("%d",&n);
	printf("\n\n\t\tEnter the value of M:");
	scanf("%d",&m);
	printf("\n\t\tGCD: %d",GCD(m,n));
	getch();
}
int GCD(int m,int n)
{
	static int f=1;
	if(n>m)
	  GCD(n,m);
	else if(n==0)
	   return m;
	 else
	   f=GCD(n,m%n);  //push operation
     return f;//pop operation
}
