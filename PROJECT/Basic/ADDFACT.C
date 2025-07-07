// 1!+2!+3!.......N

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,i,s=0,f=1;
	clrscr();

	printf("\n\n\t Input N:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	 f=i*f;
	 s=s+f;
	}
	printf("\n\n\t S= %d",s);
	getch();
}
