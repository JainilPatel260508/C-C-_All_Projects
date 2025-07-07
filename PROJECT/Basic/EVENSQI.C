//sum of 2^2+4^4+6^6....N^n

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n=0, i=0, s=0;

	clrscr();

	printf("\n\n\tInput N:");
	scanf("%d",&n);

	for(i=0;i<=n;i=i+2);

	{ s=s+pow(i,i);
	}
	printf("\n\n\t S=%d",&s);


	getch();
}