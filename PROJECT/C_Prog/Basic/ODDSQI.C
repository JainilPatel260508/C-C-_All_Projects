//sum of 1^1+3^3+5^5....N^n

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n=0, i=-1, s=0;

	clrscr();

	printf("\n\n\tInput N:");
	scanf("%d",&n);

	for(i=-1;i<=n;i=i+2);

	{ s=s+pow(i,i);
	}
	printf("\n\n\t S=%d",&s);


	getch();
}