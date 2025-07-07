/*
	GCD(m,n) ={ gcd(n,m) if n>m
		    return m if n=0
		    GCD(n,m%n) otherwise
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int GCD(int,int);
	int gcd,m,n;
	clrscr();
	printf("\nEnter a value of M:");
	scanf("%d",&m);
	printf("\nEnter a value of N:");
	scanf("%d",&n);
	gcd=GCD(m,n);
	printf("GCD:%d",gcd);
	getch();
}
int GCD(int m, int n)
{
	if(n>m)
		GCD(n,m);
	else if(n==0)
	       return m;
	else
		GCD(n,m%n);
//    return 1;
}

