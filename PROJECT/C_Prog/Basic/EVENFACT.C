/*
	s=2!+4!+6!+.....+N!
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	long int n,i,s=0, f=1;
	clrscr();

	printf("\n\n\t Input N:");
	scanf("%ld",&n);

	for(i=2;i<=n;i=i+2)
	{
	 f=f*i*(i-1);
	 s=s+f;
	}
	printf("\n\n\t S= %ld",s);
	getch();
}
