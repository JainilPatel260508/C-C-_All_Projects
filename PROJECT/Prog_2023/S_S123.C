/*
	S=1+2+3+4+5+....+N
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=0,s=0;
	clrscr();
	printf("\n\n\t\t Enter a value of N:");
	scanf("%d",&n);
 l1:	i=i+1;
	s=s+i;
	if(i<n)
	 goto l1;
	else
	 printf("\n\n\t\t Sum of series : %d",s);

    getch();
}