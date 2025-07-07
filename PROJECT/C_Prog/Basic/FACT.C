// 1*2*3*4.....*N

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	long int n,i,s;
	clrscr();
	printf("Enter the value of n:");
	scanf("%ld",&n);
	s=1;
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("The value is %ld",s);
	getch();
}