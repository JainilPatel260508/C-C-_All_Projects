/*
	Tower of Hanoi
*/
#include<stdio.h>
#include<conio.h>
//#include<TOH.c>
void twf(int,char,char,char);

void main()
{
	int n  ;
	clrscr();
	printf("\n\n\t\tEnter the  value of N:");
	scanf("%d",&n);
	twf(n,'A','B','C');
	getch();
}
void twf(int n,char a,char b, char c)
{
	if(n==1)
	{
		printf("\n Move disk %d from pef %c to %c",n,a,c);
		return;
	}
	twf(n-1,a,c,b);
		printf("\n Move disk %d from pef %c to %c",n,a,c);
	twf(n-1,b,a,c);
}