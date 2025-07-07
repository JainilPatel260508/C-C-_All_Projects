// Multiplication Table
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,i,j=10,s=0;
	clrscr();

	printf("\n\n\t Input N:");
	scanf("%d",&n);

	for(i=1;i<=j;i++)
	{
	    s=n*i;
	    printf("\n\t%d x %3d = %3d ",n,i,s);
	}
	printf("\n\t----------------while loop---------------\n\t");

	i=1;
	while(i<=j)
	{
		s=n*i;
		 printf("\n\t%d x %3d = %3d ",n,i,s);
		 i++;
	}

	getch();
}
