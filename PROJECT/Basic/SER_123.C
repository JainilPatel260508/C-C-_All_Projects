/*
	s=1+2+3+4+5+....+N
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0,s=0,i=0;
	clrscr();
	printf("\n\n\t\tEnter a value of N:");
	scanf("%d",&n);
	printf("\nI=i+1\ts=s+i\ti<n");
   l1:	i=i+1; //i++

	s=s+i;
	printf("\n %d\t%d",i,s);
	if(i<n)
	{
	    printf("\tT");
	    goto l1;

	}
	else
	{
	printf("\tF");
	printf("\n\n\t\t Sum of Series: %d",s);
	}
	getch();


}