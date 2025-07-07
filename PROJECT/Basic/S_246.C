// 2+4+6...+N

#include<stdio.h>
#include<conio.h>

void main()
{
	int n=0,s=0,i=0;
	clrscr();
	printf("\n\t\tEnter the value of N:");
	scanf("%d",&n);
	L1:  i=i+2;
	if (i<=n)
	{
		s=s+i;
		goto L1;
	}
	else
	{
		printf("\n\t\tThe sum of series is:%d",s);

	}
	   getch();
}