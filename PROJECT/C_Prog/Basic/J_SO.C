/*
	s=1+3+5+7......+n
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n=0,i=-1,s=0;

	clrscr();


	printf("\n\n\t Enter the value of N:");
	scanf("%d",&n);

   L1:	i=i+2;

	if(i<=n)
	{
		s=s+i;
		goto L1;
	}
	else
	{
		printf("\n\n\t\tsum of series:%d",s);
	}

	getch();
}